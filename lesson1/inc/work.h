#pragma once

#include <iostream>

class Work
{
public:
    void run();
    virtual ~Work();

protected:
    virtual bool step2() = 0;
    virtual void step4() = 0;

private:
    void step1();
    void step3();
    void step5();
};