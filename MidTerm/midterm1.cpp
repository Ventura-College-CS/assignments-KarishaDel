#include <iostream>
#include "stack.hpp"

using namespace std;

const int NUM_STUDENTS = 10;
const int NUM_SCORES = 3;
class Students
{
private:
	int sid;
	string sname;
	vector<double> score;

public:
	Students() : sid(0), sname() {}
	Students(int id, string name, double s0, double s1, double s2)
	{
		sid = id;
		sname = name;
		score.push_back(s1);
		score.push_back(s2);
		score.push_back(s3);
	}

	int getSid() const { return sid; }
	string getSname() const { return sname; }
	vector<double> const &getScore() const { return score; }
	void setSid(int id) { sid = id; }
	void setSname(string name) { sname = name; }
	void setScore(double s0, double s1, double s2)
	{
		score.clear();
		score.push_back(s1);
		score.push_back(s2);
		score.push_back(s3);
	}
    
	void printStudent() const
	{
		cout << "Student ID: " << sid << "\t";
		cout << "Name: " << sname << "\t";
		for (int i = 0; i < NUM_SCORES; i++)
			cout << score[i] << "\t";
		cout << endl;
	}
};

int main() 
{
	Students s1,s2,s3;
	

	s1.setSid(10000001);
	s1.setSname("Bill");
	s1.setScore(100, 100, 100);
	s1.printStudent();

	s2.setSid(10000002);
	s2.setSname("Kurt");
	s2.setScore(100, 90, 100);
	s2.printStudent();

	s3.setSid(10000003);
	s3.setSname("Greg");
	s3.setScore(100, 90, 50);
	s3.printStudent();

	Stack<Students, 10> st.push(s1);

	cout << st.pop() << endl; //s3
	
	student = st.pop();
	cs = Students.getScore();
	cout << Students.getSid() << Students.getSname();
	
	cout << st.pop() << endl; 
	student = st.pop();
	cs = Students.getScore();
	cout << Students.getSid() << Students.getSname();
	
	cout << st.pop() << endl; //s1
	student = st.pop();
	cs = Students.getScore();
	cout << Students.getSid() << Students.getSname();
}