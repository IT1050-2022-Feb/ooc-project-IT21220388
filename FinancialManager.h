#include<iostream>
#include<string>
using namespace std;

	class Payment{
		private :
			string cardType;
			string cardnumber;
		public :
			Payment(string PcType, string PcNumber);
			
			void displayPaymentDetails();
		 
				
	    };
	class FinancialManager{
		private :
			string Monthlyreport;
			double totalamount;
			string totalcost;
		public :
			
			FinancialManager(string Mreport, double Tamount, double Tcost , Payment*P );//Dependency
			float clacProfit();
			void displayProfit();
		};

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

