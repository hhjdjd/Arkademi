#include <iostream>
using namespace std;
int main(){

int i,j,x;
    cout<<"masukkan jumlah bilangan : ";
    cin>>x;
    for (i=1;i<=x;i++){
    for (j=1;j<=i*2;j=j+2){

    cout<<j<<" ";
    }
	cout<<endl;
    }
    return 0;

}