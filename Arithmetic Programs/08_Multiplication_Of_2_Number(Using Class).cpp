//Compiler version gcc  6.3.0
#include <iostream>
using namespace std;
#include <conio.h>


class Mult
{
   
   public:
     
         int N1,N2;
     
         Mult()
         {    
              cout << "\n\t Call Constructor => "<<endl;
     
              cout <<"\n\t Enter 2 Numbers => ";
              cin >> N1 >> N2;
    
              Multiplication ();
    
              cout <<endl<<"\t"<<N1<<" * "<<N2<< " = "<<Res;
         }
         
           
         ~Mult();  
     
   private:
     
         int Res;
         void Multiplication ();
     
};

int main()
{
    Mult Obj; 
   
    getch();
    return 0;
}
void Mult :: Multiplication () 
{
    Res = N1 * N2;
   
}
Mult :: ~Mult()
{
    cout << endl <<"\n\t Distructor.";
}
