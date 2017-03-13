#pragma once
#include "User.h"
#include "Item.h"
#include <vector>
#include <windows.h>
#include <msclr/marshal_cppstd.h>
#include "MainHelper.h"

using namespace System;

class UserHelper
{
public:
	UserHelper();
	~UserHelper();

public:
	static int ByUsersName(const User a, const User b)
	{
		return ((std::string)a.name_first + (std::string)a.name_last).compare((std::string)b.name_first + (std::string)b.name_last);
	}

public:
	static int ByUsersAge(const User a, const User b)
	{
		return a.age - b.age;
	}

public:
	static int ByUsersAddress(const User a, const User b)
	{
		return ((std::string)a.address).compare((std::string)b.address);
	}

public:
	template <typename T>
	static void bubble_sort_users(std::vector<T> &vArray, User::sort_type sort)
	{
		for (int i = 0; i < (int)vArray.size(); ++i)
		{
			for (int j = vArray.size() - 1; j > i; --j)
			{
				if (sort == User::sort_type::byName)
				{
					if (ByUsersName(vArray[i], vArray[j]) >= 0)
					{
						MainHelper::swap(vArray[i], vArray[j]);
					}
				}
				if (sort == User::sort_type::byAge)
				{
					if (ByUsersAge(vArray[i], vArray[j]) >= 0)
					{
						MainHelper::swap(vArray[i], vArray[j]);
					}
				}
				if (sort == User::sort_type::byAddress)
				{
					if (ByUsersAddress(vArray[i], vArray[j]) >= 0)
					{
						MainHelper::swap(vArray[i], vArray[j]);
					}
				}
			}
		}
	};

public:
	static void remove_item(std::vector<User> &v1, int id)
	{
		for (int i = 0; i < (int)v1.size(); i++)
		{
			if (v1[i].id == id)
			{
				v1.erase(v1.begin() + i);
			}
		}
	}


public:
	static void test_add_items(std::vector<User> &users)
	{
		for (int i = 0; i < 10; i++)
		{
			User user;
			user.id = i + 200;
			strcpy_s(user.name_first, std::to_string(user.id).c_str());
			strcpy_s(user.name_last, std::to_string(user.id).c_str());
			strcpy_s(user.address, std::to_string(user.id).c_str());
			user.age = i;
			users.push_back(user);
		}
	}

public:
	static System::Void set_data_table_users(std::vector<User> &users, System::Windows::Forms::DataGridView ^ dataGridView)
	{
		dataGridView->Rows->Clear();
		for (int i = 0; i < (int)users.size(); i++)
		{
			User user = users[i];
			dataGridView->Rows->Add();
			dataGridView->Rows[i]->Cells[0]->Value = user.id;
			dataGridView->Rows[i]->Cells[1]->Value = gcnew String(user.name_first);
			dataGridView->Rows[i]->Cells[2]->Value = gcnew String(user.name_last);
			dataGridView->Rows[i]->Cells[3]->Value = gcnew String(user.address);
			if (user.age > 0)
			{
				dataGridView->Rows[i]->Cells[4]->Value = user.age.ToString();
			}
		}
	}

	public:
		static int get_last_id(std::vector<User> users)
		{
			int last = 0;
			for (int i = 0; i < (int)users.size(); i++)
			{
				User item = users[i];
				if (item.id > last)
				{
					last = item.id;
				}
			}
			return last;
		}

public:
	static void get_data_table_users(User *users, long count, System::Windows::Forms::DataGridView ^ dataGridView)
	{
		int current = 0;
		for (int i = 0; i < count; i++)
		{
			int local_id = 0;
			std::string idDb = MainHelper::get_table_field(dataGridView, i, 0);
			if (!idDb.empty())
			{
				local_id = std::stoi(idDb);
			}
			if (local_id > current)
			{
				current = local_id;
			}
		}
		for (int i = 0; i < count; i++)
		{
			strcpy_s(users[i].name_first, MainHelper::get_table_field(dataGridView, i, 1).c_str());
			strcpy_s(users[i].name_last, MainHelper::get_table_field(dataGridView, i, 2).c_str());
			strcpy_s(users[i].address, MainHelper::get_table_field(dataGridView, i, 3).c_str());
			users[i].age = 0;
			std::string age = MainHelper::get_table_field(dataGridView, i, 4);
			if (!age.empty())
			{
				users[i].age = std::stoi(age);
			}
			std::string have_books = MainHelper::get_table_field(dataGridView, i, 5).c_str();
			users[i].have_books = false;
			if (have_books == "True")
			{
				users[i].have_books = true;
			}
			std::string idDb = MainHelper::get_table_field(dataGridView, i, 0);
			if (!idDb.empty())
			{
				users[i].id = std::stoi(idDb);
			}
			if (users[i].id <= 0)
			{
				users[i].id = current + 1;
			}
			current = users[i].id;
		}
	}

public:
	static User get_user(int id, std::vector<User> users)
	{
		for (int i = 0; i < (int)users.size(); i++)
		{
			User user = users[i];
			if (user.id == id)
			{
				return user;
			}
		}
		return User();
	}

public:
	static void set_have_books(std::vector<User> &users, std::vector<Item> &items)
	{
		for (int i = 0; i < (int)users.size(); i++)
		{
			users[i].have_books = false;
			for (int j = 0; j < (int)items.size(); j++)
			{
				Item item = items[j];
				if (users[i].id == item.id_user)
				{
					if (!item.returned)
					{
						users[i].have_books = true;
						break;
					}
				}
			}
		}
	}

};

