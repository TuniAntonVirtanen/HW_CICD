#include "Vtop.h"
#include "verilated.h"
int main() {
    Verilated::commandArgs(0, (const char**)nullptr);
    Vtop* top = new Vtop;
    top->eval();
    delete top;
    return 0;
}