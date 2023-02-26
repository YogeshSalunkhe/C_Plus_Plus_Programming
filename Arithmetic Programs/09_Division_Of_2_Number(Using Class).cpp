//Compiler version gcc  6.3.0
#include <iostream>
using namespace std;
#include <conio.h>


class Div
{
   
   public:
     
         int N1,N2;
     
         Div()
         {    
              cout << "\n\t Call Constructor => "<<endl;
     
              cout <<"\n\t Enter 2 Numbers => ";
              cin >> N1 >> N2;
    
              Division ();
    
              cout <<endl<<"\t"<<N1<<" / "<<N2<< " = "<<Res;
         }
         
           
         ~Div();  
     
   private:
     
         int Res;
         void Division ();
     
};

int main()
{
    Div Obj; 
   
    getch();
    return 0;
}
void Div :: Division () 
{
    Res = N1 / N2;
   
}
Div :: ~Div()
{
    cout << endl <<"\n\t Distructor.";
}
