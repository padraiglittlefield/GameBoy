
mod = idu
.DEFAULT_GOAL := test


.PHONY:test
test:
	make verilate mod=$(target)
	make build mod=$(target)

.PHONY:make_view
make_view:
	make verilate mod=$(target)
	make build mod=$(target)
	make waves mod=$(target)

.PHONY:verilate
verilate: .stamp.verilate

.PHONY:build
build: .stamp.build


.PHONY:waves 
waves: .stamp.waves

.stamp.verilate: /home/plittlefield6/GitHub/GameBoy/rtl/$(mod).v tb_$(mod).sv	
	~/Utils/oss-cad-suite/bin/verilator --binary --trace --timing --exe --build tb_$(mod).sv /home/plittlefield6/GitHub/GameBoy/rtl/$(mod).v  --top-module tb_$(mod)
	@touch .stamp.verilate

.stamp.build: /home/plittlefield6/GitHub/GameBoy/sim/obj_dir/Vtb_$(mod)
	/home/plittlefield6/GitHub/GameBoy/sim/obj_dir/Vtb_$(mod)
	@touch .stamp.build

.stamp.waves: /home/plittlefield6/GitHub/GameBoy/sim/tb_$(mod).vcd
	~/Utils/oss-cad-suite/bin/gtkwave /home/plittlefield6/GitHub/GameBoy/sim/tb_$(mod).vcd
	@touch .stamp.waves


.PHONY: clean
clean:
	rm -rf .stamp.*;
	rm -rf ./obj_dir
	rm -rf tb_$(mod).vcd
	rm -rf test_results.log

