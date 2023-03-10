using namespace std;
#include<iostream>
#include<conio.h>

int main()
{
    int No = 0;

    cout<<endl<<"Enter A Value => ";
    cin>>No;

    if(No > 0)
    {
        cout<<endl<<"Given Number "<<No<<" is Positive";
    }
    else
    {
        cout<<endl<<"Given Number "<<No<<" is Negative";
    }

    getch();
    return 0;
}
