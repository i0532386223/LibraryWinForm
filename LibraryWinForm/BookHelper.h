#pragma once
#include "Book.h"
#include "BookExt.h"
#include "Item.h"
#include <vector>
#include <windows.h>
#include <msclr/marshal_cppstd.h>
#include "MainHelper.h"
#include "time.h"
#include "Singleton.h"

using namespace System;

class BookHelper
{
public:
	BookHelper();
	~BookHelper();

public:
	static int ByUsersName(const Book a, const Book b)
	{
		return ((std::string)a.name).compare((std::string)b.name);
	}

public:
	static int byAuthor(const Book a, const Book b)
	{
		return ((std::string)a.author_name_first + (std::string)a.author_name_last).compare((std::string)b.author_name_first + (std::string)b.author_name_last);
	}

public:
	static int byGenre(const Book a, const Book b)
	{
		return ((std::string)a.genre).compare((std::string)b.genre);
	}

public:
	template <typename T>
	static void bubble_sort_users(std::vector<T> &vArray, Book::sort_type sort)
	{
		for (int i = 0; i < (int)vArray.size(); ++i)
		{
			for (int j = vArray.size() - 1; j > i; --j)
			{
				if (sort == Book::sort_type::byName)
				{
					if (ByUsersName(vArray[i], vArray[j]) >= 0)
					{
						MainHelper::swap(vArray[i], vArray[j]);
					}
				}
				if (sort == Book::sort_type::byAuthor)
				{
					if (byAuthor(vArray[i], vArray[j]) >= 0)
					{
						MainHelper::swap(vArray[i], vArray[j]);
					}
				}
				if (sort == Book::sort_type::byGenre)
				{
					if (byGenre(vArray[i], vArray[j]) >= 0)
					{
						MainHelper::swap(vArray[i], vArray[j]);
					}
				}
			}
		}
	};

public:
	static void remove_item(std::vector<Book> &v1, int id)
	{
		std::vector<Book> v2;
		for (int i = 0; i < (int)v1.size(); i++)
		{
			if (v1[i].id != id)
			{
				v2.push_back(v1[i]);
			}
		}
		v1 = v2;
	}

//public:
//	static void remove_item(std::vector<Book> &v1, int id)
//	{
//		for (int i = 0; i < (int)v1.size(); i++)
//		{
//			if (v1[i].id == id)
//			{
//				v1.erase(v1.begin() + i);
//			}
//		}
//	}


public:
	static void test_add_items(std::vector<Book> &books)
	{
		for (int i = 0; i < 10; i++)
		{
			Book book;
			book.id = i + 200;
			strcpy_s(book.name, std::to_string(book.id).c_str());
			strcpy_s(book.author_name_first, std::to_string(book.id).c_str());
			strcpy_s(book.author_name_last, std::to_string(book.id).c_str());
			book.year = 2000 + i;
			books.push_back(book);
		}
	}

public:
	static System::Void set_data_table_books(std::vector<Book> &books, System::Windows::Forms::DataGridView ^ dataGridView)
	{
		dataGridView->Rows->Clear();
		for (int i = 0; i < (int)books.size(); i++)
		{
			Book book = books[i];
			if (!book.author_name_first)
			{
				strcpy_s(book.author_name_first, "");
			}
			if (!book.author_name_last)
			{
				strcpy_s(book.author_name_last, "");
			}
			if (!book.name)
			{
				strcpy_s(book.name, "");
			}
			if (!book.isbn)
			{
				strcpy_s(book.isbn, "");
			}
			dataGridView->Rows->Add();
			dataGridView->Rows[i]->Cells[0]->Value = book.id;
			dataGridView->Rows[i]->Cells[2]->Value = gcnew String(book.isbn);
			dataGridView->Rows[i]->Cells[3]->Value = gcnew String(book.name);
			if (book.year > 0)
			{
				dataGridView->Rows[i]->Cells[4]->Value = book.year.ToString();
			}
			dataGridView->Rows[i]->Cells[5]->Value = gcnew String(book.author_name_first);
			dataGridView->Rows[i]->Cells[6]->Value = gcnew String(book.author_name_last);
			dataGridView->Rows[i]->Cells[7]->Value = gcnew String(book.genre);
			dataGridView->Rows[i]->Cells[8]->Value = book.exist;
		}
	}
	public:
		static System::Void set_data_table_books(std::vector<BookExt> &books, System::Windows::Forms::DataGridView ^ dataGridView)
		{
			dataGridView->Rows->Clear();
			for (int i = 0; i < (int)books.size(); i++)
			{
				BookExt book = books[i];
				if (!book.author_name_first)
				{
					strcpy_s(book.author_name_first, "");
				}
				if (!book.author_name_last)
				{
					strcpy_s(book.author_name_last, "");
				}
				if (!book.name)
				{
					strcpy_s(book.name, "");
				}
				if (!book.isbn)
				{
					strcpy_s(book.isbn, "");
				}
				dataGridView->Rows->Add();
				dataGridView->Rows[i]->Cells[0]->Value = book.id;
				dataGridView->Rows[i]->Cells[2]->Value = gcnew String(book.isbn);
				dataGridView->Rows[i]->Cells[3]->Value = gcnew String(book.name);
				if (book.year > 0)
				{
					dataGridView->Rows[i]->Cells[4]->Value = book.year.ToString();
				}
				dataGridView->Rows[i]->Cells[5]->Value = gcnew String(book.author_name_first);
				dataGridView->Rows[i]->Cells[6]->Value = gcnew String(book.author_name_last);
				dataGridView->Rows[i]->Cells[7]->Value = gcnew String(book.genre);
				dataGridView->Rows[i]->Cells[8]->Value = book.exist;
				if (book.date_start > 0)
				{
					time_t _tm1 = book.date_start;
					dataGridView->Rows[i]->Cells[9]->Value = gcnew String(get_date(_tm1).c_str());
				}
				if (book.date_end > 0)
				{
					time_t _tm2 = book.date_end;
					dataGridView->Rows[i]->Cells[10]->Value = gcnew String(get_date(_tm2).c_str());
				}
				dataGridView->Rows[i]->Cells[11]->Value = book.id_item;
			}
		}

