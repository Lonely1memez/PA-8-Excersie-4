#include <iostream>
#include "MyInteger.h"

using namespace std;

int main()
{
   MyInteger i1;    
   MyInteger i2(5);  
   MyInteger i3 = i2;  
   MyInteger* pMyInt;  
   cout << "i1: " << i1 << endl;              
   cout << "i2: " << i2.GetValue() << endl;  
   cout << "i3: " << i3 << endl;              
   i1.SetValue(-4);
   i3 = i1 + i2;
   cout << "i3: " << i3 << endl;   
   cout << "(i2 - i1) / 2: " << (i2 - i1) / 2 << endl;  
   cout << "i2 * i1: " << i2 * i1 << endl;     
   cout << "Enter an integer: ";
   cin >> i1;   
   cout << i1 << " == " << i2 << ": ";
   if (i1 == i2)
       cout << "true" << endl;
   else
       cout << "false" << endl;
   i2 = i1;                                 
   cout << i1 << " != " << i2 << ": ";
   if (i1 != i2)
       cout << "true" << endl;
   else
       cout << "false" << endl;
   i2.SetValue(25);
   cout << "i1: " << i1 << endl;
   cout << "i2: " << i2 << endl;
   pMyInt = new MyInteger(i2);                 
   cout << "*pMyInt: " << *pMyInt << endl;     
   *pMyInt = i1;                                     
   cout << "pMyInt->GetValue(): " << pMyInt->GetValue() << endl;  
   delete pMyInt;                             
   // feel free to add more test cases below
   cout << "End of test cases." << endl;
   return 0;
}