#pragma once

class Company:public Applier {
private:
	vector<Applier> appliers;
	//Applier appliers;
public:
	Company() = default;

	void hireUp(Applier cv) {
		appliers.push_back(cv);
	}

	void showAllCV()  {
		for (size_t i = 0; i < appliers.size(); i++)
		{
			appliers[i].print();
		}
	}

	void writeToFile() {
		ofstream fout("Company.txt", ios::out);

		if (!fout)
			throw"File can not created";

		if (!fout.is_open()){
			throw"File can not opened";
		}

		for (size_t i = 0; i < appliers.size(); i++)
		{
			fout << appliers[i].get_name() << appliers[i].get_age() << appliers[i].get_speciality() << appliers[i].get_text();
		}
		fout.close();
	}

	void readToFile() {
		ifstream fin("Company.txt", ios::in);

		if (!fin)
			throw"file is not found";
		if (!fin.is_open()) {
			throw"file is not opened";
		}
		
		string data;

		while (!fin.eof())
		{
			getline(fin, data);
			cout <<data;
		}
		fin.close();
	}

	
};



