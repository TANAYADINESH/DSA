#include<iostream>
using namespace std;
int main(){
    float marks;
    cout<<"Enter marks:";
    cin>>marks;
    float percentage = marks/500*100;
    float attendance;
    cout<<"Enter attendance percentage:";
    cin>>attendance;
    float income;
    cout<<"Enter family income:";
    cin>>income;
    int extracurricular;
    cout<<"Enter number of extracurricular activities:";
    cin>>extracurricular;
    if(percentage>=85 && attendance>=75 && income<=50000 && extracurricular>=3)
    {
        cout<<"You are eligible for scholarship."<<endl;
    }
    else
    {
        cout<<"You are not eligible for scholarship."<<endl;
    }
    return 0;
}
    