#pragma once
// #include "Main_form.h"
#include "User.h"
#include "Book.h"
#include "Item.h"
#include "BookHelper.h"
#include <vector>
#include "Select_book.h"
#include "BookExt.h"


namespace Library {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	// User selected_user;
	// std::vector<User> books_selected;

	/// <summary>
	/// —водка дл€ LibraryCard
	/// </summary>
	public ref class Library_card : public System::Windows::Forms::Form
	{
	public:
		Library_card(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	public:
		Library_card(User *user, std::vector<Book> *books, std::vector<Item> *items)
		{
			InitializeComponent();
			selected_user = user;
			books_all = books;
			items_all = items;
		}

	public:
		User *selected_user;
	public:
		std::vector<Book> *books_all;
	public:
		std::vector<BookExt> *books_user;
	public:
		std::vector<Item> *items_all;

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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  date_start;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  date_end;

	public:

	public:

	public:

	public:

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Library_card()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView_books;
	protected:








	private: System::Windows::Forms::Button^  button_add_book;
	private: System::Windows::Forms::Label^  label_all_books;
	private: System::Windows::Forms::Button^  button_close;
	private: System::Windows::Forms::Label^  label_user_name;



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
			this->button_add_book = (gcnew System::Windows::Forms::Button());
			this->label_all_books = (gcnew System::Windows::Forms::Label());
			this->button_close = (gcnew System::Windows::Forms::Button());
			this->label_user_name = (gcnew System::Windows::Forms::Label());
			this->id_book = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Select = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->isbn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->year = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->author_name_first = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->author_name_last = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->genre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->exist = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->date_start = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->date_end = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_books))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView_books
			// 
			this->dataGridView_books->AllowUserToAddRows = false;
			this->dataGridView_books->AllowUserToDeleteRows = false;
			this->dataGridView_books->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->id_book,
					this->Select, this->isbn, this->name, this->year, this->author_name_first, this->author_name_last, this->genre, this->exist,
					this->date_start, this->date_end
			});
			this->dataGridView_books->Location = System::Drawing::Point(3, 64);
			this->dataGridView_books->Name = L"dataGridView_books";
			this->dataGridView_books->Size = System::Drawing::Size(896, 371);
			this->dataGridView_books->TabIndex = 2;
			// 
			// button_add_book
			// 
			this->button_add_book->Location = System::Drawing::Point(12, 452);
			this->button_add_book->Name = L"button_add_book";
			this->button_add_book->Size = System::Drawing::Size(156, 23);
			this->button_add_book->TabIndex = 20;
			this->button_add_book->Text = L"Add book";
			this->button_add_book->UseVisualStyleBackColor = true;
			this->button_add_book->Click += gcnew System::EventHandler(this, &Library_card::button_add_book_Click);
			// 
			// label_all_books
			// 
			this->label_all_books->AutoSize = true;
			this->label_all_books->Location = System::Drawing::Point(270, 457);
			this->label_all_books->Name = L"label_all_books";
			this->label_all_books->Size = System::Drawing::Size(53, 13);
			this->label_all_books->TabIndex = 21;
			this->label_all_books->Text = L"All books:";
			// 
			// button_close
			// 
			this->button_close->Location = System::Drawing::Point(733, 452);
			this->button_close->Name = L"button_close";
			this->button_close->Size = System::Drawing::Size(156, 23);
			this->button_close->TabIndex = 22;
			this->button_close->Text = L"Close";
			this->button_close->UseVisualStyleBackColor = true;
			this->button_close->Click += gcnew System::EventHandler(this, &Library_card::button_close_Click);
			// 
			// label_user_name
			// 
			this->label_user_name->AutoSize = true;
			this->label_user_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_user_name->Location = System::Drawing::Point(29, 19);
			this->label_user_name->Name = L"label_user_name";
			this->label_user_name->Size = System::Drawing::Size(142, 29);
			this->label_user_name->TabIndex = 23;
			this->label_user_name->Text = L"User name: ";
			// 
			// id_book
			// 
			this->id_book->HeaderText = L"id";
			this->id_book->Name = L"id_book";
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
			this->isbn->ReadOnly = true;
			this->isbn->Width = 80;
			// 
			// name
			// 
			this->name->HeaderText = L"Name";
			this->name->Name = L"name";
			this->name->ReadOnly = true;
			this->name->Width = 150;
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
			// 
			// genre
			// 
			this->genre->HeaderText = L"Genre";
			this->genre->Name = L"genre";
			this->genre->ReadOnly = true;
			this->genre->Width = 90;
			// 
			// exist
			// 
			this->exist->HeaderText = L"Returned";
			this->exist->Name = L"exist";
			this->exist->Width = 70;
			// 
			// date_start
			// 
			this->date_start->HeaderText = L"Date start";
			this->date_start->Name = L"date_start";
			this->date_start->Width = 80;
			// 
			// date_end
			// 
			this->date_end->HeaderText = L"Date end";
			this->date_end->Name = L"date_end";
			this->date_end->Width = 80;
			// 
			// Library_card
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(901, 487);
			this->Controls->Add(this->label_user_name);
			this->Controls->Add(this->button_close);
			this->Controls->Add(this->label_all_books);
			this->Controls->Add(this->button_add_book);
			this->Controls->Add(this->dataGridView_books);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Library_card";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Library card";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Library_card::Library_card_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Library_card::Library_card_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_books))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion
	private: System::Void Library_card_Load(System::Object^  sender, System::EventArgs^  e) {
		if (selected_user)
		{
			label_user_name->Text = gcnew String(selected_user->name_first) + " " + gcnew String(selected_user->name_last);
			show_books();
		}
		//user->name_first->c_str(); // Convert::ToString(selected_user->name_first->c_str()) + ' ' + Convert::ToString(selected_user->name_last->c_str());
	}

	private:
		void show_books()
		{
			if (items_all && items_all->size() > 0)
			{
				books_user = new std::vector<BookExt>();
				for (int i = 0; i < (int)items_all->size(); i++)
				{
					Item item = (*items_all)[i];
					if (item.id_user == selected_user->id)
					{
						for (int i = 0; i < (int)books_all->size(); i++)
						{
							Book book = (*books_all)[i];
							if (book.id == item.id_book)
							{
								BookExt book2 = BookExt(book);
								book2.exist = item.returned;
								book2.date_start = item.date_start;
								book2.date_end = item.date_end;
								(*books_user).push_back(book2);
								break;
							}
						}
					}
				}
				BookHelper::set_data_table_books((*books_user), this->dataGridView_books);
				label_all_books->Text = "Count books: " + Convert::ToString((*books_user).size());
			}
		}

	private: System::Void button_close_Click(System::Object^  sender, System::EventArgs^  e) {
		update_books();
		this->Close();
	}
	private: System::Void button_add_book_Click(System::Object^  sender, System::EventArgs^  e) {
		Select_book ^ form = gcnew Select_book(selected_user, books_all, items_all);
		form->ShowDialog();
		show_books();
	}
	private: System::Void Library_card_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		update_books();
	}

	private:
		void update_books()
		{
			long count = this->dataGridView_books->RowCount;
			if (count > 0)
			{
				Book *books = new Book[count];
				BookHelper::get_data_table_books(books, count, this->dataGridView_books);
				if (count > 0)
				{
					for (int i = 0; i < count; i++)
					{
						Book book = books[i];
						if (book.id > 0)
						{
							if ((*items_all).size() > 0)
							{
								for (int j = (int)(*items_all).size() - 1; j >= 0; j--)
								{
									if (book.id == (*items_all)[j].id_book)
									{
										if ((*items_all)[j].returned == false && book.exist == true)
										{
											time_t result = time(NULL);
											(*items_all)[j].date_end = (long)result;
										}
										(*items_all)[j].returned = book.exist;
										if ((*items_all)[j].returned == false)
										{
											(*items_all)[j].date_end = 0;
										}
										break;
									}
								}
							}
						}
					}
				}
			}
		}

	};
}
