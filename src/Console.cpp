#include "HTCDesireUSBDriver.cpp"
#include <iostream>


int main() {
    std::cout << "Console started..." << "\n";
    //HTCDesireUSBDriver* htcDesireUSBDriver = new HTCDesireUSBDriver();
    //htcDesireUSBDriver->DoStuff();
    HTCDesireUSBDriver htcDesireUSBDriver;
    htcDesireUSBDriver.DoStuff();
    std::cout << "Console ended." << "\n";
    return 0;
}