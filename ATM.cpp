#include<iostream>
using namespace std;
class Account{
	public:
		int an;
		int pin;
		int available_balance=5000;
		char menuchoice;
		char cho;
		int dep;
		

				
		void validate()
		{
			if((an==12345)&&(pin==54321))
			{
				menu();
			}
				else if((an==58585)&&(pin==85858))
			{
				menu();
			}
				else if((an==17171)&&(pin==71717))
			{
				menu();
			}
				else if((an==24242)&&(pin==42424))
			{
				menu();
			}
				else if((an==13131)&&(pin==31313))
			{
				menu();
			}
				else if((an==99999)&&(pin==99999))
			{
				menu();
			}
				else if((an==00000)&&(pin==00000))
			{
				menu();
			}
			
				else if((an==90909)&&(pin==19090))
			{
				menu();
			}
				else if((an==61616)&&(pin==16161))
			{
				menu();
			}
				else if((an==95115)&&(pin==85225))
			{
				menu();
			}
			else{
				cout<<"Invalid Account Number and PIN"<<endl;
				cout<<"Check Your Account Number and PIN "<<endl;
				get_info();
				validate();
				menu();
			}
			
		}
		void balance()
		{
			cout<<"Your Current Account Ballance is $"<<available_balance<<endl;
			
			cout<<"\t 1. Main Menu"<<endl;
				cout<<"\t 2. Exit"<<endl;
					cout<<"Enter Your Choice"<<endl;
					cin>>cho;
					
					if(cho=='1')
					{
						menu();
					}
					else if(cho=='2')
					{
						exit(1);
					}
					else{
						cout<<"Your Entered Invalid Choice Enter Again"<<endl;
						balance();
					}
		}
		
		void withdraw()
		{
			cout<<"Withdrawl Options :"<<endl;
			
			cout<<"\t 1 - $20 \t\t\t 4 - $100"<<endl;
				cout<<"\t 2 - $40 \t\t\t 5 - $200"<<endl;
					cout<<"\t 3 - $60 \t\t\t 6 - Cancel Transactions"<<endl;
				cout<<"Choose a withdrawl Option (1-6) :"<<endl;
				
			cin>>cho;
			
			switch(cho)
			{
				case '1':
					{
					
					available_balance=available_balance-20;
					cout<<"Withdrawl Successful"<<endl;
					balance();
						break;
					}
								case '2':
					{
					
					available_balance=available_balance-40;
					cout<<"Withdrawl Successful"<<endl;
					balance();
						break;
					}
					
									case '3':
					{
					
					available_balance=available_balance-60;
					cout<<"Withdrawl Successful"<<endl;
					balance();
						break;
					}
					
									case '4':
					{
					
					available_balance=available_balance-100;
					cout<<"Withdrawl Successful"<<endl;
					balance();
						break;
					}
					
									case '5':
					{
					
					available_balance=available_balance-200;
					cout<<"Withdrawl Successful"<<endl;
					balance();
						break;
					}
									case '6':
					{
					cout<<"Ok Fine"<<endl;
					balance();
						break;
					}
					
					default:
						{
							cout<<"Your choice is not Valid Please Enter a Valid Choice"<<endl;
							withdraw();
							break;
						}
			}
		}
		
		void deposit()
		{
			
			cout<<"Enter the Amount You want to Deposit"<<endl;
			cin>>dep;
			available_balance=available_balance+dep;
			cout<<"Successfully Deposited to Your Account\n"<<endl;
			cout<<"Your Current Account Ballance is $"<<available_balance<<endl;
			
				cout<<"\n\n\t 1. Main Menu"<<endl;
				cout<<"\t 2. Exit"<<endl;
				cout<<"Enter Your Choice"<<endl;
					cin>>cho;
					
					if(cho=='1')
					{
						menu();
					}
					else if(cho=='2')
					{
						exit(1);
					}
					else{
						cout<<"Your Entered Invalid Choice Enter Again"<<endl;
						balance();
					}
			
		}
		
		void menu()
		{
			cout<<"Main Menu :"<<endl;
			cout<<"\t\t 1 - View my Balance"<<endl;
			cout<<"\t\t 2 - Withdraw Cash"<<endl;
			cout<<"\t\t 3 - Deposit Funds"<<endl;
			cout<<"\t\t 4 - Exit"<<endl;
			cout<<"Enter a choice"<<endl;
			cin>>menuchoice;
			
			switch(menuchoice)
			{
				case '1':
					{
						balance();
						break;
					}
				case '2':
					{
						withdraw();
							break;
					}
				case '3':
					{
						deposit();
							break;
					}
				case '4':
					{
					
					exit(1);
						break;
					}
				default:
					{
						cout<<"You Entered an Invalid Number \nPlease Select Again"<<endl;
						menu();
					}
			}
		}
		
		void screen()
		{
				cout<<"Welcome"<<endl;
		}
		
		void get_info()
		{
			
	cout<<"Enter Account Number: "<<endl;
	cin>>an;
	cout<<"Enter your PIN"<<endl;
	cin>>pin;
	
		}
		
};

int main()
{
	
	Account ac;
	ac.screen();
	ac.get_info();
	ac.validate();


}



