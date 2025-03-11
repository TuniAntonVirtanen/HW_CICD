#include "Vtop.h"
#include "verilated.h"
int main() {
    Verilated::commandArgs(0, nullptr);
    Vtop* top = new Vtop;
    top->eval();
    delete top;
    return 0;
}