//IT21356704
#include<iostream>
#include<string>
class Package;
using namespace std;

//Implelemntaion of constructor in payment class
                 
				Payment :: Payment(string PcType, string PcNumber){
				    cardtype = PcType;
				    cardnumber = PcNumber;
				}
//Implelemntaion of constructor in Financial Manager class
                   
				FinancialManager :: FinancialManager(string Mreport, double Tamount, double Tcost,Payment*P){
				    monthlyreport = Mreport;
				    totalamount = Tamount;
				    totalcost  = Tcost;
				}
int main(){
	Payment * P1 = new Payment("Credit", "123456");
	FinancialManager * F1 = new FinancialManager("June",30000.00,20000.00,P1);
	return 0; 
}					 

				