#include "Vtop.h"
#include "verilated.h"
int main() {
    Verilated::commandArgs(0, nullptr); //(const char**)
    Vtop* top = new Vtop;
	
    top->in_signal = 0;
    top->eval();
    std::cout << "Test 1: Input=0, Output1=" << top->out_signal1 << ", Output2=" << top->out_signal2 << std::endl;

    // Test case 2: Input = 1
    top->in_signal = 1;
    top->eval();
    std::cout << "Test 2: Input=1, Output1=" << top->out_signal1 << ", Output2=" << top->out_signal2 << std::endl;

    // Check results
    if (top->out_signal1 != 0 || top->out_signal2 != 0) {
        std::cerr << "Test 1 failed!" << std::endl;
        return 1; // Exit with error
    }
    if (top->out_signal1 != 1 || top->out_signal2 != 1) {
        std::cerr << "Test 2 failed!" << std::endl;
        return 1; // Exit with error
    }

    std::cout << "All tests passed!" << std::endl;

    delete top;
    return 0; // Success
}