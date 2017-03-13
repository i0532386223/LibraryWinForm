#pragma once
#include <string> 

// using namespace std;

struct User {
	int id;
	char name_first[128];
	char name_last[128];
	char address[256];
	int age;
	bool have_books;

	enum sort_type
	{
		byName, byAge, byAddress
	};

};


