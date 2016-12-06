
#include "CompetitionEntry.h"

CompetitionEntry::CompetitionEntry(const string& name, const double& percentage, const double& time) :
name(name), percentage_correct(percentage), time_elapsed(time) {

}

CompetitionEntry::~CompetitionEntry() {

}

//overriden operator defenition
bool CompetitionEntry::operator<(const CompetitionEntry& d) const {
	return (this->getScore() < d.getScore());
}

ostream& operator<<(ostream& os, const CompetitionEntry& v) {
	return os << setw(15) << left << v.name << " "
			<< right << fixed << setprecision(2) << setw(7) << v.percentage_correct << " " << setw(7) << v.time_elapsed
			<< right << fixed << setprecision(3) << setw(7) << v.getScore();
			;
}
