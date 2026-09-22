#include <iostream>

using namespace std;

class Base
{
public:
    void show() const
    {
        cout << "Base public function" << endl;
    }
};

// Public Inheritance
class PublicDerived : public Base
{
};

// Private Inheritance
class PrivateDerived : private Base
{
public:
    void callBaseShow() const
    {
        show();
    }
};

int main()
{
    // Public inheritance
    PublicDerived publicObject;
    publicObject.show();

    // Private inheritance
    PrivateDerived privateObject;
    privateObject.callBaseShow();

    return 0;
}