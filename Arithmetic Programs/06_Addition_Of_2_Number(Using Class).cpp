//Compiler version gcc  6.3.0
#include <iostream>
using namespace std;
#include <conio.h>


class Add
{
   
   public:
     
         int N1,N2;
     
         Add()
         {    
              cout << "\n\t Call Constructor => "<<endl;
     
              cout <<"\n\t Enter 2 Numbers => ";
              cin >> N1 >> N2;
    
              Addition();
    
              cout <<"\n\t Addition  = " <<Sum;
         }
         
           
         ~Add();  
     
   private:
     
         int Sum;
         void Addition ();
     
};

int main()
{
    Add Obj; 
   
   getch();
   return 0;
}
void Add :: Addition() 
{
   Sum = N1 + N2;
   
}
Add :: ~Add()
{
   cout << endl <<"\n\t Distructor.";
}
