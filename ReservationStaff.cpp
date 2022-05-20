#include<iostream>
#include<string>

using namespace std;


//Implelemntaion of constructor in package class
				
				Package :: Package(string paType , string veType, ReservationStaff*Re1){
				    packageType = paType;
				    vehicleType = veType;
				}
//Implelemntaion of constructor in Reservation Staff class      
                    
				ReservationStaff ::  ReservationStaff(string ReNO, string ReD){
					ReservationNO = ReNO;
					ReservationDate= ReD;
				}
int main(){
	ReservationStaff * Re1 = new ReservationStaff("12","2022/5/14");
	Package * p1 = new Package("A","Car",Re1);

	return 0; 
}		
