#include "work.h"

void Work::step1()
{
    std::cout << "step1()" << std::endl;
}

void Work::step3()
{
    std::cout << "step3()" << std::endl;
}

void Work::step5()
{
    std::cout << "step5()" << std::endl;
}

void Work::run()
{
    step1();
    if (step2())
    {
        step3();
    }
    step4();
    step5();
}

Work::~Work()
{
    std::cout << "~Work()" << std::endl;
}