#include "CompetitionScores.h"

CompetitionScores::CompetitionScores(const int max_entries) :
		num_entries(0), max_entries(max_entries) {
	this->entries = new CompetitionEntry[max_entries];
}

CompetitionScores::~CompetitionScores() {
	delete[] this->entries;
}

void CompetitionScores::insert(const CompetitionEntry& new_entry) {

	//if we have exceeded the max amount of entries
	if (num_entries == max_entries) {
		if (new_entry <= this->entries[max_entries - 1]) {
			return;
		}
	} else {
		num_entries++;
	}

	int i = num_entries - 2;//since we have num_entries + the new entry ,
	//therefore we start comparing from the position of the last entry in the list which would be -2 instead of the regular -1
	while (i >= 0 && new_entry > entries[i]) {
		entries[i + 1] = entries[i];
		--i;
	}
	entries[i + 1] = new_entry;
	return;
}

CompetitionEntry CompetitionScores::remove(int index) {

	if ((index < 0) || (index > num_entries)) {

		//an empty entry for nothing found
		return CompetitionEntry();
	}
	CompetitionEntry e = this->entries[index];

	//removing the particular entry by reducing the size of the array by 1 and reassigning the values from the position of the removed object
	for (int j = index + 1; j < num_entries; ++j) {
		this->entries[j - 1] = entries[j];
	}
	--num_entries;
	return e;
}

ostream& operator<<(ostream& os, const CompetitionScores& c) {
	os << "Top " << c.max_entries << " Competition Entry Scores" << endl
			<< endl;
	 os << setfill(' ') << left << setw(3) << "i"
			 << setfill(' ') << setw(15) << left << "name"
				<< setfill(' ') << right << setw(8) << "%"
				<< setfill(' ') << setw(8) << "t"
				<< right << setfill(' ') << setw(7) << "score" << endl;
	for (int i = 0; i < c.max_entries; ++i) {
		os << setw(2) << i << " " << c.entries[i] << endl;
	}
	return os;
}
