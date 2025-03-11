#include "Vtop.h"
#include "verilated.h"
#include <iostream>

int main() {
    Verilated::commandArgs(0, (const char**)nullptr); //(const char**)
    Vtop* top = new Vtop;
	int out1 = 0;
	int out2 = 0;
	
	// Test 1: inputting 0
    top->in_signal = 0;
    top->eval();
	
	out1 = top->out_signal1;
	out2 = top->out_signal2;
	
    std::cout << "Test 1: Input=0, Output1=" << out1 << ", Output2=" << out2 << std::endl;

	if (out1 != 0 || out2 != 0) {
        std::cerr << "Test 1 failed!" << std::endl;
        return 1; // Exit with error
    }

    // Test 2: inputting 1
    top->in_signal = 1;
    top->eval();
	
	out1 = top->out_signal1;
	out2 = top->out_signal2;
	
    std::cout << "Test 2: Input=1, Output1=" << out1 << ", Output2=" << out2 << std::endl;

    if (out1 != 1 || out2 != 1) {
        std::cerr << "Test 2 failed!" << std::endl;
        return 1; // Exit with error
    }

    std::cout << "All tests passed!" << std::endl;

    delete top;
    return 0; // Success
}