
#ifndef SRC_COMPETITIONSCORES_H_
#define SRC_COMPETITIONSCORES_H_

#include <iostream>
#include <iomanip>
#include "CompetitionEntry.h"

using namespace std;

class CompetitionScores {
public:
	CompetitionScores(const int max_entries = 10);

	virtual ~CompetitionScores();

	//inserting an entry
	void insert(const CompetitionEntry& e);

	//removing an entry
	CompetitionEntry remove(int index);

	friend ostream& operator<<(ostream& os, const CompetitionScores& s);

private:

	int num_entries;

	int max_entries;
	CompetitionEntry *entries;
};

#endif /* SRC_COMPETITIONSCORES_H_ */
