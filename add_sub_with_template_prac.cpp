#include <iostream>
using namespace std;

template<class T>
class Arithmatic
{
    private:
    T a;
    T b;
    public:
    Arithmatic(T a, T b)
    {
        this->a=a;
        this->b=b;
    }
    

    T add()
    {
        T c;
        c=a+b;

        return c;
    }

    T sub()
    {
        T c;
        c=a-b;

        return c;
    }
};

int main()
{
    Arithmatic<int> ar(2,2);
    cout<<ar.add()<<endl;

    Arithmatic<float> af(2.2,2.1);
    cout<<af.sub()<<endl;
}