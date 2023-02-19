#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int No1 = 0,No2 = 0,Sum = 0;

    cout <<endl<<"\t Enter 1st Number => ";
    cin>>No1;

    cout <<endl<<"\t Enter 2nd Number => ";
    cin>>No2;

    Sum = No1 + No2;

    cout<<endl<<"\t"<<No1 <<" + "<< No2<<" = "<< Sum;

    getch();
    return 0;
}
