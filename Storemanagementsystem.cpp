#include<iostream>
using namespace std;
int main ()
{ 

    int quant;
    int choice;

    int Q1=0, Q2=0, Q3=0;    //Quantity
    int S1=0, S2=0, S3=0;     //sold/occupied

    int total_1=0, total_2=0, total_3=0;      //total price 

    cout<<"\n\t Quantity of items we have ";
    cout<<"\n Product 1 available:";
    cin>>Q1;
    cout<<"\n Product 2 available :";
    cin>> Q2;
    cout<<"\n Product 3 available:";
    cin>> Q3;

    m:
    cout<<"\n\t\t\t Please Select  ";
    cout<<"\n\n1) Product 1";
    cout<<"\n\n2) Product 2";
    cout<<"\n\n3) Product 3";
    cout<<"\n\n4) Information Regarding .....";
    cout<<"\n\n5) Exit";

    cout<<"\n\n  Please enter your choice";
    cin>>choice;


    switch(choice)
    {
        case 1:
        cout<<"\n\n Enter the number of Product 1:";
        cin>>quant;
        if(Q1-S1 >=quant)
        {
            S1=S1+quant;
            total_1=total_1+quant*1200;
            cout<<"\n\n\t\t"<<quant<<"Product 1 have been alloted to you!";
        }
        else
        cout<<"\n\tOnly"<<Q1-S1<<"Product 1 Available";
        break;

        case 2:
        cout<<"\n\n Enter the number of Product 2:";
        cin>>quant;
        if(Q2-S2 >=quant)
        {
            S2=S2+quant;
            total_2=total_2+quant*100;
            cout<<"\n\n\t\t"<<quant<<"Product 2 have been alloted to you!";
        }
        else
        cout<<"\n\tOnly"<<Q2-S2<<"Product 2 Available";
        break;

        case 3:
        cout<<"\n\n Enter the number of Product 3:";
        cin>>quant;
        if(Q3-S3 >=quant)
        {
            S3=S3+quant;
            total_3=total_3+quant*120;
            cout<<"\n\n\t\t"<<quant<<"Product 3 have been alloted to you!";
        }
        else
        cout<<"\n\tOnly"<<Q1-S1<<"3 Available";
        break;

        case 4:
        cout<<"\n\tDetails of Sales and collection";
        cout<<"\n\n Number of Product 1 we had :"<<Q1;
        cout<<"\n\n Product 1 for sell "<<S1;
        cout<<"\n\n Remaining product 1:" <<Q1-S1;
        cout<<"\n\n Total product 1 collection :" <<total_1;

        cout<<"\n\n Number of product 2 we had :"<<Q2;
        cout<<"\n\n product 2 for sell "<<S2;
        cout<<"\n\n Remaining product 2:" <<Q2-S2;
        cout<<"\n\n Total product 2 collection :" <<total_2;

        cout<<"\n\n Number of product 3 we had :"<<Q3;
        cout<<"\n\n Product 3 for sell "<<S3;
        cout<<"\n\n Remaining product 3:" <<Q3-S3;
        cout<<"\n\n Total product 3 collection :" <<total_3;
        
        cout<<"\n\n\n Total Collection for the day: "<<total_1+total_2+total_3;
        break;

        case 5:
           exit(0);
           default:
            cout<<"\n Please select the number mention above!";










    }
    goto m;
    

}

