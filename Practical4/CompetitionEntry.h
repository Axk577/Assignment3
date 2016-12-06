

#ifndef SRC_COMPETITIONENTRY_H_
#define SRC_COMPETITIONENTRY_H_

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class CompetitionEntry {
public:

	//user defined constructor
	CompetitionEntry(const string& name = "", const double& percentage_correct = 0, const double& time_elapsed = 0);

	// destructor
	virtual ~CompetitionEntry();

	string getName() const ;

	//mutator functions
	void setName(const string& v) { this->name = v; }
	void setPercentageComplete(const double& v) { this->percentage_correct = v; }
	void setTimeElapsed(const double& v) { this->time_elapsed = v; }

	//accessor functions
	double getPercentageComplete();
	double getTimeElapsed();
	double getScore() const {
		return (this->percentage_correct + this->time_elapsed/1000)/2;
	}


	bool operator<(const CompetitionEntry& d) const;
	bool operator>(const CompetitionEntry& d) const {
		return d < (*this);
	}
	bool operator<=(const CompetitionEntry& d) const {
		return !(d < (*this));
	}
	bool operator>=(const CompetitionEntry& d) const {
		return !((*this) < d);
	}


	bool operator==(const CompetitionEntry& d) const ;

	//the friend declaration gives access to private and protected members of the class
	friend ostream& operator<<(ostream& os, const CompetitionEntry& e);

private:
	string name;
	double percentage_correct;
	double time_elapsed;
};

#endif /* SRC_COMPETITIONENTRY_H_ */
