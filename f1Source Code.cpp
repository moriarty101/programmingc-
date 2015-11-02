#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int main()
{

int day, month, year;
int i;
int dayofweek;
char ans;
char slash = '/';

	do{		//LOOP
	system( "cls" );//CLEARS THE SCREEN BEFORE DISPLAYING
	
	cout<<"\n\tWelcome!!!";
	//USER IS ASKED TO INPUT BIRTH DATE
	cout<<"\n\n\tInput birth date separated by a forward slash (dd/mm/yyyy)\n\tranging from the year 1500 - 2800, and press enter: ";
	cin>>day>>slash>>month>>slash>>year;

	
	/*	(if-elseif-else statement)	
		where:
		
		'if' and 'else if' statements are the validation of date within the parameters
		
		and 'else' statement is the computation.
	*/
	
	if ( year > 2800 )
	{
		cout<<"\n\t\tError!!! Invalid date. Try again?(y/n)";
		cin>>ans;
	}
	else if ( month > 12 )
	{
		cout<<"\n\t\tError!!! Invalid date. Try again?(y/n)";
		cin>>ans;
	}
	else if ( month <= 0 )
	{
		cout<<"\n\t\tError!!! Invalid date. Try again?(y/n)";
		cin>>ans;
	}
	else if ( month == 2 && day > 29 )
	{
		cout<<"\n\t\tError!!! Invalid date. Try again?(y/n)";
		cin>>ans;	
	}
	else if( day > 31 )	
	{
		cout<<"\n\t\tError!!! Invalid date. Try again?(y/n)";
		cin>>ans;
	}
	else if( day <=0 )	
	{
		cout<<"\n\t\tError!!! Invalid date. Try again?(y/n)";
		cin>>ans;
	}
	else if ( year < 1500 )	
	{
		cout<<"\n\t\tError!!! Invalid date. Try again?(y/n)";
		cin>>ans;
	}
	else if ( slash != '/' )
	{
		cout<<"\n\t\tError!!! Invalid date. Try again?(y/n)";
		cin>>ans;
	}
	else
		{
			//if-else statement nested in 'else' statement for computation
			if( month <3 )
			{
				month = month + 12;
				year = year - 1;
    		
				i	= (day + ( 2 * month ) +
				(( 6 * ( month + 1 )) / 10 ) +
				year + ( year / 4 ) - ( year / 100 )+ ( year / 400 ) + 1) % 7;
				
				dayofweek = i % 7;		
			}
			else
			{
				i	= (day + ( 2 * month ) +
				(( 6 * ( month + 1 )) / 10 ) +
				year + ( year / 4 ) - ( year / 100 )+ ( year / 400 ) + 1) % 7;
				
				dayofweek = i % 7;	
				
			}
		
	
	//a switch statement is used to determine and display the day of the week when a person was born
	switch ( dayofweek )
	{

	case 0: cout<<"\n\t\tYour birthday landed on a Sunday :) 	\n\n\t\tProcess another? (y/n)";
			cin>>ans;
			break;
			
	case 1: cout<<"\n\t\tYour birthday landed on a Monday :) \n\n\t\tProcess another? (y/n)";
			cin>>ans;
			break;
			
	case 2: cout<<"\n\t\tYour birthday landed on a Tuesday :) \n\n\t\tProcess another? (y/n)";
			cin>>ans;
			break;
			
	case 3: cout<<"\n\t\tYour birthday landed on a Wednesday :) \n\n\t\tProcess another? (y/n)";
			cin>>ans;
			break;
			
	case 4: cout<<"\n\t\tYour birthday landed on a Thursday :) \n\n\t\tProcess another? (y/n)";
			cin>>ans;
			break;
			
	case 5: cout<<"\n\t\tYour birthday landed on a Friday :) \n\n\t\tProcess another? (y/n)";
			cin>>ans;
			break;
			
	case 6: cout<<"\n\t\tYour birthday landed on a Saturday :) \n\n\t\tProcess another? (y/n)";
			cin>>ans;
			break;
	
	default:
		cout<<"\t\t\nNo result. Process another? (y/n)";
		cin>>ans;
	}
		}

	
	
	}while(ans == 'y' );//tests if the user wants to repeat the entire process

}