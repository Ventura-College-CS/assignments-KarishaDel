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
	Students(int id, string name, double s0, double s1, double s2, double s3, double s4)
	{
		sid = id;
		sname = name;
		score.push_back(s0);
		score.push_back(s1);
		score.push_back(s2);
		score.push_back(s3);
		score.push_back(s4);
	}

	int getSid() const { return sid; }
	string getSname() const { return sname; }
	vector<double> const &getScore() const { return score; }
	void setSid(int id) { sid = id; }
	void setSname(string name) { sname = name; }
	void setScore(double *sc)
	{
		score.clear();
		for (int i=0; i<5; i++)
		{
			score.push_back(sc[i]);
		}

	}

};


int main() 
{
	Students s[5]; //Students class assing to array
	string name[] = {"Bill", "Kurt", "John", "Mary", "Shawn"}; //fill in the array for names
	double score[5][5] = { {100.0, 99.0, 100.0}, {100.0, 99.0, 87.0}, {100.0, 90.0, 100.0}, {88.0, 90.0, 60.0},{100.0, 100.0, 100.0}};

	Students tmp;
	vector<double> cs;
	int i;
	Stack<Students, 10> st;

	for (int i=0; i < 5; i++) //this pulls the infor from the class amd places itno the for loop
	{
		s[i].setSid(1000000+i);
		s[i].setSname(name[i]);
		s[i].setScore(score[i]);
		st.push(s[i]);
	}

	for(int i =0; i < 5; i++) 
	/*this prints the info out but placing the data in tmp then placing it in cs which allows the next bit of data to go into tmp
	then it pritns all 3 scores */
	{
		tmp = st.pop();
		cs = tmp.getScore();
		cout << tmp.getSid() << " " << tmp.getSname()<< endl;
		
		for(int j=0;j<cs.size();j++)
		{
			cout << cs[j] <<endl;
		}
	}

}
