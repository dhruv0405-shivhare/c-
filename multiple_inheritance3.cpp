#include <iostream>
using namespace std;
class sbi
{
    public:sbi()
    {
        cout<<"SBI memory\n";
    }
~sbi()
{
        cout<<"sbi delete \n";
}
};
class axis
{
    public:axis()
    {
        cout<<"AXIS Memory\n";
    }
~axis()
{
        cout<<"axis delete \n";
}
public:void hello()
{
    cout<<"\nhello";
}
};

class customer:private axis , private sbi
{
    public:customer()
    {
        cout<<"customer memory \n";
        hello();
    }
~customer()
{
        cout<<"\ncustomer delete \n";
}

};
int main()
{
    customer ct;

}