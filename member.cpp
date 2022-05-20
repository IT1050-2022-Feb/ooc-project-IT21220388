//IT21323034
#include<iostream>
#include<string>

using namespace std;

//Implementaion of constructor in memeber class


Member::Member(string Mname, string MNIC, string maddress, int MID, double Mcontactnumber) {
	fullname = Mname;
	NIC = MNIC;
	address = MID;
	contactnumber = Mcontactnumber;
}
