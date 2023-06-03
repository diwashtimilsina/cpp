#include<iostream>
void swap(int *a ,int *b){
int temp;
temp=*a;
*a=*b;
*b=temp;
std :: cout <<"the swapped value is ::" << *a << *b << std :: endl;
}
int main(){
int a,b;
std :: cout << "enter 2 numbers :" << std :: endl;
std :: cin >> a>> b;
std :: cout << "before swaping :" << a << b << std :: endl;
swap(&a,&b);
return 0;
}
