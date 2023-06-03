#include<iostream>
int main (void){
int a[5],i;
std :: cout << "enter data" << std :: endl;
for(i=0; i<4; i++){
std :: cin >> a[i];
}
for(i=0; i<4; i++)
 std :: cout << *(a+i) << std :: endl;
return 0;
}
