#include <iostream>
//#define price1 2;
//#define price2 3;

using namespace std;

void showdetails(){
    cout<<"Press \n   1)PUT PLASTIC \n\t2)PUT GLASS WASTE \n\t 3)POST A COMPLAINT \n\t4)GIFT AVAILING DETAILS"<<endl;
}

void putplastic(string name){
    int mic,q,tot;
    cout<<"DEAR "<<name<<" YOU CHOOSED TO PUT PLASTIC WASTE "<<endl;
    cout<<"ENTER THE MICRONS OF THE PLASTIC YOU BROUGHT :";
    cin>>mic;
    cout<<"\nENTER THE QUANTITY OF "<<mic<<"microns plastic: ";
    cin>>q;
    if(mic>50){
        tot=q*2;
        cout<<name<<"YOU WILL GET A REWARD AMOUNT OF "<<tot<<" FOR PUTTING "<<q<<" AMOUNT OF (50+)MICRON PLASTIC!"<<endl;
        cout<<"COLLECT YOUR REWARD!\n"<<endl;

    }
    else{
        tot=q*1;
        cout<<name<<"YOU WILL GET A REWARD AMOUNT OF "<<tot<<" FOR PUTTING "<<q<<" AMOUNT OF (50-)MICRON PLASTIC!"<<endl;
        cout<<"COLLECT YOUR REWARD!\n"<<endl;
        
    }
    
}

void putglass(string name){
    int q,tot;
    cout<<"DEAR "<<name<<" YOU CHOOSED TO PUT PLASTIC WASTE "<<endl;
    
    cout<<"\nENTER THE QUANTITY OF GLASS: ";
    cin>>q;
        tot=q*1;
        cout<<name<<"YOU WILL GET A REWARD AMOUNT OF "<<tot<<" FOR PUTTING "<<q<<" AMOUNT OF GLASS WASTE!"<<endl;
        cout<<"COLLECT YOUR REWARD!\n"<<endl;

    }
    

void complaint(string name){
    int i;
    cout<<"DEAR "<<name<<" YOU CAN CONNECT TO THE CUSTOMER SERVICE LINE NOW VIA THIS MACHINE\nPRESS 1 TO CONNECT: "<<endl;
    cin>>i;
    if(i==1){
        cout<<"CUSTOMER LINE CONNECTING..."<<endl;
    }
    else{
        cout<<"WRONG INPUT!"<<endl;
    }
    
}
void details(){
    cout<<"Rs 4 for PLASTICS ABOVE 50 MICRONS\nRs 2 for PLASTICS BELOW 50 MICRONS\nRs 3 PER SINGLE GLASS WASTE."<<endl;
}
int main(){
    int choice;
    string name;
    cout<<"|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
    cout<<"|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
    cout<<"\tWELCOME TO ASUS TRASH PRICING SYSTEM.\n"<<endl;
    cout<<"------------------------------------------------------------------------"<<endl;
    cout<<"ENTER YOUR NAME :";
    getline(cin,name);
    showdetails();

    cout<<"Enter your choice"<<endl;
    cin>>choice;

    switch(choice){
        case 1:
        putplastic(name);
        break;

        case 2:
        putglass(name);
        break;

        case 3:
        complaint(name);
        break;

        case 4:
        details();
        break;


    }



    cout<<"THANK YOU "<<name<<"..! SEE YOU LATER. <3"<<endl;
    return 0;
}
