#include<iostream>
void arr(int *a){
int i;
for(i=0; i<5; i++){
std :: cout << *(a+i) << std :: endl;
}
}
int main(){
int a[5],i;
std :: cout << "enter 2 number" << std :: endl;
for (i=0; i<5; i++){
std :: cin >> a[i];
}
arr(a);
return 0;
}
