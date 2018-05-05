#include <iostream>
using namespace std;
class Calculator
{
public:
    int Calculate(int,int,char);
};
int main()
{   
    int x,y,result;
    char oper;

    cout<<"hello,I'm Calculate!"<<endl;
    cout<<"please enter num operator num2:"<<endl;
    cin >> x >> oper >> y;
    Calculator c;
    result=c.Calculate(x,y,oper);
    cout<<"Reuslt is "<<result<<endl;
    cin.ignore();
    cin.get();
    return 0;
}

int Calculator::Calculate(int x,int y,char oper)
{
    switch (oper)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    default:
        // cin >> x >> oper >> y;
        // Calculate(x,y,oper);
        return 0;
    }
}

