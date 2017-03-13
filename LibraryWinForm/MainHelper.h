#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <windows.h>
#include <msclr/marshal_cppstd.h>
#include "MainHelper.h"

#include <iostream>
#include <string>
#include <fstream>

class MainHelper
{
public:
	MainHelper();
	~MainHelper();

public:
	static std::string get_table_field(System::Windows::Forms::DataGridView^ dataGridView, int row, int col)
	{
		if (dataGridView->Rows[row]->Cells[col]->Value)
		{
			System::String ^ managed = dataGridView->Rows[row]->Cells[col]->Value->ToString();
			std::string unmanaged = msclr::interop::marshal_as<std::string>(managed);
			return unmanaged;
		}
		return "";
	}

public:
	static std::vector<std::string> split(const std::string& s, const char * delim)
	{
		std::string::size_type size = s.length();
		char * const buffer = new char[size + 1];
		std::vector<std::string> res;
		strcpy(buffer, s.c_str());
		char * p = strtok(buffer, delim);
		while (p)
		{
			res.push_back(std::string(p));
			p = strtok(NULL, delim);
		}
		delete[]buffer;
		return res;
	}

public:
	static int load_file(std::vector<std::string> &items, std::string filename)
	{
		int count = 0;
		std::ifstream infile(filename.c_str());
		std::string line;
		while (std::getline(infile, line)) {
			count++;
			items.push_back(line);
		}
		return count;
	}

	template <typename T>
	static void swap(T &arg1, T &arg2)
	{
		T temp = arg1;
		arg1 = arg2;
		arg2 = temp;
	};


};

