#include <iostream>
#include <limits>
#include <string>
#include <fstream>
#include <iomanip>
#include <windows.h>



using namespace std;
enum ConsoleColors {
    LightGreen = 10,
    LightCyan = 11,
    LightMagenta = 13,
    Yellow = 14,
    White = 15,
    VioletYellow = 94,
    VioletWhite = 95,
    BlackWhite = 271
};
void setTextColor(ConsoleColors text)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (WORD) (text));
}

int changer(int fare, int payment,int change){
	if(payment>fare){
				change= payment-fare;
			}
			return change;
}

struct customer{
	string Name;
	string start;
	string end;
};
void charbug()
	{if (cin.fail())
				{
					cout << "Deleting the characters..."<<endl;
					cin.clear(); 
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
			}

int main(){
	
	string Name;
	string start;
	string end;
	int payment; 
	int change=0;
	int fare,j=1,i;
	string station[]={"Santolan         ","Katipunan","Anonas           ", "Cubao", "Betty Go-Belmonte", "Gilmore", "J.Ruiz          ", "V.Mapa", "Pureza           ", "Legarda", "Recto"};
	
	setTextColor(VioletYellow);
	cout<<" "<<endl;
	cout<<"\tGood day Commuter! Welcome to,"<<endl<<endl;Sleep(500);
	setTextColor(VioletWhite);
	cout<<"\t#       ######  #######    #       ### #     # #######     #####  "<<endl;Sleep(500);
	cout<<"\t#       #     #    #       #        #  ##    # #          #     # "<<endl;Sleep(500);
	cout<<"\t#       #     #    #       #        #  # #   # #                # "<<endl;Sleep(500);
	cout<<"\t#       ######     #       #        #  #  #  # #####       #####  "<<endl;Sleep(500);
	cout<<"\t#       #   #      #       #        #  #   # # #          #       "<<endl;Sleep(500);
	cout<<"\t#       #    #     #       #        #  #    ## #          #       "<<endl;Sleep(500);
	cout<<"\t####### #     #    #       ####### ### #     # #######    ####### "<<endl;Sleep(1000);
	setTextColor(VioletYellow);
	cout<<setw(60)<<"\tBuy your ticket before going to the platform.";Sleep(3000);
	setTextColor(BlackWhite);
	
	system("cls");
	setTextColor(LightMagenta);
	cout<<"====================================="<<endl<<endl;
	setTextColor(Yellow);
	cout<<setw(30)<<"LRT Line 2 - Purple Line"<<endl;
	cout<<setw(30)<<"Select From the Following Stations"<<endl<<endl;
	setTextColor(LightCyan);
	for(i=0; i<11; i++){
    cout<<station[i]<<"\t";
    if(i%2){cout<<endl;}
    }
	cout<<endl;
	setTextColor(LightMagenta);
	cout<<"====================================="<<endl<<endl;
	
	setTextColor(White);
	cout<<"Enter Your Name: ";
	getline(cin, Name);
	cout<<endl;
	cout<<"Starting Station: ";
	getline(cin, start);
	while (start != "Recto" && start != "Legarda" && start != "Pureza" && start != "V.Mapa" && start != "J.Ruiz" && start != "Gilmore" && start != "Betty Go-Belmonte" && start != "Cubao"  && start != "Anonas"  && start != "Katipunan"  && start != "Santolan"){
		cout << "Invalid Station, Please Enter a Valid Station: ";
		getline(cin, start);
	}
	cout<<endl;
	cout<<"End Station: ";
	getline(cin, end);
	while (end != "Recto" && end != "Legarda" && end != "Pureza" && end != "V.Mapa" && end != "J.Ruiz" && end != "Gilmore" && end != "Betty Go-Bendmonte" && end != "Cubao"  && end != "Anonas"  && end != "Katipunan"  && end != "Santolan") {
		cout << "Invalid Station, Please Enter a Valid Station: ";
		getline(cin, end);
	}
	cout<<endl;
	
	
	if(start=="Santolan"){
		
		while (end == "Santolan") {
		cout << "You've entered the same Start and End Station! Please try again." << endl;
		cout << "Enter Another Station: ";
		getline(cin, end);
		while (end != "Recto" && end != "Legarda" && end != "Pureza" && end != "V.Mapa" && end != "J.Ruiz" && end != "Gilmore" && end != "Betty Go-Bendmonte" && end != "Cubao"  && end != "Anonas"  && end != "Katipunan"  && end != "Santolan") {
		cout << "Invalid Station, Please Enter a Valid Station: ";
		getline(cin, end);
			}
		}
		
		if (end=="Katipunan" || end=="Anonas" || end=="Cubao"){
			
			fare=15;
			
			system("cls");
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(Yellow);
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			setTextColor(LightCyan);
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			setTextColor(LightMagenta);
			cout<<"====================================="<<endl<<endl;
			setTextColor(White);
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 15){
				charbug();
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
			
		}
		
		if (end=="Betty Go-Belmonte" || end=="Gilmore" || end=="J.Ruiz"){
			
			fare=20;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 20){
				charbug();
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
		if (end=="V.Mapa" || end=="Pureza" || end=="Legarda" || end=="Recto"){
			
			fare=25;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 25){
				charbug();
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
	}
	
	//end of santolan
	
	if(start=="Katipunan"){
		
		while (end == "Katipunan") {
		cout << "You've entered the same Start and End Station! Please try again." << endl;
		cout << "Enter Another Station: ";
		getline(cin, end);
		
		while (end != "Recto" && end != "Legarda" && end != "Pureza" && end != "V.Mapa" && end != "J.Ruiz" && end != "Gilmore" && end != "Betty Go-Bendmonte" && end != "Cubao"  && end != "Anonas"  && end != "Katipunan"  && end != "Santolan") {
		cout << "Invalid Station, Please Enter a Valid Station: ";
		getline(cin, end);
			}
		}
		
		if (end=="Santolan" || end=="Anonas" || end=="Cubao" || end=="Betty Go-Belmonte"){
		
			fare=15;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 15){
				charbug();
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
		if (end=="Pureza" || end=="V.Mapa" || end=="Gilmore" || end=="J.Ruiz"){
			
			fare=20;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 20){
				charbug();
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
		if (end=="Legarda" || end=="Recto"){
			
			fare=25;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 25){
				charbug();
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
	}
	
	//end of katips
	
	if(start=="Anonas"){
		
		while (end == "Anonas") {
		cout << "You've entered the same Start and End Station! Please try again." << endl;
		cout << "Enter Another Station: ";
		getline(cin, end);
		
		while (end != "Recto" && end != "Legarda" && end != "Pureza" && end != "V.Mapa" && end != "J.Ruiz" && end != "Gilmore" && end != "Betty Go-Bendmonte" && end != "Cubao"  && end != "Anonas"  && end != "Katipunan"  && end != "Santolan") {
		cout << "Invalid Station, Please Enter a Valid Station: ";
		getline(cin, end);
			}
		}
		
		if (end=="Katipunan" || end=="Santolan" || end=="Cubao" || end=="Betty Go-Belmonte"  || end=="Gilmore"){
		
			fare=15;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 15){
				charbug();
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
		if (end=="V.Mapa" || end=="Pureza" || end=="J.Ruiz" || end=="Legarda"){
			
			fare=20;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 20){
				charbug();
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
		if (end=="Recto"){
			
			fare=25;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 25){
				charbug();
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
	}
	
	//end of anon
	
	if(start=="Cubao"){
		
		while (end == "Cubao") {
		cout << "You've entered the same Start and End Station! Please try again." << endl;
		cout << "Enter Another Station: ";
		getline(cin, end);
		
		while (end != "Recto" && end != "Legarda" && end != "Pureza" && end != "V.Mapa" && end != "J.Ruiz" && end != "Gilmore" && end != "Betty Go-Bendmonte" && end != "Cubao"  && end != "Anonas"  && end != "Katipunan"  && end != "Santolan") {
		cout << "Invalid Station, Please Enter a Valid Station: ";
		getline(cin, end);
			}
		}
		
		if (end=="Katipunan" || end=="Santolan" || end=="J.Ruiz" || end=="Betty Go-Belmonte"  || end=="Gilmore"  || end=="Anonas"){
		
			fare=15;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 15){
				charbug();
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
		if (end=="V.Mapa" || end=="Pureza" || end=="J.Ruiz" || end=="Legarda"|| end=="Recto"){
			
			fare=20;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 20){
				charbug();
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
	}
	
	//end of cubao
	
	if(start=="Betty Go-Belmonte"){
		
		while (end == "Betty Go-Belmonte") {
		cout << "You've entered the same Start and End Station! Please try again." << endl;
		cout << "Enter Another Station: ";
		getline(cin, end);
		
		while (end != "Recto" && end != "Legarda" && end != "Pureza" && end != "V.Mapa" && end != "J.Ruiz" && end != "Gilmore" && end != "Betty Go-Bendmonte" && end != "Cubao"  && end != "Anonas"  && end != "Katipunan"  && end != "Santolan") {
		cout << "Invalid Station, Please Enter a Valid Station: ";
		getline(cin, end);
			}
		}
		
		if (end=="Katipunan" || end=="V.Mapa" || end=="J.Ruiz" || end=="Cubao"  || end=="Gilmore"  || end=="Anonas"){
		
			fare=15;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 15){
				charbug();
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
		if (end=="Santolan" || end=="Pureza" || end=="Legarda"|| end=="Recto"){
			
			fare=20;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 20){
				charbug();
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
	}
	
	//end of betty
	
	if(start=="Gilmore"){
		
		while (end == "Gilmore") {
		cout << "You've entered the same Start and End Station! Please try again." << endl;
		cout << "Enter Another Station: ";
		getline(cin, end);
		
		while (end != "Recto" && end != "Legarda" && end != "Pureza" && end != "V.Mapa" && end != "J.Ruiz" && end != "Gilmore" && end != "Betty Go-Bendmonte" && end != "Cubao"  && end != "Anonas"  && end != "Katipunan"  && end != "Santolan") {
		cout << "Invalid Station, Please Enter a Valid Station: ";
		getline(cin, end);
			}
		}
		
		if (end=="Pureza" || end=="V.Mapa" || end=="J.Ruiz" || end=="Cubao"  || end=="Betty Go-Belmonte"  || end=="Anonas"){
		
			fare=15;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 15){
				charbug();
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
		if (end=="Santolan" || end=="Katipunan" || end=="Legarda"|| end=="Recto"){
			
			fare=20;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 20){
				charbug();
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
	}
	
	//end of Gilmore
	
	if(start=="J.Ruiz"){
		
		while (end == "J.Ruiz") {
		cout << "You've entered the same Start and End Station! Please try again." << endl;
		cout << "Enter Another Station: ";
		getline(cin, end);
		
		while (end != "Recto" && end != "Legarda" && end != "Pureza" && end != "V.Mapa" && end != "J.Ruiz" && end != "Gilmore" && end != "Betty Go-Bendmonte" && end != "Cubao"  && end != "Anonas"  && end != "Katipunan"  && end != "Santolan") {
		cout << "Invalid Station, Please Enter a Valid Station: ";
		getline(cin, end);
			}
		}
		
		if (end=="Pureza" || end=="V.Mapa" || end=="Gilmore" || end=="Cubao"  || end=="Betty Go-Belmonte"  || end=="Legarda"){
		
			fare=15;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 15){
				charbug();
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
		if (end=="Santolan" || end=="Katipunan" || end=="Anonas"|| end=="Recto"){
			
			fare=20;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 20){
				charbug();
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
	}
	
	//end of J.Ruiz
	
	if(start=="V.Mapa"){
		
		while (end == "V.Mapa") {
		cout << "You've entered the same Start and End Station! Please try again." << endl;
		cout << "Enter Another Station: ";
		getline(cin, end);
		
		while (end != "Recto" && end != "Legarda" && end != "Pureza" && end != "V.Mapa" && end != "J.Ruiz" && end != "Gilmore" && end != "Betty Go-Bendmonte" && end != "Cubao"  && end != "Anonas"  && end != "Katipunan"  && end != "Santolan") {
		cout << "Invalid Station, Please Enter a Valid Station: ";
		getline(cin, end);
			}
		}
		
		if (end=="Betty Go-Belmonte" || end=="Gilmore" || end=="J.Ruiz" || end=="Pureza"  || end=="Legarda" || end=="Recto"){
		
			fare=15;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 15){
				charbug();
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
		if (end=="Katipunan" || end=="Anonas" || end=="Cubao"){
			
			fare=20;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 20){
				charbug();
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
		if (end=="Santolan"){
			
			fare=25;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 25){
				charbug();
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
	}
	
	//end of V.Mapa
	
	if(start=="Pureza"){
		
		while (end == "Pureza") {
		cout << "You've entered the same Start and End Station! Please try again." << endl;
		cout << "Enter Another Station: ";
		getline(cin, end);
		
		while (end != "Recto" && end != "Legarda" && end != "Pureza" && end != "V.Mapa" && end != "J.Ruiz" && end != "Gilmore" && end != "Betty Go-Bendmonte" && end != "Cubao"  && end != "Anonas"  && end != "Katipunan"  && end != "Santolan") {
		cout << "Invalid Station, Please Enter a Valid Station: ";
		getline(cin, end);
			}
		}
		
		if (end=="Gilmore" || end=="J.Ruiz" || end=="V.Mapa" || end=="Legarda" || end=="Recto"){
		
			fare=15;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 15){
				charbug();
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
		if (end=="Katipunan" || end=="Anonas" || end=="Cubao" || end=="Betty Go-Belmonte"){
			
			fare=20;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 20){
				charbug();
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
		if (end=="Santolan"){
			
			fare=25;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 25){
				charbug();
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
	}
	
	//end of pureza
	
	if(start=="Legarda"){
		
		while (end == "Legarda") {
		cout << "You've entered the same Start and End Station! Please try again." << endl;
		cout << "Enter Another Station: ";
		getline(cin, end);
		
		while (end != "Recto" && end != "Legarda" && end != "Pureza" && end != "V.Mapa" && end != "J.Ruiz" && end != "Gilmore" && end != "Betty Go-Bendmonte" && end != "Cubao"  && end != "Anonas"  && end != "Katipunan"  && end != "Santolan") {
		cout << "Invalid Station, Please Enter a Valid Station: ";
		getline(cin, end);
			}
		}
		
		if (end=="J.Ruiz" || end=="V.Mapa" || end=="Pureza" || end=="Recto"){
		
			fare=15;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 15){
				charbug();
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
		if (end=="Anonas" || end=="Cubao" || end=="Betty Go-Belmonte" || end=="Gilmore"){
			
			fare=20;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 20){
				charbug();
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
		if (end=="Santolan" || end=="Katipunan"){
			
			fare=25;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 25){
				charbug();
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
	}
	
	//end of legarda
	
	if(start=="Recto"){
		
		while (end == "Recto") {
		cout << "You've entered the same Start and End Station! Please try again." << endl;
		cout << "Enter Another Station: ";
		getline(cin, end);
		
		while (end != "Recto" && end != "Legarda" && end != "Pureza" && end != "V.Mapa" && end != "J.Ruiz" && end != "Gilmore" && end != "Betty Go-Bendmonte" && end != "Cubao"  && end != "Anonas"  && end != "Katipunan"  && end != "Santolan") {
		cout << "Invalid Station, Please Enter a Valid Station: ";
		getline(cin, end);
			}
		}
		
		if (end=="V.Mapa" || end=="Pureza" || end=="Legarda"){
		
			fare=15;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 15){
				charbug();
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
		if (end=="Cubao" || end=="Betty Go-Belmonte" || end=="Gilmore" || end=="J.Ruiz"){
			
			fare=20;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 20){
				charbug();
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
		
		if (end=="Santolan" || end=="Katipunan" || end=="Anonas"){
			
			fare=25;
			
			system("cls");
			cout<<"====================================="<<endl<<endl;
			cout<<"      Good day "<<Name<<"!"<<endl<<endl;
			cout<<"Single Line Journey: "<<start<<" to "<<end<<endl;
			cout<<"Ticket Value: "<<fare<<endl<<endl;
			cout<<"====================================="<<endl<<endl;
			cout<<"Please Enter Cash Amount: ";
			cin>>payment;
			cout<<endl;
			
			while(payment < 25){
				charbug();
				cout<<"Insufficient Balance, please enter a sufficient amount: ";
				cin>>payment;
			}
			
			change=changer(fare, payment, change);
		}
	}
	
	
	system("cls");
	setTextColor(LightCyan);
	cout<<"  "<<endl;
	cout<<"######  ######  #######  #####  #######  #####   #####  ### #     #  #####        ######     #    #     # #     # ####### #     # #######             "<<endl;Sleep(500);
	cout<<"#     # #     # #     # #     # #       #     # #     #  #  ##    # #     #       #     #   # #    #   #  ##   ## #       ##    #    #                "<<endl;Sleep(500);
	cout<<"#     # #     # #     # #       #       #       #        #  # #   # #             #     #  #   #    # #   # # # # #       # #   #    #                "<<endl;Sleep(500);
	cout<<"######  ######  #     # #       #####    #####   #####   #  #  #  # #  ####       ######  #     #    #    #  #  # #####   #  #  #    #                "<<endl;Sleep(500);
	cout<<"#       #   #   #     # #       #             #       #  #  #   # # #     #       #       #######    #    #     # #       #   # #    #    ### ### ### "<<endl;Sleep(500);
	cout<<"#       #    #  #     # #     # #       #     # #     #  #  #    ## #     #       #       #     #    #    #     # #       #    ##    #    ### ### ###"<<endl;Sleep(500);
	cout<<"#       #     # #######  #####  #######  #####   #####  ### #     #  #####        #       #     #    #    #     # ####### #     #    #    ### ### ### "<<endl<<endl;Sleep(1000);
	setTextColor(Yellow);
	cout<<"This may take a few seconds. Please wait"<<endl;Sleep(2000);
	cout<<"Printing your receipt."<<endl;Sleep(3000);
	
	system("cls");
	setTextColor(LightMagenta);
	cout<<"\t++++++++++++++++++++++++++++++++++++"<<endl<<endl;
	setTextColor(Yellow);
	cout<<"\t       LRT 2 - Purple Line          "<<endl;
	cout<<"\t         Official Receipt           "<<endl<<endl;
	setTextColor(LightMagenta);
	cout<<"\t------------------------------------"<<endl<<endl;
	setTextColor(LightCyan);
	cout<<"\tCustomer: "<<Name<<endl;
	cout<<"\tItinerary: "<<start<<" to "<<end<<endl;
	cout<<"\tCash Amount: "<<payment<<endl;
	cout<<"\tChange: "<<change<<endl<<endl;
	setTextColor(LightMagenta);
	cout<<"\t------------------------------------"<<endl<<endl;
	setTextColor(Yellow);
	cout<<"\tThank you for riding in LRT Line 2!"<<endl;
	cout<<"\tPlease Proceed to the Train Platform"<<endl<<endl;
	setTextColor(LightMagenta);
	cout<<"\t++++++++++++++++++++++++++++++++++++"<<endl<<endl;
	
	ofstream receipt ("Receipt.txt");

	receipt<<"\t++++++++++++++++++++++++++++++++++++"<<endl<<endl;
	receipt<<"\t       LRT 2 - Purple Line          "<<endl;
	receipt<<"\t         Official Receipt           "<<endl<<endl;
	receipt<<"\t------------------------------------"<<endl<<endl;
	receipt<<"\tCustomer: "<<Name<<endl;
	receipt<<"\tItinerary: "<<start<<" to "<<end<<endl;
	receipt<<"\tCash Amount: "<<payment<<endl;
	receipt<<"\tChange: "<<change<<endl<<endl;
	receipt<<"\t-------------------------------------"<<endl<<endl;
	receipt<<"\tThank you for riding in LRT Line 2!"<<endl;
	receipt<<"\tPlease Proceed to the Train Platform"<<endl<<endl;
	receipt<<"\t++++++++++++++++++++++++++++++++++++"<<endl<<endl;
}
