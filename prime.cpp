#include<iostream>
class prime {
int n;
public :
 void get_number(){
std :: cout << "enter number" << std :: endl;
std :: cin >> n;
}
void function (){
int count=0,i;
for(i=1;i<=n;i++){
if(n%i==0){
count++;
}
}
if (count <=2){
std :: cout << "prime" << std :: endl;
}
else {
std :: cout << "not prime" << std :: endl;
}

}
};
int main (){
prime obj1;
obj1.get_number();
obj1.function();
return 0;
}

