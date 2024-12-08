#include <iostream>
using namespace std;

int main() {

   int day;
   float fine;

   cout<< " enter day: ";
   cin >> day;

   if (day>3)
      fine = 6.00;
   else if (day>= 7)
      fine = 10.00;
   else if (day>=10)
      fine = 20.00;
   
   cout << "you fine is RM: " << fine << endl;

}

  