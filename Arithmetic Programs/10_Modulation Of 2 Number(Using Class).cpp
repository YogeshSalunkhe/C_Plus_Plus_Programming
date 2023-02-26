//Compiler version gcc  6.3.0
#include <iostream>
using namespace std;
#include <conio.h>


class Mod
{
   
   public:
     
         int N1,N2;
     
         Mod()
         {    
              cout << "\n\t Call Constructor => "<<endl;
     
              cout <<"\n\t Enter 2 Numbers => ";
              cin >> N1 >> N2;
    
              Modulation ();
    
              cout <<endl<<"\t"<<N1<<" % "<<N2<< " = "<<Res;
         }
         
           
         ~Mod();  
     
   private:
     
         int Res;
         void Modulation ();
     
};

int main()
{
    Mod Obj; 
   
    getch();
    return 0;
}
void Mod :: Modulation  () 
{
    Res = N1 % N2;
   
}
Mod :: ~Mod()
{
    cout << endl <<"\n\t Distructor.";
}
