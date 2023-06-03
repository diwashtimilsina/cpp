#include<iostream>
int main (void){
std :: cout << "the details are :" << std :: endl;
int a[3][3],b[3][3],sum[3][3];
int i,j;
for(i=0;i<3;i++){
for(j=0; j<3; j++){
std :: cin >> a[i][j] >> b[i][j];
}
}
for(i=0;i<3;i++){
for(j=0;j<3;j++){

sum[i][j]=a[i][j] + b[i][j];
}
} 
std :: cout << "the sum is :" << std :: endl;
for(i=0; i<3; i++){
for (j=0; j<3; j++){

 std :: cout << sum[i][j];
 
}

}
return 0;
}
