using namespace std;
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

class Stud
{
    public:
        static int RNo;
        char Name[20];
        int Maths,Chem,Phy;

        Stud();
        Stud(Stud &);
        void Accept_Info();
        void Display_Info();

        ~Stud();
    private:
        float Per;
        void Calculate_Percentage();
};
int Stud :: RNo = 100;

Stud :: Stud()
{
        Maths = Chem = Phy = 0;
}
Stud :: Stud (Stud &Std)
{
        strcpy(Name,Std.Name);
        Maths = Std.Maths;
        Phy = Std.Phy;
        Chem = Std.Chem;

        Calculate_Percentage();
}
Stud :: ~Stud()
{
        cout<<"\n\t Entered In Destructor ";
}
void Stud :: Accept_Info()
{
        cout <<"\n\n\t Enter Student Name => ";
        gets(Name);

        cout <<"\n\t Enter Marks Of Maths => ";
        cin >> Maths;

        cout <<"\n\t Enter Physics Marks => ";
        cin >>Phy;

        cout <<"\n\t Enter Chemistry Marks => ";
        cin >>Chem;

        Calculate_Percentage();
}
void Stud :: Display_Info()
{
        cout<<"\n\t ==========***==========\n";

        cout<<"\n\t Student Roll NO => "<< RNo;
        RNo++;
        cout<<"\n\t Student Name => "<< Name;
        cout<<"\n\t "<<Name<<" Percentage => "<<Per;

        cout<<"\n\n\t ==========***==========";
}
void Stud :: Calculate_Percentage()
{
        Per = (float(Maths + Phy +Chem))/3;
}
int main()
{
        Stud STD1;
        STD1.Accept_Info();
        system("cls");

        STD1.Display_Info();

        Stud STD2(STD1);
        STD2.Display_Info();

        getch();
        return 0;
}
