#include<iostream>
using namespace std;
int main(){
    int n,x;
    cout<<"Entar the number of student : ";
    cin>>n;

    int roll[n];
    int number[n];

    for(int i=0; i<n; i++){
        cout<<"Enter the student Roll : ";
        cin>>roll[i];
        cout<<"Enter marks : ";
        cin>>number[i];
    }
    for(int i=0; i<n; i++){
        if(number[i]>=75){
            cout<<"Student Roll : "<<roll[i]<<endl;
            cout<<"Student Marks : "<<number[i]<<endl;
            cout<<"------------------------"<<endl;
        }
    }

}