#include <iostream>
using namespace std;
int main()
{
	cout<<"Welcome to your future's savings!"<<endl;
	cout<<"Enter the total amount of money you want to invest and the rate package:"<<endl;
	cout<<endl;

	double initialInvestment; // enter the amount of money you want to invest
	int month = 0;
	double maturity = 0;
	int maturityPackage = 0;

	// Below are the package options with select rates
	
	cout<<"Package #1 - Interest Rate: 3%"<<endl;
	cout<<"Maturity Date: 3 Months"<<endl;
	cout<<"---------------"<<endl;
	cout<<"Package #2 - Interest Rate: 6%"<<endl;
	cout<<"Maturity Date: 6 Months"<<endl;
	cout<<"---------------"<<endl;
	cout<<"Package #3 - Interest Rate: 9%"<<endl;
	cout<<"Maturity Date: 12 Months"<<endl;
	cout<<"---------------"<<endl;

	cout<<endl;

	cout<<"Please enter the amount of money ($) you want to deposit: "<<endl;
	cin>>initialInvestment;
	cout<<"Plesae select the Maturity package you want to select: "<<endl;
	cin>>maturityPackage;

	if(maturityPackage == 1) // package 1 selected
	{
		maturity = initialInvestment + initialInvestment*(0.03);
		cout<<"Month 1: $"<<maturity<<endl;
		maturity = maturity + maturity*(0.03);
		cout<<"Month 2: $"<<maturity<<endl;
		maturity = maturity + maturity*(0.03);
		cout<<"Month 3: $"<<maturity<<endl;
	
	    cout<<"----------"<<endl;
		cout<<"Initial Invesment: "<<initialInvestment<<endl;
		cout<<"Maturity Rate: "<<"3%"<<endl;
		cout<<"Maturity after 3 months: $"<<maturity<<endl;

	}

	else if(maturityPackage == 2) // package 2 selected
	{

		maturity = initialInvestment + initialInvestment*(0.06);
		cout<<"Month 1: $"<<maturity<<endl;
		maturity = maturity + maturity*(0.06);
		cout<<"Month 2: $"<<maturity<<endl;
		maturity = maturity + maturity*(0.06);
		cout<<"Month 3: $"<<maturity<<endl;
		maturity = maturity + maturity*(0.06);
		cout<<"Month 4: $"<<maturity<<endl;
		maturity = maturity + maturity*(0.06);
		cout<<"Month 5: $"<<maturity<<endl;
		maturity = maturity + maturity*(0.06);
		cout<<"Month 6: $"<<maturity<<endl;

		cout<<"----------"<<endl;
		cout<<"Initial Invesment: "<<initialInvestment<<endl;
		cout<<"Maturity Rate: "<<"6%"<<endl;
		cout<<"Maturity after 6 months: $"<<maturity<<endl;
	}

	else if (maturityPackage == 3) // package 3 selected
	{

		maturity = initialInvestment + initialInvestment*(0.09);
		cout<<"Month 1: $"<<maturity<<endl;
		maturity = maturity + maturity*(0.09);
		cout<<"Month 2: $"<<maturity<<endl;
		maturity = maturity + maturity*(0.09);
		cout<<"Month 3: $"<<maturity<<endl;
		maturity = maturity + maturity*(0.09);
		cout<<"Month 4: $"<<maturity<<endl;
		maturity = maturity + maturity*(0.09);
		cout<<"Month 5: $"<<maturity<<endl;
		maturity = maturity + maturity*(0.09);
		cout<<"Month 6: $"<<maturity<<endl;
		maturity = maturity + maturity*(0.09);
		cout<<"Month 7: $"<<maturity<<endl;
		maturity = maturity + maturity*(0.09);
		cout<<"Month 8: $"<<maturity<<endl;
		maturity = maturity + maturity*(0.09);
		cout<<"Month 9: $"<<maturity<<endl;
		maturity = maturity + maturity*(0.09);
		cout<<"Month 10: $"<<maturity<<endl;
		maturity = maturity + maturity*(0.09);
		cout<<"Month 11: $"<<maturity<<endl;
		maturity = maturity + maturity*(0.09);
		cout<<"Month 12: $"<<maturity<<endl;
	
		cout<<"----------"<<endl;
		cout<<"Initial Invesment: "<<initialInvestment<<endl;
		cout<<"Maturity Rate: "<<"9%"<<endl;
		cout<<"Maturity after 12 months: $"<<maturity<<endl;

	}

	else
    {

		cout<<"No maturity package selected, bye!";
    
    }

	return 0;
}
