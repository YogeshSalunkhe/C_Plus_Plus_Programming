using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
    int No = 0;

    cout<<endl<<"Enter A Number => ";
    cin>>No;

    if(No == 0)
    {
        cout<<endl<<"Given Number Is Nutral !!!";
    }
    else if(No > 0)
    {
        cout<<endl<<"Given Number Is Positive !!!";
    }
    else
    {
        cout<<endl<<"Given Number Is Negative !!!";
    }

    getch();
    return 0;
}
