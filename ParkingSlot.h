//IT21220388
#include<iostream>
#include<string>
using namespace std;

class ParkingSlot {
	    private : 
	        int ParkingSlotNO;
	        Report * Re;//composition 
	    public :
		    ParkingSlot(int SlotNO);
		    int getParkingSlotNO();
		
};