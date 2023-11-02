#include <iostream>
using namespace std;
int main()
{
    int option;
    cout << "1. To Check Prime Number. \n2. Find range for Specific Prime Number. "  << endl;
    cout < "Select your option: ";
    cin >> option;
	switch(option)
   {
    case 1:
    {
            int number;
            cout << "Enter a number: ";
            cin >> number;
            bool check = true;
            int a ;
            for  (a = 2; a < number; a++)
            {
              if (number % a == 0)
                 {
                  check = false;
                  break;
                 }

            }
            if(check)
            {cout << "\n It is a prime Number."<<endl;
            break;}
            else
            {cout << "\n It is not a prime number."<<endl;}

             break;
    }
	case 2:
             int minimum;
             cout << " Enter minimum: ";
             cin >> minimum;

           int maximum;
           cout << "\n Enter maximum: ";
           cin >> maximum;
           int b ,c ;
       for( int c = minimum ; c <= maximum; c++)
          {
			bool check = true;
       for  (int b = 2; b < c; b++)
       {
       if (c % b == 0)
       {
       check = false;
        break;
        }
        }
       if(check)
       {
         cout<< c <<" ";
       }

   }
 }
}
