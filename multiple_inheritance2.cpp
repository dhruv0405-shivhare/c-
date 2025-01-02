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
};
class customer:public sbi , public axis
{
    public:customer()
    {
        cout<<"customer memory \n";
    }
~customer()
{
        cout<<"customer delete \n";
}

};
int main()
{
    customer ct;

}
