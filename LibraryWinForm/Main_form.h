#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <windows.h>
#include "User.h"
#include "Book.h"
#include "Item.h"
#include <vector>
#include <msclr/marshal_cppstd.h>
#include <algorithm>
#include "UserHelper.h"
#include "BookHelper.h"
#include "Library_card.h"
#include "MainHelper.h"



namespace Library
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	// using namespace std;

	std::vector<User> users_all;
	std::vector<User> users_filter;
	bool filter_active_users;

	std::vector<Book> books_all;
	std::vector<Book> books_filter;
	bool filter_active_books;

	std::vector<Item> items_all;

	/// <summary>
	/// Summary for Main_form
	/// </summary>
	public
	ref class Main_form : public System::Windows::Forms::Form
	{
	public:
		Main_form(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Main_form()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::DataGridView ^ dataGridView_users;

	private:
		System::Windows::Forms::TabControl ^ tabControl1;

	private:
		System::Windows::Forms::TabPage ^ tabPage_users;

	private:
		System::Windows::Forms::TabPage ^ tabPage_books;

	private:
		System::Windows::Forms::DataGridView ^ dataGridView_books;

	private:
		System::Windows::Forms::TextBox ^ textBox_name_user;

	private:
		System::Windows::Forms::CheckBox ^ checkBox_name_user;

	private:
		System::Windows::Forms::CheckBox ^ checkBox_age_user;

	private:
		System::Windows::Forms::TextBox ^ textBox_age_user;

	private:
		System::Windows::Forms::CheckBox ^ checkBox_only_return_user;

	private:
		System::Windows::Forms::Label ^ label_all_users;

	private:
		System::Windows::Forms::Label ^ label_return_users;

	private:
		System::Windows::Forms::SplitContainer ^ splitContainer1;

	private:
		System::Windows::Forms::Button ^ button_sort_address;

	private:
		System::Windows::Forms::Button ^ button_sort_age_user;

	private:
		System::Windows::Forms::Button ^ button_sort_name_user;

	private:
		System::Windows::Forms::SplitContainer ^ splitContainer2;

	private:
		System::Windows::Forms::TextBox ^ textBox_genre;

	private:
		System::Windows::Forms::CheckBox ^ checkBox_genre;

	private:
		System::Windows::Forms::TextBox ^ textBox_author;

	private:
		System::Windows::Forms::CheckBox ^ checkBox_author;

	private:
		System::Windows::Forms::Button ^ button_sort_genre;

	private:
		System::Windows::Forms::Button ^ button_sort_author;

	private:
		System::Windows::Forms::Button ^ button_sort_name_books;

	private:
		System::Windows::Forms::TextBox ^ textBox_name_books;

	private:
		System::Windows::Forms::Label ^ label_return_books;

	private:
		System::Windows::Forms::CheckBox ^ checkBox_name_books;

	private:
		System::Windows::Forms::Label ^ label_all_books;

	private:
		System::Windows::Forms::TextBox ^ textBox_year_books;

	private:
		System::Windows::Forms::CheckBox ^ checkBox_only_return_books;

	private:
		System::Windows::Forms::CheckBox ^ checkBox_year_books;

	private:
		System::Windows::Forms::TextBox ^ textBox_address;

	private:
		System::Windows::Forms::CheckBox ^ checkBox_address;

	private:


	private:


	private:


	private:


	private:


	private:


	private:


	private:


	private:


	private:


	private:


	private:


	private:


	private:


	private:

	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  importToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^  menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^  importToolStripMenuItem1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  id_book;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Select;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  isbn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  year;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  author_name_first;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  author_name_last;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  genre;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^  exist;
	private: System::Windows::Forms::DataGridViewButtonColumn^  UserBook;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  id_user;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  name_first;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  name_last;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  address;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  age;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  have_books;
private: System::Windows::Forms::DataGridViewButtonColumn^  library_card;











































	private:
	private:
	private:
	private:
	private:
	private:
	private:
	protected:
	protected:
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dataGridView_users = (gcnew System::Windows::Forms::DataGridView());
			this->id_user = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name_first = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name_last = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->address = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->age = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->have_books = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->library_card = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage_users = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->textBox_address = (gcnew System::Windows::Forms::TextBox());
			this->checkBox_address = (gcnew System::Windows::Forms::CheckBox());
			this->button_sort_address = (gcnew System::Windows::Forms::Button());
			this->button_sort_age_user = (gcnew System::Windows::Forms::Button());
			this->button_sort_name_user = (gcnew System::Windows::Forms::Button());
			this->textBox_name_user = (gcnew System::Windows::Forms::TextBox());
			this->label_return_users = (gcnew System::Windows::Forms::Label());
			this->checkBox_name_user = (gcnew System::Windows::Forms::CheckBox());
			this->label_all_users = (gcnew System::Windows::Forms::Label());
			this->textBox_age_user = (gcnew System::Windows::Forms::TextBox());
			this->checkBox_only_return_user = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_age_user = (gcnew System::Windows::Forms::CheckBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->importToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabPage_books = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->dataGridView_books = (gcnew System::Windows::Forms::DataGridView());
			this->id_book = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Select = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->isbn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->year = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->author_name_first = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->author_name_last = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->genre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->exist = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->UserBook = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->importToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox_genre = (gcnew System::Windows::Forms::TextBox());
			this->checkBox_genre = (gcnew System::Windows::Forms::CheckBox());
			this->textBox_author = (gcnew System::Windows::Forms::TextBox());
			this->checkBox_author = (gcnew System::Windows::Forms::CheckBox());
			this->button_sort_genre = (gcnew System::Windows::Forms::Button());
			this->button_sort_author = (gcnew System::Windows::Forms::Button());
			this->button_sort_name_books = (gcnew System::Windows::Forms::Button());
			this->textBox_name_books = (gcnew System::Windows::Forms::TextBox());
			this->label_return_books = (gcnew System::Windows::Forms::Label());
			this->checkBox_name_books = (gcnew System::Windows::Forms::CheckBox());
			this->label_all_books = (gcnew System::Windows::Forms::Label());
			this->textBox_year_books = (gcnew System::Windows::Forms::TextBox());
			this->checkBox_only_return_books = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_year_books = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_users))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage_users->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->tabPage_books->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_books))->BeginInit();
			this->menuStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView_users
			// 
			this->dataGridView_users->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->id_user,
					this->name_first, this->name_last, this->address, this->age, this->have_books, this->library_card
			});
			this->dataGridView_users->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView_users->Location = System::Drawing::Point(0, 0);
			this->dataGridView_users->Name = L"dataGridView_users";
			this->dataGridView_users->Size = System::Drawing::Size(887, 500);
			this->dataGridView_users->TabIndex = 0;
			this->dataGridView_users->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Main_form::dataGridView_users_CellContentClick);
			this->dataGridView_users->RowsAdded += gcnew System::Windows::Forms::DataGridViewRowsAddedEventHandler(this, &Main_form::dataGridView_users_RowsAdded);
			this->dataGridView_users->RowsRemoved += gcnew System::Windows::Forms::DataGridViewRowsRemovedEventHandler(this, &Main_form::dataGridView_users_RowsRemoved);
			this->dataGridView_users->UserDeletedRow += gcnew System::Windows::Forms::DataGridViewRowEventHandler(this, &Main_form::dataGridView_users_UserDeletedRow);
			// 
			// id_user
			// 
			this->id_user->HeaderText = L"id";
			this->id_user->Name = L"id_user";
			this->id_user->Visible = false;
			// 
			// name_first
			// 
			this->name_first->HeaderText = L"First name";
			this->name_first->Name = L"name_first";
			this->name_first->Width = 200;
			// 
			// name_last
			// 
			this->name_last->HeaderText = L"Last name";
			this->name_last->Name = L"name_last";
			this->name_last->Width = 200;
			// 
			// address
			// 
			this->address->HeaderText = L"Address";
			this->address->Name = L"address";
			this->address->Width = 250;
			// 
			// age
			// 
			this->age->HeaderText = L"Age";
			this->age->Name = L"age";
			this->age->Width = 70;
			// 
			// have_books
			// 
			this->have_books->HeaderText = L"Have books";
			this->have_books->Name = L"have_books";
			this->have_books->Visible = false;
			// 
			// library_card
			// 
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->library_card->DefaultCellStyle = dataGridViewCellStyle1;
			this->library_card->HeaderText = L"Library card";
			this->library_card->Name = L"library_card";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage_users);
			this->tabControl1->Controls->Add(this->tabPage_books);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->ItemSize = System::Drawing::Size(250, 50);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(901, 721);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage_users
			// 
			this->tabPage_users->Controls->Add(this->splitContainer1);
			this->tabPage_users->Controls->Add(this->menuStrip1);
			this->tabPage_users->Location = System::Drawing::Point(4, 54);
			this->tabPage_users->Name = L"tabPage_users";
			this->tabPage_users->Padding = System::Windows::Forms::Padding(3);
			this->tabPage_users->Size = System::Drawing::Size(893, 663);
			this->tabPage_users->TabIndex = 0;
			this->tabPage_users->Text = L"          Users          ";
			this->tabPage_users->UseVisualStyleBackColor = true;
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->FixedPanel = System::Windows::Forms::FixedPanel::Panel2;
			this->splitContainer1->IsSplitterFixed = true;
			this->splitContainer1->Location = System::Drawing::Point(3, 27);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->dataGridView_users);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->textBox_address);
			this->splitContainer1->Panel2->Controls->Add(this->checkBox_address);
			this->splitContainer1->Panel2->Controls->Add(this->button_sort_address);
			this->splitContainer1->Panel2->Controls->Add(this->button_sort_age_user);
			this->splitContainer1->Panel2->Controls->Add(this->button_sort_name_user);
			this->splitContainer1->Panel2->Controls->Add(this->textBox_name_user);
			this->splitContainer1->Panel2->Controls->Add(this->label_return_users);
			this->splitContainer1->Panel2->Controls->Add(this->checkBox_name_user);
			this->splitContainer1->Panel2->Controls->Add(this->label_all_users);
			this->splitContainer1->Panel2->Controls->Add(this->textBox_age_user);
			this->splitContainer1->Panel2->Controls->Add(this->checkBox_only_return_user);
			this->splitContainer1->Panel2->Controls->Add(this->checkBox_age_user);
			this->splitContainer1->Size = System::Drawing::Size(887, 633);
			this->splitContainer1->SplitterDistance = 500;
			this->splitContainer1->TabIndex = 9;
			// 
			// textBox_address
			// 
			this->textBox_address->Location = System::Drawing::Point(13, 65);
			this->textBox_address->Name = L"textBox_address";
			this->textBox_address->Size = System::Drawing::Size(164, 20);
			this->textBox_address->TabIndex = 12;
			// 
			// checkBox_address
			// 
			this->checkBox_address->AutoSize = true;
			this->checkBox_address->Location = System::Drawing::Point(183, 68);
			this->checkBox_address->Name = L"checkBox_address";
			this->checkBox_address->Size = System::Drawing::Size(100, 17);
			this->checkBox_address->TabIndex = 13;
			this->checkBox_address->Text = L"Find by address";
			this->checkBox_address->UseVisualStyleBackColor = true;
			this->checkBox_address->CheckedChanged += gcnew System::EventHandler(this, &Main_form::checkBox_address_CheckedChanged);
			// 
			// button_sort_address
			// 
			this->button_sort_address->Location = System::Drawing::Point(351, 70);
			this->button_sort_address->Name = L"button_sort_address";
			this->button_sort_address->Size = System::Drawing::Size(156, 23);
			this->button_sort_address->TabIndex = 11;
			this->button_sort_address->Text = L"Sort by address";
			this->button_sort_address->UseVisualStyleBackColor = true;
			this->button_sort_address->Click += gcnew System::EventHandler(this, &Main_form::button_sort_address_Click);
			// 
			// button_sort_age_user
			// 
			this->button_sort_age_user->Location = System::Drawing::Point(351, 41);
			this->button_sort_age_user->Name = L"button_sort_age_user";
			this->button_sort_age_user->Size = System::Drawing::Size(156, 23);
			this->button_sort_age_user->TabIndex = 10;
			this->button_sort_age_user->Text = L"Sort by age";
			this->button_sort_age_user->UseVisualStyleBackColor = true;
			this->button_sort_age_user->Click += gcnew System::EventHandler(this, &Main_form::button_sort_age_user_Click);
			// 
			// button_sort_name_user
			// 
			this->button_sort_name_user->Location = System::Drawing::Point(351, 12);
			this->button_sort_name_user->Name = L"button_sort_name_user";
			this->button_sort_name_user->Size = System::Drawing::Size(156, 23);
			this->button_sort_name_user->TabIndex = 9;
			this->button_sort_name_user->Text = L"Sort by name";
			this->button_sort_name_user->UseVisualStyleBackColor = true;
			this->button_sort_name_user->Click += gcnew System::EventHandler(this, &Main_form::button_sort_name_user_Click);
			// 
			// textBox_name_user
			// 
			this->textBox_name_user->Location = System::Drawing::Point(13, 13);
			this->textBox_name_user->Name = L"textBox_name_user";
			this->textBox_name_user->Size = System::Drawing::Size(164, 20);
			this->textBox_name_user->TabIndex = 2;
			// 
			// label_return_users
			// 
			this->label_return_users->AutoSize = true;
			this->label_return_users->Location = System::Drawing::Point(603, 38);
			this->label_return_users->Name = L"label_return_users";
			this->label_return_users->Size = System::Drawing::Size(210, 13);
			this->label_return_users->TabIndex = 8;
			this->label_return_users->Text = L"Users who didn\'t return books to the library:";
			// 
			// checkBox_name_user
			// 
			this->checkBox_name_user->AutoSize = true;
			this->checkBox_name_user->Location = System::Drawing::Point(183, 16);
			this->checkBox_name_user->Name = L"checkBox_name_user";
			this->checkBox_name_user->Size = System::Drawing::Size(89, 17);
			this->checkBox_name_user->TabIndex = 3;
			this->checkBox_name_user->Text = L"Find by name";
			this->checkBox_name_user->UseVisualStyleBackColor = true;
			this->checkBox_name_user->CheckedChanged += gcnew System::EventHandler(this, &Main_form::checkBox_name_user_CheckedChanged);
			// 
			// label_all_users
			// 
			this->label_all_users->AutoSize = true;
			this->label_all_users->Location = System::Drawing::Point(603, 12);
			this->label_all_users->Name = L"label_all_users";
			this->label_all_users->Size = System::Drawing::Size(49, 13);
			this->label_all_users->TabIndex = 7;
			this->label_all_users->Text = L"All users:";
			// 
			// textBox_age_user
			// 
			this->textBox_age_user->Location = System::Drawing::Point(13, 39);
			this->textBox_age_user->Name = L"textBox_age_user";
			this->textBox_age_user->Size = System::Drawing::Size(164, 20);
			this->textBox_age_user->TabIndex = 4;
			// 
			// checkBox_only_return_user
			// 
			this->checkBox_only_return_user->AutoSize = true;
			this->checkBox_only_return_user->Location = System::Drawing::Point(606, 96);
			this->checkBox_only_return_user->Name = L"checkBox_only_return_user";
			this->checkBox_only_return_user->Size = System::Drawing::Size(254, 17);
			this->checkBox_only_return_user->TabIndex = 6;
			this->checkBox_only_return_user->Text = L"Show users who didn\'t return books to the library";
			this->checkBox_only_return_user->UseVisualStyleBackColor = true;
			this->checkBox_only_return_user->CheckedChanged += gcnew System::EventHandler(this, &Main_form::checkBox_only_return_user_CheckedChanged);
			// 
			// checkBox_age_user
			// 
			this->checkBox_age_user->AutoSize = true;
			this->checkBox_age_user->Location = System::Drawing::Point(183, 42);
			this->checkBox_age_user->Name = L"checkBox_age_user";
			this->checkBox_age_user->Size = System::Drawing::Size(81, 17);
			this->checkBox_age_user->TabIndex = 5;
			this->checkBox_age_user->Text = L"Find by age";
			this->checkBox_age_user->UseVisualStyleBackColor = true;
			this->checkBox_age_user->CheckedChanged += gcnew System::EventHandler(this, &Main_form::checkBox_age_user_CheckedChanged);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->importToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(3, 3);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(887, 24);
			this->menuStrip1->TabIndex = 10;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// importToolStripMenuItem
			// 
			this->importToolStripMenuItem->Name = L"importToolStripMenuItem";
			this->importToolStripMenuItem->Size = System::Drawing::Size(55, 20);
			this->importToolStripMenuItem->Text = L"Import";
			this->importToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main_form::importToolStripMenuItem_Click);
			// 
			// tabPage_books
			// 
			this->tabPage_books->Controls->Add(this->splitContainer2);
			this->tabPage_books->Location = System::Drawing::Point(4, 54);
			this->tabPage_books->Name = L"tabPage_books";
			this->tabPage_books->Padding = System::Windows::Forms::Padding(3);
			this->tabPage_books->Size = System::Drawing::Size(893, 663);
			this->tabPage_books->TabIndex = 1;
			this->tabPage_books->Text = L"          Books          ";
			this->tabPage_books->UseVisualStyleBackColor = true;
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->FixedPanel = System::Windows::Forms::FixedPanel::Panel2;
			this->splitContainer2->IsSplitterFixed = true;
			this->splitContainer2->Location = System::Drawing::Point(3, 3);
			this->splitContainer2->Name = L"splitContainer2";
			this->splitContainer2->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->dataGridView_books);
			this->splitContainer2->Panel1->Controls->Add(this->menuStrip2);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->textBox_genre);
			this->splitContainer2->Panel2->Controls->Add(this->checkBox_genre);
			this->splitContainer2->Panel2->Controls->Add(this->textBox_author);
			this->splitContainer2->Panel2->Controls->Add(this->checkBox_author);
			this->splitContainer2->Panel2->Controls->Add(this->button_sort_genre);
			this->splitContainer2->Panel2->Controls->Add(this->button_sort_author);
			this->splitContainer2->Panel2->Controls->Add(this->button_sort_name_books);
			this->splitContainer2->Panel2->Controls->Add(this->textBox_name_books);
			this->splitContainer2->Panel2->Controls->Add(this->label_return_books);
			this->splitContainer2->Panel2->Controls->Add(this->checkBox_name_books);
			this->splitContainer2->Panel2->Controls->Add(this->label_all_books);
			this->splitContainer2->Panel2->Controls->Add(this->textBox_year_books);
			this->splitContainer2->Panel2->Controls->Add(this->checkBox_only_return_books);
			this->splitContainer2->Panel2->Controls->Add(this->checkBox_year_books);
			this->splitContainer2->Size = System::Drawing::Size(887, 657);
			this->splitContainer2->SplitterDistance = 523;
			this->splitContainer2->TabIndex = 2;
			// 
			// dataGridView_books
			// 
			this->dataGridView_books->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->id_book,
					this->Select, this->isbn, this->name, this->year, this->author_name_first, this->author_name_last, this->genre, this->exist,
					this->UserBook
			});
			this->dataGridView_books->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView_books->Location = System::Drawing::Point(0, 24);
			this->dataGridView_books->Name = L"dataGridView_books";
			this->dataGridView_books->Size = System::Drawing::Size(887, 499);
			this->dataGridView_books->TabIndex = 1;
			this->dataGridView_books->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Main_form::dataGridView_books_CellContentClick);
			this->dataGridView_books->RowsAdded += gcnew System::Windows::Forms::DataGridViewRowsAddedEventHandler(this, &Main_form::dataGridView_books_RowsAdded);
			this->dataGridView_books->RowsRemoved += gcnew System::Windows::Forms::DataGridViewRowsRemovedEventHandler(this, &Main_form::dataGridView_books_RowsRemoved);
			this->dataGridView_books->UserDeletedRow += gcnew System::Windows::Forms::DataGridViewRowEventHandler(this, &Main_form::dataGridView_books_UserDeletedRow);
			// 
			// id_book
			// 
			this->id_book->HeaderText = L"id";
			this->id_book->Name = L"id_book";
			this->id_book->ReadOnly = true;
			this->id_book->Visible = false;
			// 
			// Select
			// 
			this->Select->HeaderText = L"Select";
			this->Select->Name = L"Select";
			this->Select->Visible = false;
			// 
			// isbn
			// 
			this->isbn->HeaderText = L"ISBN";
			this->isbn->Name = L"isbn";
			// 
			// name
			// 
			this->name->HeaderText = L"Name";
			this->name->Name = L"name";
			this->name->Width = 200;
			// 
			// year
			// 
			this->year->HeaderText = L"Year";
			this->year->Name = L"year";
			this->year->Width = 40;
			// 
			// author_name_first
			// 
			this->author_name_first->HeaderText = L"Author first name";
			this->author_name_first->Name = L"author_name_first";
			// 
			// author_name_last
			// 
			this->author_name_last->HeaderText = L"Author last name";
			this->author_name_last->Name = L"author_name_last";
			this->author_name_last->Width = 150;
			// 
			// genre
			// 
			this->genre->HeaderText = L"Genre";
			this->genre->Name = L"genre";
			// 
			// exist
			// 
			this->exist->HeaderText = L"Exist";
			this->exist->Name = L"exist";
			this->exist->ReadOnly = true;
			this->exist->Width = 50;
			// 
			// UserBook
			// 
			this->UserBook->HeaderText = L"User";
			this->UserBook->Name = L"UserBook";
			this->UserBook->Width = 80;
			// 
			// menuStrip2
			// 
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->importToolStripMenuItem1 });
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(887, 24);
			this->menuStrip2->TabIndex = 2;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// importToolStripMenuItem1
			// 
			this->importToolStripMenuItem1->Name = L"importToolStripMenuItem1";
			this->importToolStripMenuItem1->Size = System::Drawing::Size(55, 20);
			this->importToolStripMenuItem1->Text = L"Import";
			this->importToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Main_form::importToolStripMenuItem1_Click);
			// 
			// textBox_genre
			// 
			this->textBox_genre->Location = System::Drawing::Point(13, 91);
			this->textBox_genre->Name = L"textBox_genre";
			this->textBox_genre->Size = System::Drawing::Size(164, 20);
			this->textBox_genre->TabIndex = 24;
			// 
			// checkBox_genre
			// 
			this->checkBox_genre->AutoSize = true;
			this->checkBox_genre->Location = System::Drawing::Point(183, 94);
			this->checkBox_genre->Name = L"checkBox_genre";
			this->checkBox_genre->Size = System::Drawing::Size(90, 17);
			this->checkBox_genre->TabIndex = 25;
			this->checkBox_genre->Text = L"Find by genre";
			this->checkBox_genre->UseVisualStyleBackColor = true;
			this->checkBox_genre->CheckedChanged += gcnew System::EventHandler(this, &Main_form::checkBox_genre_CheckedChanged);
			// 
			// textBox_author
			// 
			this->textBox_author->Location = System::Drawing::Point(13, 65);
			this->textBox_author->Name = L"textBox_author";
			this->textBox_author->Size = System::Drawing::Size(164, 20);
			this->textBox_author->TabIndex = 22;
			// 
			// checkBox_author
			// 
			this->checkBox_author->AutoSize = true;
			this->checkBox_author->Location = System::Drawing::Point(183, 68);
			this->checkBox_author->Name = L"checkBox_author";
			this->checkBox_author->Size = System::Drawing::Size(93, 17);
			this->checkBox_author->TabIndex = 23;
			this->checkBox_author->Text = L"Find by author";
			this->checkBox_author->UseVisualStyleBackColor = true;
			this->checkBox_author->CheckedChanged += gcnew System::EventHandler(this, &Main_form::checkBox_author_CheckedChanged);
			// 
			// button_sort_genre
			// 
			this->button_sort_genre->Location = System::Drawing::Point(351, 71);
			this->button_sort_genre->Name = L"button_sort_genre";
			this->button_sort_genre->Size = System::Drawing::Size(156, 23);
			this->button_sort_genre->TabIndex = 21;
			this->button_sort_genre->Text = L"Sort by genre";
			this->button_sort_genre->UseVisualStyleBackColor = true;
			this->button_sort_genre->Click += gcnew System::EventHandler(this, &Main_form::button_sort_genre_Click);
			// 
			// button_sort_author
			// 
			this->button_sort_author->Location = System::Drawing::Point(351, 42);
			this->button_sort_author->Name = L"button_sort_author";
			this->button_sort_author->Size = System::Drawing::Size(156, 23);
			this->button_sort_author->TabIndex = 20;
			this->button_sort_author->Text = L"Sort by author";
			this->button_sort_author->UseVisualStyleBackColor = true;
			this->button_sort_author->Click += gcnew System::EventHandler(this, &Main_form::button_sort_author_Click);
			// 
			// button_sort_name_books
			// 
			this->button_sort_name_books->Location = System::Drawing::Point(351, 13);
			this->button_sort_name_books->Name = L"button_sort_name_books";
			this->button_sort_name_books->Size = System::Drawing::Size(156, 23);
			this->button_sort_name_books->TabIndex = 19;
			this->button_sort_name_books->Text = L"Sort by name";
			this->button_sort_name_books->UseVisualStyleBackColor = true;
			this->button_sort_name_books->Click += gcnew System::EventHandler(this, &Main_form::button_sort_name_books_Click);
			// 
			// textBox_name_books
			// 
			this->textBox_name_books->Location = System::Drawing::Point(13, 13);
			this->textBox_name_books->Name = L"textBox_name_books";
			this->textBox_name_books->Size = System::Drawing::Size(164, 20);
			this->textBox_name_books->TabIndex = 12;
			// 
			// label_return_books
			// 
			this->label_return_books->AutoSize = true;
			this->label_return_books->Location = System::Drawing::Point(620, 48);
			this->label_return_books->Name = L"label_return_books";
			this->label_return_books->Size = System::Drawing::Size(198, 13);
			this->label_return_books->TabIndex = 18;
			this->label_return_books->Text = L"Books which are not available right now:";
			// 
			// checkBox_name_books
			// 
			this->checkBox_name_books->AutoSize = true;
			this->checkBox_name_books->Location = System::Drawing::Point(183, 16);
			this->checkBox_name_books->Name = L"checkBox_name_books";
			this->checkBox_name_books->Size = System::Drawing::Size(89, 17);
			this->checkBox_name_books->TabIndex = 13;
			this->checkBox_name_books->Text = L"Find by name";
			this->checkBox_name_books->UseVisualStyleBackColor = true;
			this->checkBox_name_books->CheckedChanged += gcnew System::EventHandler(this, &Main_form::checkBox_name_books_CheckedChanged);
			// 
			// label_all_books
			// 
			this->label_all_books->AutoSize = true;
			this->label_all_books->Location = System::Drawing::Point(620, 22);
			this->label_all_books->Name = L"label_all_books";
			this->label_all_books->Size = System::Drawing::Size(53, 13);
			this->label_all_books->TabIndex = 17;
			this->label_all_books->Text = L"All books:";
			// 
			// textBox_year_books
			// 
			this->textBox_year_books->Location = System::Drawing::Point(13, 39);
			this->textBox_year_books->Name = L"textBox_year_books";
			this->textBox_year_books->Size = System::Drawing::Size(164, 20);
			this->textBox_year_books->TabIndex = 14;
			// 
			// checkBox_only_return_books
			// 
			this->checkBox_only_return_books->AutoSize = true;
			this->checkBox_only_return_books->Location = System::Drawing::Point(623, 94);
			this->checkBox_only_return_books->Name = L"checkBox_only_return_books";
			this->checkBox_only_return_books->Size = System::Drawing::Size(243, 17);
			this->checkBox_only_return_books->TabIndex = 16;
			this->checkBox_only_return_books->Text = L"Show books which are not available right now";
			this->checkBox_only_return_books->UseVisualStyleBackColor = true;
			this->checkBox_only_return_books->CheckedChanged += gcnew System::EventHandler(this, &Main_form::checkBox_only_return_books_CheckedChanged);
			// 
			// checkBox_year_books
			// 
			this->checkBox_year_books->AutoSize = true;
			this->checkBox_year_books->Location = System::Drawing::Point(183, 42);
			this->checkBox_year_books->Name = L"checkBox_year_books";
			this->checkBox_year_books->Size = System::Drawing::Size(86, 17);
			this->checkBox_year_books->TabIndex = 15;
			this->checkBox_year_books->Text = L"Find by  year";
			this->checkBox_year_books->UseVisualStyleBackColor = true;
			this->checkBox_year_books->CheckedChanged += gcnew System::EventHandler(this, &Main_form::checkBox_year_books_CheckedChanged);
			// 
			// Main_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(901, 721);
			this->Controls->Add(this->tabControl1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Main_form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Library";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Main_form::Main_form_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Main_form::Main_form_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_users))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage_users->ResumeLayout(false);
			this->tabPage_users->PerformLayout();
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabPage_books->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel1->PerformLayout();
			this->splitContainer2->Panel2->ResumeLayout(false);
			this->splitContainer2->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_books))->EndInit();
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		System::Void Main_form_Load(System::Object ^ sender, System::EventArgs ^ e)
		{

			//User user;
			//strcpy_s(user.name_first, "Sandy");
			//User *b = new User[5];

			// this->dataGridView_users->DataSource = &b;
			// this->dataGridView_users->Rows->Add();

			std::vector<Item> items = {};
			int n = load_data_items(items);
			items_all = items;

			std::vector<User> users = {};
			n = load_data_users(users);
			users_all = users;

			// UserHelper::test_add_items(users);
			UserHelper::set_data_table_users(users, this->dataGridView_users);

			std::vector<Book> books = {};
			n = load_data_books(books);
			// UserHelper::test_add_items(users);
			books_all = books;
			//have_books
			BookHelper::set_data_table_books(books, this->dataGridView_books);

			// filter_active = false;

			//String^ txt = gcnew String(user.name_first);
			//this->dataGridView_users->Rows[0]->Cells[0]->Value = txt;

			//AllocConsole();
			//Console::WriteLine(gcnew String(user.name_first.c_str()));
		}

	private:
		System::Void checkBox_name_user_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e)
		{
			this->textBox_name_user->Enabled = !checkBox_name_user->Checked;
			update_users();
			update_filter_users_active();
			std::vector<User> users1 = {};
			if (filter_active_users && users_filter.size() > 0)
			{
				users1 = users_filter;
			}
			else
			{
				users1 = users_all;
				users_filter = users_all;
			}
			if (checkBox_name_user->Checked)
			{
				std::string name_user = msclr::interop::marshal_as<std::string>(this->textBox_name_user->Text);
				std::vector<User> users2 = {};
				for (int i = 0; i < (int)users1.size(); i++)
				{
					User user = users1[i];
					std::string name_first(user.name_first);
					std::string name_last(user.name_last);
					if (name_first.find(name_user) != std::string::npos || name_last.find(name_user) != std::string::npos)
					{
						users2.push_back(user);
					}
				}
				users_filter = users2;
				UserHelper::set_data_table_users(users2, this->dataGridView_users);
			}
			else
			{
				UserHelper::set_data_table_users(users1, this->dataGridView_users);
			}
		}

	private:
		System::Void checkBox_age_user_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e)
		{
			this->textBox_age_user->Enabled = !checkBox_age_user->Checked;
			update_users();
			update_filter_users_active();
			std::vector<User> users1 = {};
			if (filter_active_users && users_filter.size() > 0)
			{
				users1 = users_filter;
			}
			else
			{
				users1 = users_all;
				users_filter = users_all;
			}
			if (checkBox_age_user->Checked)
			{
				std::string age_user = msclr::interop::marshal_as<std::string>(this->textBox_age_user->Text);
				std::vector<User> users2 = {};
				for (int i = 0; i < (int)users1.size(); i++)
				{
					User user = users1[i];
					if (age_user == std::to_string(user.age))
					{
						users2.push_back(user);
					}
				}
				users_filter = users2;
				UserHelper::set_data_table_users(users2, this->dataGridView_users);
			}
			else
			{
				UserHelper::set_data_table_users(users1, this->dataGridView_users);
			}
		}

	private:
		System::Void checkBox_address_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e)
		{
			this->textBox_address->Enabled = !checkBox_address->Checked;
			update_users();
			update_filter_users_active();
			std::vector<User> users1 = {};
			if (filter_active_users && users_filter.size() > 0)
			{
				users1 = users_filter;
			}
			else
			{
				users1 = users_all;
				users_filter = users_all;
			}
			if (checkBox_address->Checked)
			{
				std::string address_user = msclr::interop::marshal_as<std::string>(this->textBox_address->Text);
				std::vector<User> users2 = {};
				for (int i = 0; i < (int)users1.size(); i++)
				{
					User user = users1[i];
					std::string address(user.address);
					if (address.find(address_user) != std::string::npos)
					{
						users2.push_back(user);
					}
				}
				users_filter = users2;
				UserHelper::set_data_table_users(users2, dataGridView_users);
			}
			else
			{
				UserHelper::set_data_table_users(users1, dataGridView_users);
			}
		}

	private:
		System::Void dataGridView_users_RowsAdded(System::Object ^ sender, System::Windows::Forms::DataGridViewRowsAddedEventArgs ^ e)
		{
			// update_users();
			this->update_count_users();
		}

	private:
		System::Void dataGridView_users_RowsRemoved(System::Object ^ sender, System::Windows::Forms::DataGridViewRowsRemovedEventArgs ^ e)
		{
			this->update_count_users();
		}

	private:
		System::Void Main_form_FormClosing(System::Object ^ sender, System::Windows::Forms::FormClosingEventArgs ^ e)
		{
			bool res = save_data_users() && save_data_books() && save_data_items();
			if (!res)
			{
				if (MessageBox::Show("Error when saving. Data is not saved. To close the application?", "Library", MessageBoxButtons::YesNo) != System::Windows::Forms::DialogResult::Yes)
				{
					e->Cancel = true;
					return;
				}
			}
			users_all.clear();
			books_all.clear();
			items_all.clear();
			GC::Collect();
		}

	private:
		System::Void button_sort_address_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			sort_users(User::sort_type::byAddress);
		}

	private:
		System::Void button_sort_age_user_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			sort_users(User::sort_type::byAge);
		}

	private:
		System::Void checkBox_only_return_user_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e)
		{
			// have_books
			update_users();
			update_filter_users_active();
			std::vector<User> users1 = {};
			if (filter_active_users && users_filter.size() > 0)
			{
				users1 = users_filter;
			}
			else
			{
				users1 = users_all;
				users_filter = users_all;
			}
			if (checkBox_only_return_user->Checked)
			{
				UserHelper::set_have_books(users1, items_all);
				std::vector<User> users2 = {};
				for (int i = 0; i < (int)users1.size(); i++)
				{
					User user = users1[i];
					if (user.have_books == true)
					{
						users2.push_back(user);
					}
				}
				users_filter = users2;
				UserHelper::set_data_table_users(users2, this->dataGridView_users);
			}
			else
			{
				UserHelper::set_data_table_users(users1, this->dataGridView_users);
			}
		}

	private:
		System::Void dataGridView_users_UserDeletedRow(System::Object ^ sender, System::Windows::Forms::DataGridViewRowEventArgs ^ e)
		{
			// e->RowIndex;
			int id = 0;
			System::String ^ managed = e->Row->Cells[0]->Value->ToString();
			std::string idDb = msclr::interop::marshal_as<std::string>(managed);
			if (!idDb.empty())
			{
				id = std::stoi(idDb);
			}
			if (filter_active_users)
			{
				UserHelper::remove_item(users_filter, id);
				UserHelper::remove_item(users_all, id);
			}
			else
			{
				UserHelper::remove_item(users_all, id);
			}
		}

	private:
		System::Void dataGridView_users_CellContentClick(System::Object ^ sender, System::Windows::Forms::DataGridViewCellEventArgs ^ e)
		{
			if (e->RowIndex >= 0 && e->ColumnIndex == 6)
			{
				System::String ^ managed = dataGridView_users->Rows[e->RowIndex]->Cells[0]->Value->ToString();
				std::string idDb = msclr::interop::marshal_as<std::string>(managed);
				int id = 0;
				if (!idDb.empty())
				{
					id = std::stoi(idDb);
					User user = UserHelper::get_user(id, users_all);
					if (user.id > 0)
					{
						update_users();
						//selected_user = new User[1];
						//selected_user[0] = user;
						Library_card ^ form = gcnew Library_card(&user, &books_all, &items_all);
						form->ShowDialog();
						BookHelper::set_exists(books_all, items_all);
						BookHelper::set_data_table_books(books_all, this->dataGridView_books);
						update_count_users();
						update_count_books();
					}
				}
				//const char *txt = idDb.c_str();
				//write_console(txt);
			}
		}

		void update_filter_users_active()
		{
			filter_active_users = (checkBox_name_user->Checked || checkBox_age_user->Checked || checkBox_address->Checked || checkBox_only_return_user->Checked);
		}

	private:
		bool save_data_users()
		{
			// long count = this->dataGridView_users->RowCount - 1;
			// User *users = new User[count];
			// get_data_table(users, count);
			update_users();
			User *users = new User[users_all.size()];
			for (int i = 0; i < (int)users_all.size(); i++)
			{
				users[i] = users_all[i];
			}
			FILE *fp = fopen("users.dat", "wb");
			if (fp)
			{
				//fseek(fp, 0, SEEK_END);
				fwrite(users, sizeof(User), users_all.size(), fp);
				fclose(fp);
				return true;
			}
			return false;
		}

	private:
		bool save_data_books()
		{
			update_books();
			Book *books = new Book[books_all.size()];
			for (int i = 0; i < (int)books_all.size(); i++)
			{
				books[i] = books_all[i];
			}
			FILE *fp = fopen("books.dat", "wb");
			if (fp)
			{
				fwrite(books, sizeof(Book), books_all.size(), fp);
				fclose(fp);
				return true;
			}
			return false;
		}

	private:
		bool save_data_items()
		{
			Item *items = new Item[items_all.size()];
			for (int i = 0; i < (int)items_all.size(); i++)
			{
				items[i] = items_all[i];
			}
			FILE *fp = fopen("items.dat", "wb");
			if (fp)
			{
				fwrite(items, sizeof(Item), items_all.size(), fp);
				fclose(fp);
				return true;
			}
			return false;
		}

	private:
		int load_data_users(std::vector<User> &users)
		{
			long n = 0;
			FILE *fp = fopen("users.dat", "rb");
			if (fp)
			{
				fseek(fp, 0, SEEK_END);
				int size = ftell(fp);
				n = size / sizeof(User);
				// std::vector<User> vec;
				// users = std::vector<User>();
				rewind(fp);
				User temp;
				while (fread((User *)&temp, sizeof(User), 1, fp))
				{
					users.push_back(temp);
				};
				// fread(users, sizeof(User), n, fp);
				fclose(fp);
			}
			return n;
		}
	private:
		int load_data_books(std::vector<Book> &books)
		{
			long n = 0;
			FILE *fp = fopen("books.dat", "rb");
			if (fp)
			{
				fseek(fp, 0, SEEK_END);
				int size = ftell(fp);
				n = size / sizeof(Book);
				// std::vector<User> vec;
				// users = std::vector<User>();
				rewind(fp);
				Book temp;
				while (fread((Book *)&temp, sizeof(Book), 1, fp))
				{
					books.push_back(temp);
				};
				// fread(users, sizeof(User), n, fp);
				fclose(fp);
			}
			return n;
		}
	private:
		int load_data_items(std::vector<Item> &items)
		{
			long n = 0;
			FILE *fp = fopen("items.dat", "rb");
			if (fp)
			{
				fseek(fp, 0, SEEK_END);
				int size = ftell(fp);
				n = size / sizeof(Item);
				// std::vector<User> vec;
				// users = std::vector<User>();
				rewind(fp);
				Item temp;
				while (fread((Item *)&temp, sizeof(Item), 1, fp))
				{
					items.push_back(temp);
				};
				// fread(users, sizeof(User), n, fp);
				fclose(fp);
			}
			return n;
		}

	private:
		System::Void write_console(const char *txt)
		{
			LPCSTR pcstr = txt;
			OutputDebugStringA(pcstr);
			OutputDebugStringW(L"\n");
		}

	private:
		System::Void button_sort_name_user_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			sort_users(User::sort_type::byName);
		}

	private:
		System::Void sort_users(User::sort_type sort)
		{
			long count = this->dataGridView_users->RowCount - 1;
			User *users = new User[count];
			UserHelper::get_data_table_users(users, count, this->dataGridView_users);
			std::vector<User> users2 = {};
			for (int i = 0; i < count; i++)
			{
				User user = users[i];
				users2.push_back(user);
			}
			UserHelper::bubble_sort_users(users2, sort);
			UserHelper::set_data_table_users(users2, this->dataGridView_users);
		}

		void update_users()
		{
			long count = this->dataGridView_users->RowCount - 1;
			User *users = new User[count];
			UserHelper::get_data_table_users(users, count, this->dataGridView_users);
			for (int i = 0; i < count; i++)
			{
				User user = users[i];
				bool found = false;
				if (user.id > 0)
				{
					for (int j = 0; j < (int)users_all.size(); j++)
					{
						if (user.id == users_all[j].id)
						{
							users_all[j] = user;
							found = true;
							break;
						}
					}
				}
				if (!found)
				{
					users_all.push_back(user);
					//write_console("Add ");
					//write_console(user.name_first);
				}
			}
			update_count_users();
			update_count_books();
			// write_console("stop");
			// process_row_remove();
		}
		void update_books()
		{
			long count = this->dataGridView_books->RowCount - 1;
			Book *books = new Book[count];
			BookHelper::get_data_table_books(books, count, this->dataGridView_books);
			for (int i = 0; i < count; i++)
			{
				Book book = books[i];
				bool found = false;
				if (book.id > 0)
				{
					for (int j = 0; j < (int)books_all.size(); j++)
					{
						if (book.id == books_all[j].id)
						{
							books_all[j] = book;
							found = true;
							break;
						}
					}
				}
				if (!found)
				{
					books_all.push_back(book);
				}
			}
		}

	private:
		System::Void update_count_users()
		{
			label_all_users->Text = "All users: " + Convert::ToString(dataGridView_users->RowCount - 1);
			std::vector<User> users1 = {};
			if (filter_active_users && users_filter.size() > 0)
			{
				users1 = users_filter;
			}
			else
			{
				users1 = users_all;
			}
			UserHelper::set_have_books(users1, items_all);
			int count2 = 0;
			for (int i = 0; i < (int)users1.size(); i++)
			{
				User user = users1[i];
				if (user.have_books == true)
				{
					count2++;
				}
			}
			label_return_users->Text = "Users who didn't return books to the library: " + Convert::ToString(count2);
		}

	private: System::Void checkBox_name_books_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		this->textBox_name_books->Enabled = !checkBox_name_books->Checked;
		update_books();
		update_filter_books_active();
		std::vector<Book> books1 = {};
		if (filter_active_books && books_filter.size() > 0)
		{
			books1 = books_filter;
		}
		else
		{
			books1 = books_all;
			books_filter = books_all;
		}
		if (checkBox_name_books->Checked)
		{
			std::string name_book = msclr::interop::marshal_as<std::string>(this->textBox_name_books->Text);
			std::vector<Book> books2 = {};
			for (int i = 0; i < (int)books1.size(); i++)
			{
				Book book = books1[i];
				std::string name(book.name);
				if (name.find(name_book) != std::string::npos)
				{
					books2.push_back(book);
				}
			}
			books_filter = books2;
			BookHelper::set_data_table_books(books2, this->dataGridView_books);
		}
		else
		{
			BookHelper::set_data_table_books(books1, this->dataGridView_books);
		}
	}
	private: System::Void checkBox_year_books_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		this->textBox_year_books->Enabled = !checkBox_year_books->Checked;
		update_books();
		update_filter_books_active();
		std::vector<Book> books1 = {};
		if (filter_active_books && books_filter.size() > 0)
		{
			books1 = books_filter;
		}
		else
		{
			books1 = books_all;
			books_filter = books_all;
		}
		if (checkBox_year_books->Checked)
		{
			std::string year_books = msclr::interop::marshal_as<std::string>(this->textBox_year_books->Text);
			std::vector<Book> books2 = {};
			for (int i = 0; i < (int)books1.size(); i++)
			{
				Book book = books1[i];
				if (year_books == std::to_string(book.year))
				{
					books2.push_back(book);
				}
			}
			books_filter = books2;
			BookHelper::set_data_table_books(books2, this->dataGridView_books);
		}
		else
		{
			BookHelper::set_data_table_books(books1, this->dataGridView_books);
		}
	}
	private: System::Void checkBox_author_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		this->textBox_author->Enabled = !checkBox_author->Checked;
		update_books();
		update_filter_books_active();
		std::vector<Book> books1 = {};
		if (filter_active_books && books_filter.size() > 0)
		{
			books1 = books_filter;
		}
		else
		{
			books1 = books_all;
			books_filter = books_all;
		}
		if (checkBox_author->Checked)
		{
			std::string author_book = msclr::interop::marshal_as<std::string>(this->textBox_author->Text);
			std::vector<Book> books2 = {};
			for (int i = 0; i < (int)books1.size(); i++)
			{
				Book book = books1[i];
				std::string author_name_first(book.author_name_first);
				std::string author_name_last(book.author_name_last);
				if (author_name_first.find(author_book) != std::string::npos || author_name_last.find(author_book) != std::string::npos)
				{
					books2.push_back(book);
				}
			}
			books_filter = books2;
			BookHelper::set_data_table_books(books2, this->dataGridView_books);
		}
		else
		{
			BookHelper::set_data_table_books(books1, this->dataGridView_books);
		}
	}
	private: System::Void checkBox_genre_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		this->textBox_genre->Enabled = !checkBox_genre->Checked;
		update_books();
		update_filter_books_active();
		std::vector<Book> books1 = {};
		if (filter_active_books && books_filter.size() > 0)
		{
			books1 = books_filter;
		}
		else
		{
			books1 = books_all;
			books_filter = books_all;
		}
		if (checkBox_genre->Checked)
		{
			std::string genre_book = msclr::interop::marshal_as<std::string>(this->textBox_genre->Text);
			std::vector<Book> books2 = {};
			for (int i = 0; i < (int)books1.size(); i++)
			{
				Book book = books1[i];
				std::string genre(book.genre);
				if (genre.find(genre_book) != std::string::npos)
				{
					books2.push_back(book);
				}
			}
			books_filter = books2;
			BookHelper::set_data_table_books(books2, this->dataGridView_books);
		}
		else
		{
			BookHelper::set_data_table_books(books1, this->dataGridView_books);
		}
	}
	private: System::Void button_sort_name_books_Click(System::Object^  sender, System::EventArgs^  e) {
		sort_books(Book::sort_type::byName);
	}
	private: System::Void button_sort_author_Click(System::Object^  sender, System::EventArgs^  e) {
		sort_books(Book::sort_type::byAuthor);
	}
	private: System::Void button_sort_genre_Click(System::Object^  sender, System::EventArgs^  e) {
		sort_books(Book::sort_type::byGenre);
	}
	private: System::Void checkBox_only_return_books_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		update_books();
		update_filter_books_active();
		std::vector<Book> books1 = {};
		if (filter_active_books && books_filter.size() > 0)
		{
			books1 = books_filter;
		}
		else
		{
			books1 = books_all;
			books_filter = books_all;
		}
		if (checkBox_only_return_books->Checked)
		{
			std::vector<Book> books2 = {};
			for (int i = 0; i < (int)books1.size(); i++)
			{
				Book book = books1[i];
				if (book.exist == false)
				{
					books2.push_back(book);
				}
			}
			books_filter = books2;
			BookHelper::set_data_table_books(books2, this->dataGridView_books);
		}
		else
		{
			BookHelper::set_data_table_books(books1, this->dataGridView_books);
		}
	}

	private:
		void update_filter_books_active()
		{
			filter_active_books = (checkBox_name_books->Checked || checkBox_author->Checked || checkBox_year_books->Checked
				|| checkBox_genre->Checked || checkBox_only_return_books->Checked);
		}

	private:
		System::Void sort_books(Book::sort_type sort)
		{
			long count = this->dataGridView_users->RowCount - 1;
			Book *books = new Book[count];
			BookHelper::get_data_table_books(books, count, this->dataGridView_books);
			std::vector<Book> books2 = {};
			for (int i = 0; i < count; i++)
			{
				Book user = books[i];
				books2.push_back(user);
			}
			BookHelper::bubble_sort_users(books2, sort);
			BookHelper::set_data_table_books(books2, this->dataGridView_books);
		}

	private: System::Void dataGridView_users_DoubleClick(System::Object^  sender, System::EventArgs^  e) {

	}

	private: System::Void dataGridView_users_CellDoubleClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}

	private: System::Void importToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		// https://www.briandunning.com/sample-data/
		OpenFileDialog ^ openFileDialog1 = gcnew OpenFileDialog();
		openFileDialog1->Filter = "CSV files (*.csv)|*.csv|All files (*.*)|*.*";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			std::vector<std::string> items;
			std::string filename = msclr::interop::marshal_as<std::string>(openFileDialog1->FileName);
			MainHelper::load_file(items, filename);
			if (items.size() > 0)
			{
				int end = UserHelper::get_last_id(users_all);
				for (int i = 0; i < (int)items.size(); i++)
				{
					std::string item = items[i];
					std::vector<std::string> x = MainHelper::split(item, ",");
					if (x.size() >= 4)
					{
						if (x[0] != "first_name")
						{
							User user;
							end++;
							user.id = end;
							strcpy_s(user.name_first, x[0].c_str());
							strcpy_s(user.name_last, x[1].c_str());
							strcpy_s(user.address, x[2].c_str());
							std::string age = x[3].c_str();
							if (!age.empty())
							{
								user.age = std::stoi(age);
							}
							users_all.push_back(user);
						}
					}
				}
				UserHelper::set_data_table_users(users_all, this->dataGridView_users);
			}
		}
	}

			 // http://gtmarket.ru/ratings/newsweeks-top-100-books/newsweeks-top-100-books-info


	private: System::Void importToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		OpenFileDialog ^ openFileDialog1 = gcnew OpenFileDialog();
		openFileDialog1->Filter = "CSV files (*.csv)|*.csv|All files (*.*)|*.*";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			std::vector<std::string> items;
			std::string filename = msclr::interop::marshal_as<std::string>(openFileDialog1->FileName);
			MainHelper::load_file(items, filename);
			if (items.size() > 0)
			{
				int end = BookHelper::get_last_id(books_all);
				for (int i = 0; i < (int)items.size(); i++)
				{
					std::string item = items[i];
					std::vector<std::string> x = MainHelper::split(item, ",");
					if (x.size() >= 3)
					{
						if (x[0] != "author")
						{
							Book book;
							end++;
							book.id = end;
							strcpy_s(book.author_name_first, x[0].c_str());
							strcpy_s(book.author_name_last, "");
							strcpy_s(book.genre, "");
							strcpy_s(book.name, x[1].c_str());
							book.year = 0;
							book.exist = false;
							std::string year = x[2].c_str();
							if (!year.empty())
							{
								try
								{
									book.year = std::stoi(year);
								}
								catch (const std::exception&)
								{
								}
							}
							books_all.push_back(book);
						}
					}
				}
				BookHelper::set_data_table_books(books_all, dataGridView_books);
			}
		}
	}
	private: System::Void dataGridView_books_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		if (e->RowIndex >= 0 && e->ColumnIndex == 9)
		{
			System::String ^ managed = dataGridView_books->Rows[e->RowIndex]->Cells[0]->Value->ToString();
			std::string idDb = msclr::interop::marshal_as<std::string>(managed);
			int id = 0;
			if (!idDb.empty())
			{
				id = std::stoi(idDb);
				Item item = ItemHelper::get_item_from_book(id, items_all);
				if (item.id_user > 0)
				{
					User user = UserHelper::get_user(item.id_user, users_all);
					if (user.id > 0)
					{
						update_books();
						Library_card ^ form = gcnew Library_card(&user, &books_all, &items_all);
						form->ShowDialog();
						BookHelper::set_exists(books_all, items_all);
						BookHelper::set_data_table_books(books_all, this->dataGridView_books);
						update_count_users();
						update_count_books();
					}
				}
			}
		}
	}
	private: System::Void dataGridView_books_RowsAdded(System::Object^  sender, System::Windows::Forms::DataGridViewRowsAddedEventArgs^  e) {
		update_count_books();
	}
	private: System::Void dataGridView_books_RowsRemoved(System::Object^  sender, System::Windows::Forms::DataGridViewRowsRemovedEventArgs^  e) {
		update_count_books();
	}

	private:
		System::Void update_count_books()
		{
			label_all_books->Text = "All books: " + Convert::ToString(dataGridView_books->RowCount - 1);
			std::vector<Book> books1 = {};
			if (filter_active_books && books_filter.size() > 0)
			{
				books1 = books_filter;
			}
			else
			{
				books1 = books_all;
			}
			BookHelper::set_exists(books1, items_all);
			int count2 = 0;
			for (int i = 0; i < (int)books1.size(); i++)
			{
				Book book = books1[i];
				if (book.exist == false)
				{
					count2++;
				}
			}
			label_return_books->Text = "Books which are not available right now: " + Convert::ToString(count2);
		}


	private: System::Void dataGridView_books_UserDeletedRow(System::Object^  sender, System::Windows::Forms::DataGridViewRowEventArgs^  e) {
		int id = 0;
		System::String ^ managed = e->Row->Cells[0]->Value->ToString();
		std::string idDb = msclr::interop::marshal_as<std::string>(managed);
		if (!idDb.empty())
		{
			id = std::stoi(idDb);
		}
		if (filter_active_books)
		{
			BookHelper::remove_item(books_filter, id);
			BookHelper::remove_item(books_all, id);
		}
		else
		{
			BookHelper::remove_item(books_all, id);
		}
	}
};
}
