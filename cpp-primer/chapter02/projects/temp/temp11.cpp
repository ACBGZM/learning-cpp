// …Ó«≥øΩ±¥

#include<iostream>
#include<vector>
using namespace std;


class Student
{
public:
	int age;
	vector<char> name;
	char* favoritesong;
public:
	Student(int _age, vector<char> _name, char* _favoritesong)
	{
		age = _age;
		name = _name;
		favoritesong = _favoritesong;
	}
	void showMessage()
	{
		cout << "my name is ";
		for (char c : name) cout << c;
		cout << ", i'm " << age << "years old, my favorite song is " << favoritesong << endl;
	}
};


int main11()
{
	vector<char> s1_name = { 'l', 'i', 'h', 'u', 'a' };
	char* s1_favoritesong = (char*)"jingle bell";	// Merry Christmas! 2021/12/22

	Student s1 = Student(10, s1_name, s1_favoritesong);
	s1.showMessage();
	 
	Student s2 = s1;	// «≥øΩ±¥
	s2.age = 7;
	s2.name = { 'l', 'i', 'b', 'a', 'i' };
	s2.favoritesong = (char*)"alphabet song";

	s2.showMessage();
	s1.showMessage();


	return 0;
}