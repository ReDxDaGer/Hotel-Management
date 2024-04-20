#include <iostream>
using namespace std;

int main(){
	int quant , choice;

	//Qunatity
	int Qrooms = 0 , Qpasta = 0, Qburger = 0 , Qnoodles = 0 , Qshake = 0 , QchickenRoll=0;
	//Sold out
	int Srooms = 0, Spasta = 0,Sburger = 0 , Snoodles = 0, Sshake=0,SchickenRoll = 0;
	//Total
	int Total_rooms = 0, Total_pasta = 0 , Total_burger = 0, Total_noodles = 0 , Total_shake = 0, Total_chickenRoll = 0;


	cout <<"\n\t Quantity of items we have";
	
	cout<<"\n Rooms available : ";
	cin>>Qrooms;
	
	cout<<"\n Quantity of pasta : ";
	cin>>Qpasta;
	
	cout<<"\n Qunatity of burger : ";
	cin >>Qburger;
	
	cout<<"\n Qunatity of noodles : ";
	cin>>Qnoodles;
	
	cout<<"\n Quantity of shake : ";
	cin>>Qshake;

	cout<<"\n Quantity of Chiken Roll : ";
	cin>>QchickenRoll;

	m:
	cout<<"\n\t\t\t Please select from thegiven menu options !!  ";
	
	cout<<"\n\n1) Rooms";
	cout<<"\n2) Pasta";
	cout<<"\n3) Burger";
	cout<<"\n4) Noodles";
	cout<<"\n5) Shake";
	cout<<"\n6) Chicken Roll";
	cout<<"\n7) Information regarding sales and collection";
	cout<<"\n8) To exit";

	cout<<"\n\n Please enter your choice !! : ";
	cin>>choice;
	
	while (true)
	{
			switch (choice)
		{
		case 1:
			cout<<"\n Enter the no. of rooms you want : ";
			cin>>quant;
			if(Qrooms - Srooms >= quant){
				Srooms = Srooms+quant;
				Total_rooms = Total_rooms + quant*1200;
				cout<<"\n\n\t\t"<<quant<<"room/rooms have been alloted to you";
			}
			else{
				cout<<"\n\tOnly"<<Qrooms-Srooms<<"Rooms remaining in hotel !!";
			}
			break;
		case 2:
			cout<<"\n Enter Pasta Quantity!! : ";
			cin>>quant;
			if(Qpasta - Spasta >= quant){
				Spasta = Spasta+quant;
				Total_pasta = Total_pasta + quant*250;
				cout<<"\n\n\t\t"<<quant<<"pasta is the order!! ";
			}
			else{
				cout<<"\n\tOnly"<<Qpasta-Spasta<<"Pasta remaining in hotel !!";
			}

			break;
		case 3:
			cout<<"\n Enter Burger Quantity!! : ";
			cin>>quant;
			if(Qburger - Sburger >= quant){
				Sburger = Sburger+quant;
				Total_burger = Total_burger + quant*250;
				cout<<"\n\n\t\t"<<quant<<"Burger in order !!";
			}
			else{
				cout<<"\n\t Only"<<Qburger-Sburger<<"Burger remaining in hotel !!";
			}
			break;
		case 4:
			cout<<"\n Enter Noodle Quantity!! : ";
			cin>>quant;
			if(Qnoodles - Snoodles >= quant){
				Snoodles = Snoodles + quant;
				Total_noodles = Total_noodles + quant*100;
				cout<<"\n\n\t\t"<<quant<<"Noodles in order !!";
			}
			else{
				cout<<"\n\t Only"<<Qnoodles-Snoodles<<"Noodles remaining in hotel !!";
			}
			break;
		case 5:
			cout<<"\n Enter Shake Quantity!! : ";
			cin>>quant;
			if(Qshake - Sshake >= quant){
				Sshake = Sshake + quant;
				Total_shake = Total_shake + quant*120;
				cout<<"\n\n\t\t"<<quant<<"Shake in order !!";
			}
			else{
				cout<<"\n\t Only"<<Qshake-Sshake<<"Shake remaining in hotel !!";
			}
			break;
		case 6:
			cout<<"\n Enter Chicken Roll Quantity!! : ";
			cin>>quant;
			if(QchickenRoll - SchickenRoll >= quant){
				SchickenRoll = SchickenRoll + quant;
				Total_chickenRoll = Total_chickenRoll + quant*140;
				cout<<"\n\n\t\t"<<quant<<"Chicken Roll in order !!";
			}
			else{
				cout<<"\n\t Only"<<QchickenRoll-SchickenRoll<<"Chicken Roll remaining in hotel !!";
			}
			break;
		case 7:
			
			cout<<"\n\tDetails of sales and collections!! ";
			cout<<"\n\n Number of Rooms we had : "<<Qrooms;
			cout<<"\n\n Number of Rooms we gave for rent : "<<Srooms;
			cout<<"\n\n Remaining rooms : "<<Qrooms - Srooms;
			cout<<"\n\n Total rooms collection for the day : "<< Total_rooms;

			cout<<"\n\tDetails of sales and collections!! ";
			cout<<"\n\n Number of Pasta we had : "<<Qpasta;
			cout<<"\n\n Number of Pasta we sold : "<<Spasta;
			cout<<"\n\n Remaining Pasta : "<<Qpasta - Spasta;
			cout<<"\n\n Total pasta collection for the day : "<< Total_pasta;

			cout<<"\n\tDetails of sales and collections!! ";
			cout<<"\n\n Number of Noodles we had : "<<Qnoodles;
			cout<<"\n\n Number of Noodles we sold : "<<Snoodles;
			cout<<"\n\n Remaining noodles : "<<Qnoodles - Snoodles;
			cout<<"\n\n Total noodles collection for the day : "<< Total_noodles;

			cout<<"\n\tDetails of sales and collections!! ";
			cout<<"\n\n Number of Shakes we had : "<<Qshake;
			cout<<"\n\n Number of Shakes we sold : "<<Sshake;
			cout<<"\n\n Remaining shakes : "<<Qshake - Sshake;
			cout<<"\n\n Total sakes collection for the day : "<< Total_shake;

			cout<<"\n\tDetails of sales and collections!! ";
			cout<<"\n\n Number of Chicken Rolls we had : "<<QchickenRoll;
			cout<<"\n\n Number of Chicken Rolls we gave for rent : "<<SchickenRoll;
			cout<<"\n\n Remaining chicken rolls : "<<QchickenRoll - SchickenRoll;
			cout<<"\n\n Total chicken rolls collection for the day : "<< Total_chickenRoll;

			break;
		case 8:
			exit(0);			
			
			default:
				cout<<"\n Please select the number mentioned above! ";
			break;
		}
		goto m;

	}
	
	return 0;
}
