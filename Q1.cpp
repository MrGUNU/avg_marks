// WAP in C++ to create a class student(RNO, Name, Marks for 3 subjects). Read a student information & display the average mark.
#include<iostream>
#include<cstring>
using namespace std;
class Student
{
	int RollNo;
	char Name[50];
	int Marks1,Marks2,Marks3;
	public:
		void setdata(int r,char n[50],int m1,int m2,int m3)
		{
			RollNo=r;
			strcpy(Name,n);
			Marks1=m1;
			Marks2=m2;
			Marks3=m3;
		}
		void getdata()
		{
			cout<<"Student Roll No:"<<RollNo;
			cout<<"\n";
			cout<<"Student Name:"<<Name;
			cout<<"\n";
			cout<<"Marks In Subject 1:"<<Marks1;
			cout<<"\n";
			cout<<"Marks In Subject 2:"<<Marks2;
			cout<<"\n";
			cout<<"Marks In Subject 3:"<<Marks3;
			cout<<"\n";
		}
};
int main()
{
	Student s;
	int roll;
	char name[50];
	int marks1,marks2,marks3;
	float avg;
	cout<<"Enter The Student Roll NO.";
	cin>>roll;
	cout<<"Enter The Student Name:";
	cin>>name;
	cout<<"Enter The Marks 1:";
	cin>>marks1;
	cout<<"Enter The Marks 2:";
	cin>>marks2;
	cout<<"Enter The Marks 3:";
	cin>>marks3;
	avg=(marks1+marks2+marks3)/3;
	s.setdata(roll,name,marks1,marks2,marks3);
	cout<<"\n";
	cout<<"Student Details:\n";
	s.getdata();
	cout<<"Average of 3 Subjects:"<<avg;
	return 0;
}