#pragma once
#include <string>  

struct Book {
	int id;
	char isbn[32];
	char name[256];
	int year;
	char author_name_first[128];
	char author_name_last[128];
	char genre[128];
	bool exist;

	enum sort_type
	{
		byName, byAuthor, byGenre
	};

};

//struct Book {
//	int id;
//	std::string isbn;
//	std::string name;
//	int year;
//	std::string author_name_first;
//	std::string author_name_last;
//	std::string genre;
//};