#pragma once
#include <string>  
#include "Book.h"
#include <vector>
#include <windows.h>
#include <msclr/marshal_cppstd.h>
#include "MainHelper.h"

using namespace System;

using namespace System;

struct BookExt {
	int id;
	char isbn[32];
	char name[256];
	int year;
	char author_name_first[128];
	char author_name_last[128];
	char genre[128];
	bool exist;
	long date_start;
	long date_end;
	int id_item;

	BookExt()
	{
		
	}
	BookExt(Book book, int _id_item)
	{
		id = book.id;
		strcpy_s(isbn, book.isbn);
		strcpy_s(name, book.name);
		year = book.year;
		strcpy_s(author_name_first, book.author_name_first);
		strcpy_s(author_name_last, book.author_name_last);
		strcpy_s(genre, book.genre);
		exist = book.exist;
		id_item = _id_item;
	}
};

