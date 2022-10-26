#include<iostream>
#include<ctime>
#include<windows.h>
using namespace std;

int main(){
    int h,m,s;
    
    cout<<"Set the time in HH:MM:SS format: "<<endl;
    cin>>h;
    cin>>m;
    cin>>s;

    if(h>12 || m>59 || s>59){
        cout<<"ENter a valid time !!!"<<endl;
        

    }

    else{
        while(1){
        s++;
        if(s>59){
            m++;
            s=0;
        }
        if(m>59){
            h++;
            m=0;
        }
        if(h>12){
            h=1;
        }
            cout<<"The time is : "<<h<<":"<<m<<":"<<s<<endl;
            Sleep(1000);
            system("cls");
    }
}
return 0;

}
