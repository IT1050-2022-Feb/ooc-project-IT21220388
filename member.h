#include<ctime>
class Member :  public Unknown Driver
{
protected:
	char MemberName[20];
	int Membership_ID[20];
	char MemberAddress[50];
	char MemberVehicle_Number[10];
	int MemberPhoneNo;
	int MemberBirthda;
	char MemberEmail[50];
	char MemberGender[10];
 public:
	Member();
	Member(const char Mname[],int MID, const char Address[],const char VNo[], int TP, int Bday, const char MEmail[], const char MGender[]);
	void Register();
	vertual void DisplayMemberDetils();
	~Member();
}; 

#include "member.h"
#include<cstring>
Member::Member() {};
Member::Member(const char Mname[], int MID, const char Address[], const char VNo[], int TP, int Bday, const char MEmail[], const char MGender[]) {
	strcpy(MemberName, Mname);
	strcpy(MemberAddress, Address);
	strcpy(MemberVehicle_Number, VNo);
	strcpy(MemberEmail, MEmail);
	strcpy(MemberGender, MGender);
	Membership_ID = MID;
	MemberPhoneNo = TP ;
	MemberBirthda = Bday;
}
void Member::DisplayMemberDetils() {
}
Member::~Member() {}

