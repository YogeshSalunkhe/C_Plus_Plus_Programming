using namespace std;
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>>
#include <conio.h>

class Bike
{
    public:
            int Bike_No;
            char Company_Name[20];
            float Purchase_Price;
            float Sales_Price;

            Bike();                                                            ///Default Constructor
            Bike(int,char[],float,float);                                      ///Parameterized Constructor
            Bike(Bike &);

            void Accept_Bike_Details();
            void Display_Bike_Details();

           ~Bike();                                                              ///Destructor

    private:
            float Profit;
            void Calculate_Profit();
};
Bike :: Bike()
{
            Bike_No = 0;
            Purchase_Price = 0.0;
            Sales_Price = 0.0;
}
Bike :: Bike(int B_No,char Nm[20],float Pr_Price,float Sl_Price)
{
            Bike_No = B_No;
            Purchase_Price = Pr_Price;
            Sales_Price = Sl_Price;
            strcpy(Company_Name,Nm);

            Calculate_Profit();
}
Bike :: Bike(Bike &Temp)
{
            Bike_No = Temp.Bike_No;
            strcpy(Company_Name,Temp.Company_Name);
            Purchase_Price = Temp.Purchase_Price;
            Sales_Price = Temp.Sales_Price;

            Calculate_Profit();
}
void Bike :: Accept_Bike_Details()
{
            cout << "\n\t Enter Bike No => ";
            cin >> Bike_No;

            fflush(stdin);

            cout <<"\n\t Enter Company Name => ";
            gets(Company_Name);

            cout << "\n\t Enter Purchase Price Of Bike => ";
            cin >> Purchase_Price;

            cout << "\n\t Enter Sales Price Of Bike => ";
            cin >> Sales_Price;

            Calculate_Profit();
}
void Bike :: Display_Bike_Details()
{
            cout<<"\n\t ===========*****==========\n";
            cout<<"\n\t Bike Number => "<<Bike_No<<".";
            cout<<"\n\t Bike Company Name => "<<Company_Name<<".";
            cout<<"\n\t Purchase Price Of Bike => "<<Purchase_Price<<".";
            cout<<"\n\t Sales Price Of Bike => "<<Sales_Price<<".";
            cout<<"\n\t Profit On Sale Of Bike => "<<Profit<<".";
            cout<<"\n\n\t ===========*****==========\n";
}
void Bike :: Calculate_Profit()
{
            Profit = Sales_Price - Purchase_Price;
}
Bike :: ~Bike()
{
            cout<<"\n\t Enter Destructor ";
}
int main()
{
            Bike Bike1;

            Bike1.Accept_Bike_Details();
            system("cls");

            Bike1.Display_Bike_Details();

            Bike Bike2(1125,"Honda City",750000,790000);
            Bike2.Display_Bike_Details();

            Bike Bike3(Bike1);
            Bike3.Display_Bike_Details();

            getch();
            return 0;
}
