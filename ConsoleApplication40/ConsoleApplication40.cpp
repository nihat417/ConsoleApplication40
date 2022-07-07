#include <iostream>
#include<array>
#include<vector>
#include<string>
#include<iomanip>
#include<fstream>

using namespace std;
#include"applier.h";
#include"company.h";

int main()
{
	Company s;
	Applier a("niko", 22, "programist", "very cool programmist");
	Applier b("Sebine", 18, "Designer", "Empty2");


	try
	{
		s.hireUp(a);
		s.hireUp(b);
		s.writeToFile();
		s.readToFile();
	}
	catch (exception ex)
	{
		cout << "\nError:" << ex.what();
	}


	//s.showAllCV();
}
