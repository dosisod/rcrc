#include "algs.hpp"

int first_non_match(const std::string& a, const std::string& b) {
	char last_match;

	if (a.length()>0) last_match=a[0];
	else return 0;

	int i=0;
	for (;i<a.length(),i<b.length();i++) {
		if (a[i]!=b[i]) return i;
	}

	return i;
}
