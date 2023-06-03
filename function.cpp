#include<iostream>
int add(int a ,int b){
int sum;
sum=a+b;
return sum;
}
int main(){
int a=5,b=7,sum;
sum=a+b;
sum=add(a,b);

std :: cout<<"the sum is " <<sum << std:: endl;

return 0;


}
