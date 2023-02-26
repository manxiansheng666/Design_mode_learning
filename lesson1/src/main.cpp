#include <iostream>
#include "work.h"

using namespace std;

class Mywork : public Work
{
public:
    ~Mywork()
    {
        cout << "~Mywork()" << endl;
    }

private:
    bool step2() override
    {
        cout << "step2()" << endl;
        return false;
    }
    void step4() override
    {
        cout << "step4()" << endl;
    }
};

int main()
{
    Work *work = new Mywork;
    work->run();
    delete work;
    cout << "hello world!" << endl;
    return 0;
}