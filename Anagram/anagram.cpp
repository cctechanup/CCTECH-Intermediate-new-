
#include <iostream>
#include <cassert>
#include "source_anagram.h"

using namespace std;

int main()
{
	string word = "biro";
	int length = word.size();
	assert(!permute(word, 0, length - 1));
	// assert(!permute(word,0,length-1));
	 assert(!permute(word,10,20));
	return 0;
}
