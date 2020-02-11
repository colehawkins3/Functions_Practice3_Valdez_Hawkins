#include <iostream>
#include <iomanip>

using namespace std;

double invoiceCalculator(double,double, string,int);


int main() 
{
  double rate = 0.0, hours = 0.0, invoiceAmount = 0.0, total =0.0;
  int discount =0;
  string custName = "\0";
  double tax = .825;

  cout << fixed << setprecision(2); 
         cout << invoiceCalculator (95.00, 35.50, "Web LLC",1) << endl;
         cout << invoiceCalculator  (95.00, 20.00, "Amberway",2) << endl;
         cout << invoiceCalculator (95.00, 10.00, "Mike Jones",0) << endl;
         cout << invoiceCalculator  (95.00, 5.00, "Brick,Inc",2) << endl;
         cout << invoiceCalculator (95.0, 12.00, "Techcrunch",1) << endl;
        cout << invoiceCalculator (95.0, 25.00, "IT, LLC",0) << endl;
        cout << invoiceCalculator (95.0, 3.00, "Via, LLC",1) << endl;
  


return 0;
}


double invoiceCalculator(double rate, double hours, string custName,int discount)
{
  double invoiceAmount = 0.0, total = 0.0;
  
  double tax = .825;

  double Grossdue = rate * hours;
  double Finaldue = 0.0;
  if(discount == 1)
  { 
    invoiceAmount = (Grossdue * .90);

  }
  if(discount == 2)
  { 
    invoiceAmount = (Grossdue * .80);

  }
  if(discount == 0)
  { 
    invoiceAmount = Grossdue * 1.00;

  }
 
Finaldue = invoiceAmount * 1.0825;
  return Finaldue;
}