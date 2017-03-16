#pragma once
#include "User.h"
#include "Book.h"
#include "Item.h"
#include "BookHelper.h"
#include <vector>
#include "MainHelper.h"
#include <iostream>
#include <ctime>
#include "ItemHelper.h"
#include "Singleton.h"

namespace Library {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Select_book
	/// </summary>
	public ref class Select_book : public System::Windows::Forms::Form
	{
	public:
		Select_book(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	public:
		Select_book(User *user)
		{
			InitializeComponent();
			selected_user = user;
		}

	public:
		User *selected_user;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  id_book;
	public:
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^  Select;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  isbn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  year;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  author_name_first;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  author_name_last;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  genre;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^  exist;

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Select_book()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView_books;
	protected:








	private: System::Windows::Forms::Button^  button_close;
	private: System::Windows::Forms::Button^  button_add_book;










	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView_books = (gcnew System::Windows::Forms::DataGridView());
			this->button_close = (gcnew System::Windows::Forms::Button());
			this->button_add_book = (gcnew System::Windows::Forms::Button());
			this->id_book = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Select = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->isbn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->year = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->author_name_first = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->author_name_last = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->genre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->exist = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_books))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView_books
			// 
			this->dataGridView_books->AllowUserToAddRows = false;
			this->dataGridView_books->AllowUserToDeleteRows = false;
			this->dataGridView_books->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->id_book,
					this->Select, this->isbn, this->name, this->year, this->author_name_first, this->author_name_last, this->genre, this->exist
			});
			this->dataGridView_books->Location = System::Drawing::Point(2, 4);
			this->dataGridView_books->Name = L"dataGridView_books";
			this->dataGridView_books->Size = System::Drawing::Size(896, 431);
			this->dataGridView_books->TabIndex = 3;
			// 
			// button_close
			// 
			this->button_close->Location = System::Drawing::Point(733, 452);
			this->button_close->Name = L"button_close";
			this->button_close->Size = System::Drawing::Size(156, 23);
			this->button_close->TabIndex = 24;
			this->button_close->Text = L"Close";
			this->button_close->UseVisualStyleBackColor = true;
			this->button_close->Click += gcnew System::EventHandler(this, &Select_book::button_close_Click);
			// 
			// button_add_book
			// 
			this->button_add_book->Location = System::Drawing::Point(12, 452);
			this->button_add_book->Name = L"button_add_book";
			this->button_add_book->Size = System::Drawing::Size(156, 23);
			this->button_add_book->TabIndex = 23;
			this->button_add_book->Text = L"Add book";
			this->button_add_book->UseVisualStyleBackColor = true;
			this->button_add_book->Click += gcnew System::EventHandler(this, &Select_book::button_add_book_Click);
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
			this->Select->Width = 50;
			// 
			// isbn
			// 
			this->isbn->HeaderText = L"ISBN";
			this->isbn->Name = L"isbn";
			this->isbn->ReadOnly = true;
			// 
			// name
			// 
			this->name->HeaderText = L"Name";
			this->name->Name = L"name";
			this->name->ReadOnly = true;
			this->name->Width = 200;
			// 
			// year
			// 
			this->year->HeaderText = L"Year";
			this->year->Name = L"year";
			this->year->ReadOnly = true;
			// 
			// author_name_first
			// 
			this->author_name_first->HeaderText = L"Author first name";
			this->author_name_first->Name = L"author_name_first";
			this->author_name_first->ReadOnly = true;
			// 
			// author_name_last
			// 
			this->author_name_last->HeaderText = L"Author last name";
			this->author_name_last->Name = L"author_name_last";
			this->author_name_last->ReadOnly = true;
			this->author_name_last->Width = 150;
			// 
			// genre
			// 
			this->genre->HeaderText = L"Genre";
			this->genre->Name = L"genre";
			this->genre->ReadOnly = true;
			// 
			// exist
			// 
			this->exist->HeaderText = L"Exist";
			this->exist->Name = L"exist";
			this->exist->ReadOnly = true;
			this->exist->Visible = false;
			this->exist->Width = 50;
			// 
			// Select_book
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(901, 487);
			this->Controls->Add(this->button_close);
			this->Controls->Add(this->button_add_book);
			this->Controls->Add(this->dataGridView_books);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Select_book";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Select book";
			this->Load += gcnew System::EventHandler(this, &Select_book::Select_book_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_books))->EndInit();
			this->ResumeLayout(false);

		}

#pragma endregion
	private: System::Void Select_book_Load(System::Object^  sender, System::EventArgs^  e) {
		std::vector<Book> books;
		for (int i = 0; i < (int)Singleton::Instance().books_all.size(); i++)
		{
			Book book = Singleton::Instance().books_all[i];
			if (book.exist)
			{
				books.push_back(book);
			}
		}
		BookHelper::set_data_table_books(books, this->dataGridView_books);
	}
	private: System::Void button_close_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void button_add_book_Click(System::Object^  sender, System::EventArgs^  e) {
		long count = this->dataGridView_books->RowCount;
		Book *books = new Book[count];
		int last = ItemHelper::get_last_id(Singleton::Instance().items_all);
		for (int i = 0; i < count; i++)
		{
			int local_id = 0;
			std::string idDb = MainHelper::get_table_field(this->dataGridView_books, i, 0);
			if (!idDb.empty())
			{
				local_id = std::stoi(idDb);
			}
			if (local_id > 0)
			{
				std::string select = MainHelper::get_table_field(this->dataGridView_books, i, 1).c_str();
				if (select == "True")
				{
					Item item = Item();
					time_t result = time(NULL);
					item.date_start = (long)result;
					item.id_book = local_id;
					item.id_user = selected_user->id;
					last++;
					item.id = last;
					Singleton::Instance().items_all.push_back(item);
				}
			}
		}
		this->Close();
	}


	};
}
