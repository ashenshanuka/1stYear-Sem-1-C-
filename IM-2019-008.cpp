//Student Number	:IM/2019/008
//Student Name		:Shanuka K.A.A
//Assignment Number	:01
//Due Date			:23/08/2021

//Program for dispense change after a purchase

#include <iostream>
using namespace std;

int main() {
	int price,payment,balance,rest,count;
	
cout<<"enter the price \n";
	cin>>price; //input the price of all items
cout<<"enter the paymet \n";
	cin>>payment; //enter the payment given by the customer

balance=payment-price;

cout<<"Amount of the cash tendered    = "<<payment<<endl; //display the payment
cout<<"Amount of the purchase         = "<<price<<endl;  //display the price
cout<<"Your balance is                = "<<balance<<endl;   //display the balance

cout<<"How to dispense the change "<<endl;   


count=balance/5000;
rest=balance%5000;
cout<<"Rs.5000 Note count   = "<<count<<endl;

count=rest/2000;
rest=rest%2000;
cout<<"Rs.2000 Note count   = "<<count<<endl;

count=rest/1000;
rest=rest%1000;
cout<<"Rs.1000 Note count   = "<<count<<endl;

count=rest/500;
rest=rest%500;
cout<<"Rs.500  Note count   = "<<count<<endl;

count=rest/100;
rest=rest%100;
cout<<"Rs.100  Note count   = "<<count<<endl;

count=rest/50;
rest=rest%50;
;cout<<"Rs.50   Note count   = "<<count<<endl;

count=rest/20;
rest=rest%20;
cout<<"Rs.20   Note count   = "<<count<<endl;

count=rest/10;
rest=rest%10;
cout<<"Rs.10   Note count   = "<<count<<endl;

count=rest/5;
rest=rest%5;
cout<<"Rs.5    coin count   = "<<count<<endl;

count=rest/2;
rest=rest%2;
cout<<"Rs.2    coin count   = "<<count<<endl;

count=rest/1;
rest=rest%1;
cout<<"Rs.1    coin count   = "<<count<<endl;

  return 0;
}
