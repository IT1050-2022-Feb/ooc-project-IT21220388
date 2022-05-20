//IT21323034
#include<iostream>
#include<string>

using namespace std;

class Package {
private:
	string packageType;
	string vehicleType;
public:
	Package(string paType, string veType, Member* M);
	//Bi-Directional,Uni-Directional,Bi-Directional,Aggregational
};



int main() {
	Member* M1 = new Member("Nethma Dananjaya", "995532190V", "Nitambwa", 5, 0722270552);
	Package* p1 = new Package("A", "Car", M1);
	return 0;
}

