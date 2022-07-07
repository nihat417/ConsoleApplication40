#pragma once

class Applier {
private:
	string _name = "";
	int _age = 0;
	string _speciality = "";
	string _text = "";
public:
	Applier() = default;

	Applier(string name, int age, string speciality, string text) {
		set_name(name);
		set_age(age);
		set_speciality(speciality);
		set_text(text);
	}

	void set_name(string name) {
		if (name.length() < 2)
			throw "wrong length name";
		else
			_name = name;
	}

	void set_age(int age) {
		if (age <= 17)
			throw"Only those over 18 are accepted for work";
		else
			_age = age;
	}

	void set_speciality(string speciality) {
		if (speciality.length() < 3)
			throw"such work does not exist";
		else
			_speciality = speciality;
	}

	void set_text(string text) {
		if (text.length() < 5)
			throw"Tell us more about your work";
		else
			_text = text;
	}

	string get_name() { return _name; }
	int get_age() { return _age; }
	string get_speciality() { return _speciality; }
	string get_text() { return _text; }

	void print() {
		cout << "name:" << get_name() << endl;
		cout << "age:" << get_age() << endl;
		cout << "speciality:" << get_speciality() << endl;
		cout<<"text:"<<get_text() << endl;

		cout << '\n';
	}
};
