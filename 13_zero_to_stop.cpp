#include <iostream>
using namespace std;
int main(){
    int n,sum =0;
    cout<<"Enter a number(0 to stop):";
    cin>>n;
    while(n!=0){
        sum +=n;
        cout<<"Enter a number(0 to stop):";
        cin>>n;

}
    cout<<"Sum of numbers: "<<sum<<endl;
    return 0;
}