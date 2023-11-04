#include<iostream>

using namespace std;

int a,b,ans;
char c;

void get_operators()
{
    cout<<"Enter 2 numbers : ";
    cin>>a>>b;
}

void calculate()
{
    cout<<"OPERATORS :\n  +\n  -\n  *\n  /\n pick one :";
    cin>>c;
    switch (c)
    {
    case'+':ans=a+b;
            break;
    case'-':ans=a-b;
            break;
    case'*':ans=a*b;
            break;
    case'/':ans=a/b;
            break;
    
    default:cout<<"\nEnter a valid operator"<<endl;
            exit(0);
    }
}

int main()
{
    char ch= 'y';
    while(1)
    {
        system("clear");
        cout<<"\n--------------CALCULATOR--------------"<<endl;
        get_operators();
        calculate();
        cout<<endl;
        cout<<"              "<<ans<<endl;
        cout<<"\nContinue(Y/N)? : ";
        cin>>ch;
        if(ch =='n'|| ch == 'N')
        {
            exit(0);
        }
    }
    return 0;
}