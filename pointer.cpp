#include<iostream>
int main(void){
int a;
int *ptr;
std :: cout << "enter number" << std :: endl;
std :: cin >> a;
ptr=&a;
std :: cout << "value of a is : " << a << std :: endl;
std :: cout << "address of a is :" << &a << std :: endl;
std :: cout << "value of pointer is :" << *ptr << std :: endl;
std :: cout << "adress of popinter is " << ptr << std :: endl;
return 0;
}
