#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int quantity, amountdue, cash, cost=5, change;
    double vat, vatable; 
    
    cout<<"\t\tWelcome to Lollipops Factory!";
    cout<<"\n\n\tSweet and Minty Lollipops!   How many would you want to buy?";   
    cin>>quantity;
    amountdue = quantity * cost;
    cout<<"\n\tYou have bought "<<quantity<<" Sweet and minty Lollipops!";
    cout<<"\n\tPlease pay PhP "<<amountdue<<"--->";
    cin>>cash;
    
    if( cash >= amountdue )
	{
    cout<<"\n\n\tPlease examine the transaction details below: ";
    change = cash - amountdue;
    vatable = amountdue /1.12;
    vat = amountdue - vatable;
    
    cout<<"\n\n\tAmount due:\t\t"<<amountdue;
    
    cout<<"\n\tVAT (12%):\t\t"<<vat;
    
    cout<<"\n\tVATable Amount:\t\t"<<vatable;
    
    cout<<"\n\tAmount of cash:\t\t"<<cash;
    
    cout<<"\n\tChange:\t\t\t"<<change;
    cout<<"\n\n\t==========Change Breakdown==========";
    
    
    cout<<"\n\n\t1000            "<<change/1000<<"\t"<<change/1000*1000;
    change = change%1000;
    cout<<"\n\t500             "<<change/500<<"\t"<<(change/500)*500;
    change = change%500;
    cout<<"\n\t200             "<<change/200<<"\t"<<(change/200)*200;
    change = change%200;
    cout<<"\n\t100             "<<change/100<<"\t"<<(change/100)*100;
    change = change%100;
    cout<<"\n\t50              "<<change/50<<"\t"<<(change/50)*50;
    change = change%50;
    cout<<"\n\t10              "<<change/10<<"\t"<<(change/10)*10;
    change = change%10;
    cout<<"\n\t5               "<<change/5<<"\t"<<(change/5)*5;
    change = change%5; 
    cout<<"\n\t1               "<<change/1<<"\t"<<(change/1)*1;        
    
    cout<<"\n\n\tThanks and enjoy our lollipops!";
    }
	else{
	cout<<"Not enough cash";
	}
    getch();
    return 0;
    
}
