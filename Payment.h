#include<iostream>
#include<string>
class Package;
using namespace std;
class Package;
class Payment{
	    private :
		    string cardtype;
		    string cardnumber;
		    Package * Package;//association relationship
		public :
		    Payment (string PcType, string PcNumber);
			void displayPaymentDetails();
        };
        
class FinancialManager{
	    private :
		    string monthlyreport;
		    double totalamount;
		    double totalcost;
		public:
			FinancialManager(string Mreport, double Tamount, double Tcost,Payment*P);//Dependency
			float clacProfit();
			void displayProfit();
		};

				