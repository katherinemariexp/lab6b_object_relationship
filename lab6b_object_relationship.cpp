#include <iostream>
#include <string>
#include <vector>
using namespace std;

//composition
class Tires
{
private:
	string m_size;
public:
	Tires(string size) : m_size(size)  {}
	
	void setSize(string size) { m_size = size; }
	
	string getSize() const { return m_size; }
};

class Car
{
private:
	string m_make;
	string m_model;
	int m_year;
	Tires m_tires;
	
public:
	Car(const string &make, const string &model, const int &year, const Tires &tires)
		: m_make(make), m_model(model), m_year(year), m_tires(tires) {}
	
	void setMake(string make) {m_make = make;}
	void setModel(string model) {m_model = model;}
	void setYear(int year) {m_year = year;}
	
	string getMake() const { return m_make; }
	string getModel() const { return m_model; }
	int getYear() const { return m_year; }
	
};

//aggregation

class Employee
{
private:
	string m_name;
public:
	Employee(string name) : m_name(name) {}
	
	void setName(string name) {m_name = name;}
	
	string getName() const {return m_name;}
};

class Company
{
private:
	Employee *m_employee;
public:
	Company(Employee *employee = nullptr) : m_employee(employee) {}
	
};

// Association
class Teacher;

class Student
{
private:
	string m_studentName;
	vector<Teacher *> m_school;
	void addTeacher(Teacher *teach);
	
	
public:
	Student(string name) : m_studentName(name) {}
	void setStud(string name) { m_studentName = name;}
	string getStud() {return m_studentName;}
	friend class Teacher;
};

class Teacher
{
private:
	string m_tName;
	vector<Student *> m_student;
public: 
	Teacher(string name) : m_tName(name) {}
	void addStudent(Student *stud) {}
	void setTName(string name) {m_tName = name;}
	string getTName() const {return m_tName;}
};

//inheritance

class Auto
{
private:
	int autoYear;
	string autoModel;
	string autoMake;
public: 
	Auto()
	{
		autoYear = 0;
		autoMake = "";
		autoModel = "";
	}
	
	void setAutoYear(int year) {autoYear = year;}
	void setAutoMake(string make) {autoMake = make;}
	void setAutoModel(string model) {autoModel = model;}
	
	int getAutoYear() const {return autoYear;}
	string getAutoMake() const {return autoMake;}
	string getAutoModel() const {return autoModel;}
};

class Truck : public Auto
{
private:
	int numOfDoors;
public:
Truck() : Auto()
{numOfDoors = 0;}

int getDoors() {return numOfDoors;}
};

int main()
{
	
 return 0;
}