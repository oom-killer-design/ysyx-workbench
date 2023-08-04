ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
endif

all:
	@echo "-- VERILATE & BUILD --------"
	$(VERILATOR) -cc --exe --trace --build -j vsrc/top.v csrc/main.cpp
	@echo "-- RUN ---------------------"

	@rm -rf logs
	@mkdir -p logs
	obj_dir/Vtop +trace

	@echo "-- DONE --------------------"

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	gtkwave  logs/dump.vcd

include ../Makefile
