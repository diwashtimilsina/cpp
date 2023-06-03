#include<iostream>
int main(){
bool a;
bool red_colour {true};
bool green_colour {false};
   if (red_colour == true){
   
   std :: cout <<"Next step" <<std :: endl;
   }
   
   else {
   
   std :: cout << "exit" << std :: endl;
   goto bottom;
   }
  std :: cout << "bool default value" << a << std :: endl;
bottom:
return 0;
}
