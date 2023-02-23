//Compiler version gcc  6.3.0
#include <iostream>
using namespace std;
#include <conio.h>


class Sub
{
   
   public:
     
         int N1,N2;
     
         Sub()
         {    
              cout << "\n\t Call Constructor => "<<endl;
     
              cout <<"\n\t Enter 2 Numbers => ";
              cin >> N1 >> N2;
    
              Substraction();
    
              cout <<endl<<"\t"<<N1<<" - "<<N2<< " = "<<Res;
         }
         
           
         ~Sub();  
     
   private:
     
         int Res;
         void Substraction ();
     
};

int main()
{
    Sub Obj; 
   
    getch();
    return 0;
}
void Sub :: Substraction() 
{
    Res = N1 - N2;
   
}
Sub :: ~Sub()
{
    cout << endl <<"\n\t Distructor.";
}
