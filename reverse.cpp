#include <iostream>
using namespace std;

void reverse_array(int a[], int n){

for (int i=0; i<n/2; i++){
int temp=a[i];
a[i]=a[n-1-i];
a[n-1-i]=temp;
}

for(int i=0; i<n; i++){
cout<<a[i]<<" ";
}

}

int main(){

int a[]={1,2,3,4,5};
int len= sizeof(a)/sizeof(int);
reverse_array(a, len);
cout<<endl;
return 0;

}

