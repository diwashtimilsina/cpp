#include<iostream>
#include<iomanip>
  int main (){
 float number1 {1.23213213213212321321321321};
 double number2 {2.321321321313234567888876543};
 long double number3 {3.12322421213232213312};
 
 std :: cout <<"size of float is " << sizeof(float) << std :: endl;
 std :: cout <<"size of double is " << sizeof(double) << std :: endl;
 std :: cout <<"size of long double is " << sizeof(long double) << std :: endl;
 
 //printing before precision;
   
  std :: cout <<"before precision float" << number1 << std :: endl;
  std :: cout <<"double " << number2 << std :: endl;
  std :: cout <<"long double" << number3 << std :: endl;
  
  //using precision concept
  std :: cout << std :: setprecision(7);
  std :: cout << "float" << number1 << std :: endl;
  std :: cout << "double" << number2 << std :: endl;
  std :: cout << "long double" <<number3 << std :: endl;
  
  return 0;
  }
  
