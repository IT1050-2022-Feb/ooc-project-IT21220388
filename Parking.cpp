#include<iostream>
#include<string>
using namespace std;

    
    
	class Report {
	    private :
			string ReportID;
	    public :
			Report(string RID);
			void reservedParkingSlot();
			void displayreservedParkingSlot();
				
};
	class ParkingSlot {
	    private : 
	        int ParkingSlotNO;
	        Report * Re;//composition 
	    public :
		    ParkingSlot(int SlotNO);
		    int getParkingSlotNO();
		
};
//Implelemntaion of constructor in parkingslot class
                
                 	ParkingSlot :: ParkingSlot(int slotNO){
                 	ParkingSlotNO = slotNO;
                    }
//Implelemntaion of constructor in Report class  
					Report :: Report(string RID){
						 ReportID = RID;
					}

int main(){
	ParkingSlot  *s1 = new ParkingSlot(25);
	Report * r1 = new Report("c");
return 0; 
}					 
