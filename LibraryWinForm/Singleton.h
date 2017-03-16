#pragma once
#include "User.h"
#include "Book.h"
#include "Item.h"
#include <vector>

// Meyers' Singleton

class Singleton
{

//public:
//	User *selected_user;
public:
	std::vector<User> users_all;
public:
	std::vector<User> users_filter;
public:
	std::vector<Book> books_all;
public:
	std::vector<Book> books_filter;
public:
	std::vector<Item> items_all;

public:
	User selected_user;
public:
	std::vector<BookExt> books_user;

public:
	static Singleton& Instance()
	{
		static Singleton s;
		return s;
	}

private:
	Singleton() {
	}
	~Singleton() {
	}
	Singleton(Singleton const&);
	Singleton& operator = (Singleton const&);
};