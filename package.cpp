#include<iostream>
#include<string>

using namespace std;

//Implelemntaion of constructor in package class

Package::Package(string paType, string veType, Member* M) {
	packageType = paType;
	vehicleType = veType;
};