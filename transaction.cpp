// Project Goal: Digital Cosmetic Transaction

#include <iostream>
using namespace std;

int main(){
	int telNumber;
	cout<<"Please enter the 9 digit Beauty Mall telephone number: 989989989";
	cout<<endl;
	cin>> telNumber;

		while(telNumber != 989989989)
		{
			cout<<"Please re-enter the correct number: 989989989";
			cout<<endl;
			cin>>telNumber;
		}

	cout<<"Thank you for entering Beauty Mall telephone number"<<endl;
	cout<<"Select an option to continue:"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"Choose an option from our main menu to make a transaction: "<<endl;
	
	 			// Perhaps change the program so that user goes through each section, and give the option to buy or not.
				// and maybe use the switch cases for payment options : Credit, Debit, Cash, Check
	
	cout<< "--------------------------"<<endl;
	cout<< "|Press 0 to  End         |"<<endl;
	cout<< "|Press 1 for Skincare    |"<<endl;
	cout<< "|Press 2 for Face-Makeup |"<<endl;
	cout<< "|Press 3 for Eye Makeup  |"<<endl;
	cout<< "|Press 4 for Lip Care    |"<<endl;    
	cout<< "|Press 5 for Other       |"<<endl;
	cout<< "--------------------------"<<endl;
	  
	int num;

	cin>>num;

	switch(num)
	{

	 case 0:
	 	cout<<"There was no transaction.";
	 	cout<<endl;
	 	cout<<"Bye Bye!";
	 	return 0;
	 
	 case 1:
	 			// may have to use nested switch statements
	 	cout<<"Welcome to skincare"<<endl; 
	 	cout<<"Enter the product number (1, 2, or 3) you are interested in purchasing:"<<endl;
	 	cout<<"1: Facial Cleansers"<<endl; 
	 	cout<<"2: Face Masks      "<<endl;
	 	cout<<"3: 3-in-1 set      "<<endl;

	 	int product;
	 	cin>>product;

	 	switch(product){
	 		case 1:
	 		cout<<"Facial Cleansers are $15 each, you like to buy any?"<<endl; 
	 		cout<<"Press 1 for yes, 2 for no ";
	 		int buy;
	 		cin>>buy;
	 			if(buy == 1){
	 				cout<<"How many would you like to buy?";
	 				int amount;
	 				cin>>amount;
	 				cout<<"You have bought: "<<amount<<" Facial Cleanser(s). "<<endl;
	 				cout<<"Your total is : "<<"$"<<amount*15;
	 			}
	 			else{
	 				return 0;
	 			}
	 		break;

	 		case 2:
			cout<<"The price is $5 each, would you like to buy any? Press 1 for yes, 2 for no";
	 		int buy1;
	 		cin>>buy1;
	 			if(buy1 == 1){
	 				cout<<"How many would you like to buy?";
	 				int amount;
	 				cin>>amount;
	 				cout<<"You have bought: "<<amount<<" Face Mask(s). "<<endl;
	 				cout<<"Your total is : "<<"$"<<amount*5;
	 			}
	 			else{
	 				return 0;
	 			}
	 		break;

	 		case 3:
	 		cout<<"The price is $49, would you like to buy any? Press 1 for yes, 2 for no";
	 		int buy2;
	 		cin>>buy2;
	 			if(buy2 == 1){
	 				cout<<"How many would you like to buy?";
	 				int amount;
	 				cin>>amount;
	 				cout<<"You have bought: "<<amount<<" 3-in-1 set(s). "<<endl;
	 				cout<<"Your total is : "<<"$"<<amount*49;
	 			}
	 			else{
	 				return 0;
	 			}
	 		break;
	 }
	 	break;
	 
	 case 2:
	 
	 	cout<<"Welcome to facial makeup, please make you selection: "<<endl;
	 	cout<<"1. Foundation"<<endl;
	 	cout<<"2. Pressed Powder"<<endl;
	 	cout<<"3. Blush"<<endl;
	 		break;

	 case 3:

	 	cout<<"Welcome to eye-makeup, please make you selection: "<<endl;
	 	cout<<"1. Mascara"<<endl;
	 	cout<<"2. Eye-Shadow Set(Neutral)"<<endl;
	 	cout<<"3. Eye-Shadow Set(Shimmer)"<<endl;
	 	cout<<"4. Eye-Shadow Set(Matte)"<<endl;
	 		break;
	 
	 case 4:

	 	cout<<"Welcome to lip makeup, please make you selection: "<<endl;
	 	cout<<"1. Lipstick (Shimmer)"<<endl;
	 	cout<<"2. Lipstick (Matte)"<<endl;
	 	cout<<"3. Lipgloss"<<endl;
	 	cout<<"4. Lip Balm"<<endl;
	 		break;
	 
	 case 5:
	
	 	cout<<"We realize what you were looking for was not listed, here are other options: "<<endl;
			break;
	 }
	 return 0;
}