		static std::string get_date(time_t t)
		{
			char mbstr[100];
			if (strftime(mbstr, sizeof(mbstr), "%d/%m/%y %T", localtime(&t))) {
				std::string str(mbstr);
				return str;
				// std::cout << mbstr << '\n';
			}
			return "";
		}

public:
	static System::Void set_data_table_books(std::vector<Book> *books, System::Windows::Forms::DataGridView ^ dataGridView)
	{
		std::vector<Book> books2 = *books;
		set_data_table_books(books2, dataGridView);
	}

public:
	static int get_last_id(std::vector<Book> books)
	{
		int last = 0;
		for (int i = 0; i < (int)books.size(); i++)
		{
			Book item = books[i];
			if (item.id > last)
			{
				last = item.id;
			}
		}
		return last;
	}

public:
	static void get_data_table_books(Book *books, long count, System::Windows::Forms::DataGridView ^ dataGridView)
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
			strcpy_s(books[i].isbn, MainHelper::get_table_field(dataGridView, i, 2).c_str());
			strcpy_s(books[i].name, MainHelper::get_table_field(dataGridView, i, 3).c_str());
			books[i].year = 0;
			std::string year = MainHelper::get_table_field(dataGridView, i, 4);
			if (!year.empty())
			{
				try
				{
					books[i].year = std::stoi(year);
				}
				catch (const std::exception&)
				{
				}
			}
			strcpy_s(books[i].author_name_first, MainHelper::get_table_field(dataGridView, i, 5).c_str());
			strcpy_s(books[i].author_name_last, MainHelper::get_table_field(dataGridView, i, 6).c_str());
			strcpy_s(books[i].genre, MainHelper::get_table_field(dataGridView, i, 7).c_str());
			std::string exist = MainHelper::get_table_field(dataGridView, i, 8).c_str();
			books[i].exist = false;
			if (exist == "True")
			{
				books[i].exist = true;
			}
			std::string idDb = MainHelper::get_table_field(dataGridView, i, 0);
			if (!idDb.empty())
			{
				books[i].id = std::stoi(idDb);
			}
			if (books[i].id <= 0)
			{
				current++;
				books[i].id = current;
			}
		}
	}

	public:
		static void get_data_table_books(BookExt *books, long count, System::Windows::Forms::DataGridView ^ dataGridView)
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
				strcpy_s(books[i].isbn, MainHelper::get_table_field(dataGridView, i, 2).c_str());
				strcpy_s(books[i].name, MainHelper::get_table_field(dataGridView, i, 3).c_str());
				books[i].year = 0;
				std::string year = MainHelper::get_table_field(dataGridView, i, 4);
				if (!year.empty())
				{
					try
					{
						books[i].year = std::stoi(year);
					}
					catch (const std::exception&)
					{
					}
				}
				strcpy_s(books[i].author_name_first, MainHelper::get_table_field(dataGridView, i, 5).c_str());
				strcpy_s(books[i].author_name_last, MainHelper::get_table_field(dataGridView, i, 6).c_str());
				strcpy_s(books[i].genre, MainHelper::get_table_field(dataGridView, i, 7).c_str());
				std::string exist = MainHelper::get_table_field(dataGridView, i, 8).c_str();
				books[i].exist = false;
				if (exist == "True")
				{
					books[i].exist = true;
				}
				std::string idDb = MainHelper::get_table_field(dataGridView, i, 0);
				if (!idDb.empty())
				{
					books[i].id = std::stoi(idDb);
				}
				if (books[i].id <= 0)
				{
					current++;
					books[i].id = current;
				}
				std::string id_item = MainHelper::get_table_field(dataGridView, i, 11);
				if (!id_item.empty())
				{
					books[i].id_item = std::stoi(id_item);
				}
			}
		}

public:
	static Book get_book(int id, std::vector<Book> books)
	{
		for (int i = 0; i < (int)books.size(); i++)
		{
			Book book = books[i];
			if (book.id == id)
			{
				return book;
			}
		}
		return Book();
	}

public:
	static void set_exists(std::vector<Book> &books, std::vector<Item> &items)
	{
		for (int i = 0; i < (int)books.size(); i++)
		{
			books[i].exist = true;
			for (int j = 0; j < (int)items.size(); j++)
			{
				Item item = items[j];
				if (books[i].id == item.id_book)
				{
					if (!item.returned)
					{
						books[i].exist = false;
						break;
					}
				}
			}
		}
	}

};

