//IT21894824


#include<iostream>
#include<string>

using namespace std;

		
 class ReservationStaff{
	    private :
		    string ReservationNO;
		    string ReservationDate;
		public :
			ReservationStaff(string ReNO, string ReD);
			void addReservationStaff();
			void displayReservationStaffDetails();
		};
 class Package {
	    private :
		string packageType;
		string vehicleType;
		public :
		Package(string paType, string veType,ReservationStaff*Re1);
	    //Aggregational
		};




