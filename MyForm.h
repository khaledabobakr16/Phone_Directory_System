#pragma once
/*
------------------------------------------------------------------
Program name : Phone Directory System
------------------------------------------------------------------
This project is a phone Directory system and it is used to add or
delete or modify or display contacts upon request and the contacts
contains (First Name, Last Name, Email, Job).
------------------------------------------------------------------
This project was programmed by:
1- Khaled Abubakr
------------------------------------------------------------------
*/
#include<iostream>
#include <msclr/marshal_cppstd.h>// for convert from String System to string std.
#include<string>
#include<fstream>
#define Error_message_If_Empty_Textboxs "Please fill in all fields"//error message
#define NULL 0
using namespace System;//for convert from string std to String System.
namespace khaled // for create struct , global variables.
{
	//------------------Struct---------------//
	struct contact
	{
		std::string first_name;
		std::string last_name;
		std::string username = first_name + " " + last_name;
		std::string email;
		std::string phone_num;
		std::string Job;
	};
	struct node
	{
		contact data;
		node* next;
	};
	//-------global pointers-----------//
	node* top = NULL;
	//--------global variable---------//
      int count_click_btn = 0;
	  int count_click_btn_delete = 0;
	  int count_click_search_btn = 0;
	  int count_click_btn_update = 0;
	  int count_click_btn_favourite = 0;
	  int count_click_search1_btn =0;
	//----------Functions Interfaces-------//
	  void erase();
	  void save();
	  int check_phonenum();
	  int check_email();
	  int check_email_in_edit();
	  int  read_count();
	  int check_phonenum2();
	  int check_phonenum_in_edit();
	  int check_phonenum2_in_edit();
	  void push(contact);
	  void Bubble_sort();
	  void count_contacts(int);
	  void count_FVcontacts(int);
	  int  read_count_Favourite();
	  void push_data_form_file();
	  void ClearItemsFromListview();
	  void display_in_AllContact_page();
	  void display_in_DeleteContact_page();
	  void display_in_SearchContact_page();
	  void display_in_UpdateContact_page();
	  void Merge(std::string* , std::string* , std::string* , std::string* , int , int , int );
	  void MergeSort(std::string*, std::string*, std::string*, std::string*, int, int);
	  void display_in_FavouritesContact_page();
	  int check_Phonenum_in_Favourite();
	  void save_edit();
	  void liner_search1();
	//-------------------------------------//


}
namespace PhoneDirectorySystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//------------------------------------------------//
	using namespace khaled; // for use struct and global variables.
	using namespace System::IO;// This To write in file and read from file .->#include<fstream>.
	//-----------------------------------------------//
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pn_title_bar;
	private: System::Windows::Forms::Panel^ pn_st_bar;

	protected:
		//For use column in listview..//
	System::Windows::Forms::ListViewItem^listViewItem;
	//-------------------------------//
	private: System::Windows::Forms::Panel^ pn_nav_bar;
	private: System::Windows::Forms::Panel^ pn_co;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Panel^ pn_fav;

	private: System::Windows::Forms::Panel^ pn_update;


	private: System::Windows::Forms::Panel^ pn_search;



	private: System::Windows::Forms::Panel^ pn_all;

	private: System::Windows::Forms::Panel^ pn_delete;



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ pn_add;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::TextBox^ Jtextbox;

	private: System::Windows::Forms::TextBox^ Etextbox;

	private: System::Windows::Forms::TextBox^ PNtextbox;

	private: System::Windows::Forms::TextBox^ LNtextbox;

	private: System::Windows::Forms::TextBox^ FNtextbox;



	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label4;


	private:







	private: System::Windows::Forms::ListView^ Delete_listView;

	private: System::Windows::Forms::ColumnHeader^ columnHeader6;
	private: System::Windows::Forms::ColumnHeader^ columnHeader7;
	private: System::Windows::Forms::ColumnHeader^ columnHeader8;
	private: System::Windows::Forms::ColumnHeader^ columnHeader9;
	private: System::Windows::Forms::ColumnHeader^ columnHeader10;

private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Button^ delete_btn;
private: System::Windows::Forms::Label^ deletelabel;
private: System::Windows::Forms::ListView^ FVlistView;

private: System::Windows::Forms::ColumnHeader^ columnHeader11;
private: System::Windows::Forms::ColumnHeader^ columnHeader12;
private: System::Windows::Forms::ColumnHeader^ columnHeader13;
private: System::Windows::Forms::ColumnHeader^ columnHeader14;
private: System::Windows::Forms::ColumnHeader^ columnHeader15;
private: System::Windows::Forms::Button^ addfavouritebtn;

private: System::Windows::Forms::Label^ RemoveLb;

private: System::Windows::Forms::Button^ Removebtn;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::ListView^ All_listView;
private: System::Windows::Forms::ColumnHeader^ columnHeader1;
private: System::Windows::Forms::ColumnHeader^ columnHeader2;
private: System::Windows::Forms::ColumnHeader^ columnHeader3;
private: System::Windows::Forms::ColumnHeader^ columnHeader4;
private: System::Windows::Forms::ColumnHeader^ columnHeader5;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::ListView^ Update_listView;

private: System::Windows::Forms::ColumnHeader^ columnHeader16;
private: System::Windows::Forms::ColumnHeader^ columnHeader17;
private: System::Windows::Forms::ColumnHeader^ columnHeader18;
private: System::Windows::Forms::ColumnHeader^ columnHeader19;
private: System::Windows::Forms::ColumnHeader^ columnHeader20;
private: System::Windows::Forms::Label^ updateLb;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Panel^ pn_edit;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::TextBox^ FirstNtextbox;

private: System::Windows::Forms::TextBox^ LastNtextbox;
private: System::Windows::Forms::TextBox^ PhoneNtextbox;

private: System::Windows::Forms::TextBox^ Jobtextbox;






private: System::Windows::Forms::Button^ save_btn2;
private: System::Windows::Forms::Button^ close_btn;
private: System::Windows::Forms::Label^ editLb;
private: System::Windows::Forms::Label^ joblb;



private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::TextBox^ Emailtextbox;
private: System::Windows::Forms::Button^ search1;
private: System::Windows::Forms::TextBox^ search1textbox;


private: System::Windows::Forms::ListView^ searchlistView;

private: System::Windows::Forms::ColumnHeader^ columnHeader21;
private: System::Windows::Forms::ColumnHeader^ columnHeader22;
private: System::Windows::Forms::ColumnHeader^ columnHeader23;
private: System::Windows::Forms::ColumnHeader^ columnHeader24;
private: System::Windows::Forms::ColumnHeader^ columnHeader25;
private: System::Windows::Forms::Label^ search_lb;

private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Panel^ search_pn2;

private: System::Windows::Forms::ListView^ searchlistviewdemo;
private: System::Windows::Forms::ColumnHeader^ columnHeader26;
private: System::Windows::Forms::ColumnHeader^ columnHeader27;
private: System::Windows::Forms::ColumnHeader^ columnHeader28;
private: System::Windows::Forms::ColumnHeader^ columnHeader29;
private: System::Windows::Forms::ColumnHeader^ columnHeader30;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Button^ searchdemoo_btn;
	protected:
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pn_title_bar = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pn_st_bar = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pn_nav_bar = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->pn_co = (gcnew System::Windows::Forms::Panel());
			this->pn_all = (gcnew System::Windows::Forms::Panel());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->addfavouritebtn = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->All_listView = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pn_add = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->Jtextbox = (gcnew System::Windows::Forms::TextBox());
			this->Etextbox = (gcnew System::Windows::Forms::TextBox());
			this->PNtextbox = (gcnew System::Windows::Forms::TextBox());
			this->LNtextbox = (gcnew System::Windows::Forms::TextBox());
			this->FNtextbox = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pn_delete = (gcnew System::Windows::Forms::Panel());
			this->deletelabel = (gcnew System::Windows::Forms::Label());
			this->delete_btn = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->Delete_listView = (gcnew System::Windows::Forms::ListView());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader9 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader10 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pn_search = (gcnew System::Windows::Forms::Panel());
			this->searchdemoo_btn = (gcnew System::Windows::Forms::Button());
			this->search_pn2 = (gcnew System::Windows::Forms::Panel());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->searchlistviewdemo = (gcnew System::Windows::Forms::ListView());
			this->columnHeader26 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader27 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader28 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader29 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader30 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->search_lb = (gcnew System::Windows::Forms::Label());
			this->search1 = (gcnew System::Windows::Forms::Button());
			this->search1textbox = (gcnew System::Windows::Forms::TextBox());
			this->searchlistView = (gcnew System::Windows::Forms::ListView());
			this->columnHeader21 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader22 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader23 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader24 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader25 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pn_update = (gcnew System::Windows::Forms::Panel());
			this->pn_edit = (gcnew System::Windows::Forms::Panel());
			this->Emailtextbox = (gcnew System::Windows::Forms::TextBox());
			this->joblb = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->FirstNtextbox = (gcnew System::Windows::Forms::TextBox());
			this->LastNtextbox = (gcnew System::Windows::Forms::TextBox());
			this->PhoneNtextbox = (gcnew System::Windows::Forms::TextBox());
			this->Jobtextbox = (gcnew System::Windows::Forms::TextBox());
			this->save_btn2 = (gcnew System::Windows::Forms::Button());
			this->close_btn = (gcnew System::Windows::Forms::Button());
			this->editLb = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->updateLb = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->Update_listView = (gcnew System::Windows::Forms::ListView());
			this->columnHeader16 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader17 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader18 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader19 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader20 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pn_fav = (gcnew System::Windows::Forms::Panel());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->RemoveLb = (gcnew System::Windows::Forms::Label());
			this->Removebtn = (gcnew System::Windows::Forms::Button());
			this->FVlistView = (gcnew System::Windows::Forms::ListView());
			this->columnHeader11 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader12 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader13 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader14 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader15 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pn_title_bar->SuspendLayout();
			this->pn_st_bar->SuspendLayout();
			this->pn_nav_bar->SuspendLayout();
			this->pn_co->SuspendLayout();
			this->pn_all->SuspendLayout();
			this->pn_add->SuspendLayout();
			this->panel2->SuspendLayout();
			this->pn_delete->SuspendLayout();
			this->pn_search->SuspendLayout();
			this->search_pn2->SuspendLayout();
			this->pn_update->SuspendLayout();
			this->pn_edit->SuspendLayout();
			this->pn_fav->SuspendLayout();
			this->SuspendLayout();
			// 
			// pn_title_bar
			// 
			this->pn_title_bar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pn_title_bar->Controls->Add(this->panel1);
			this->pn_title_bar->Controls->Add(this->label1);
			this->pn_title_bar->Controls->Add(this->button3);
			this->pn_title_bar->Controls->Add(this->button2);
			this->pn_title_bar->Controls->Add(this->button1);
			this->pn_title_bar->Dock = System::Windows::Forms::DockStyle::Top;
			this->pn_title_bar->Location = System::Drawing::Point(0, 0);
			this->pn_title_bar->Name = L"pn_title_bar";
			this->pn_title_bar->Size = System::Drawing::Size(955, 61);
			this->pn_title_bar->TabIndex = 0;
			this->pn_title_bar->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pn_title_bar_Paint);
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(45, 42);
			this->panel1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 20.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkOrange;
			this->label1->Location = System::Drawing::Point(351, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(300, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Phone Directory System";
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(811, 14);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(43, 36);
			this->button3->TabIndex = 1;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(860, 14);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(43, 36);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(909, 14);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(43, 36);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pn_st_bar
			// 
			this->pn_st_bar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pn_st_bar->Controls->Add(this->label3);
			this->pn_st_bar->Controls->Add(this->label2);
			this->pn_st_bar->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pn_st_bar->Location = System::Drawing::Point(0, 491);
			this->pn_st_bar->Name = L"pn_st_bar";
			this->pn_st_bar->Size = System::Drawing::Size(955, 48);
			this->pn_st_bar->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(901, 26);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"V 1.0.0";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(380, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(271, 23);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Programmed by: Thebes Academy Students ";
			// 
			// pn_nav_bar
			// 
			this->pn_nav_bar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pn_nav_bar->Controls->Add(this->button10);
			this->pn_nav_bar->Controls->Add(this->button4);
			this->pn_nav_bar->Controls->Add(this->button9);
			this->pn_nav_bar->Controls->Add(this->button5);
			this->pn_nav_bar->Controls->Add(this->button8);
			this->pn_nav_bar->Controls->Add(this->button7);
			this->pn_nav_bar->Dock = System::Windows::Forms::DockStyle::Left;
			this->pn_nav_bar->Location = System::Drawing::Point(0, 61);
			this->pn_nav_bar->Name = L"pn_nav_bar";
			this->pn_nav_bar->Size = System::Drawing::Size(197, 430);
			this->pn_nav_bar->TabIndex = 2;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->button10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkOrange;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.Image")));
			this->button10->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button10->Location = System::Drawing::Point(-81, 289);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(371, 76);
			this->button10->TabIndex = 7;
			this->button10->Text = L"Update";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkOrange;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button4->Location = System::Drawing::Point(-71, 360);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(360, 70);
			this->button4->TabIndex = 1;
			this->button4->Text = L" Favourites";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->button9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkOrange;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
			this->button9->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button9->Location = System::Drawing::Point(-81, 222);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(367, 75);
			this->button9->TabIndex = 6;
			this->button9->Text = L"Search";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::DarkOrange;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkOrange;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button5->Location = System::Drawing::Point(-70, 6);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(356, 75);
			this->button5->TabIndex = 2;
			this->button5->Text = L"All contacts";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkOrange;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button8->Location = System::Drawing::Point(-62, 146);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(348, 87);
			this->button8->TabIndex = 5;
			this->button8->Text = L"Delete contact";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkOrange;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button7->Location = System::Drawing::Point(-70, 77);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(357, 80);
			this->button7->TabIndex = 4;
			this->button7->Text = L"Add contact";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// pn_co
			// 
			this->pn_co->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pn_co->Controls->Add(this->pn_all);
			this->pn_co->Controls->Add(this->pn_add);
			this->pn_co->Controls->Add(this->pn_delete);
			this->pn_co->Controls->Add(this->pn_search);
			this->pn_co->Controls->Add(this->pn_update);
			this->pn_co->Controls->Add(this->pn_fav);
			this->pn_co->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_co->Location = System::Drawing::Point(0, 61);
			this->pn_co->Name = L"pn_co";
			this->pn_co->Size = System::Drawing::Size(955, 430);
			this->pn_co->TabIndex = 3;
			// 
			// pn_all
			// 
			this->pn_all->Controls->Add(this->label22);
			this->pn_all->Controls->Add(this->addfavouritebtn);
			this->pn_all->Controls->Add(this->label19);
			this->pn_all->Controls->Add(this->All_listView);
			this->pn_all->Controls->Add(this->label7);
			this->pn_all->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_all->Location = System::Drawing::Point(0, 0);
			this->pn_all->Name = L"pn_all";
			this->pn_all->Size = System::Drawing::Size(955, 430);
			this->pn_all->TabIndex = 2;
			this->pn_all->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pn_all_Paint);
			// 
			// label22
			// 
			this->label22->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::Red;
			this->label22->Location = System::Drawing::Point(280, 68);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(0, 13);
			this->label22->TabIndex = 9;
			// 
			// addfavouritebtn
			// 
			this->addfavouritebtn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->addfavouritebtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->addfavouritebtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addfavouritebtn->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addfavouritebtn->ForeColor = System::Drawing::Color::DarkOrange;
			this->addfavouritebtn->Location = System::Drawing::Point(800, 38);
			this->addfavouritebtn->Name = L"addfavouritebtn";
			this->addfavouritebtn->Size = System::Drawing::Size(143, 26);
			this->addfavouritebtn->TabIndex = 6;
			this->addfavouritebtn->Text = L"Add to favourites";
			this->addfavouritebtn->UseVisualStyleBackColor = false;
			this->addfavouritebtn->Click += gcnew System::EventHandler(this, &MyForm::addfavouritebtn_Click);
			// 
			// label19
			// 
			this->label19->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::Red;
			this->label19->Location = System::Drawing::Point(452, 235);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(0, 14);
			this->label19->TabIndex = 4;
			// 
			// All_listView
			// 
			this->All_listView->Activation = System::Windows::Forms::ItemActivation::OneClick;
			this->All_listView->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->All_listView->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->All_listView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->columnHeader1,
					this->columnHeader2, this->columnHeader3, this->columnHeader4, this->columnHeader5
			});
			this->All_listView->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->All_listView->ForeColor = System::Drawing::Color::White;
			this->All_listView->FullRowSelect = true;
			this->All_listView->HideSelection = false;
			this->All_listView->Location = System::Drawing::Point(203, 87);
			this->All_listView->Name = L"All_listView";
			this->All_listView->Size = System::Drawing::Size(740, 328);
			this->All_listView->TabIndex = 8;
			this->All_listView->UseCompatibleStateImageBehavior = false;
			this->All_listView->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Num";
			this->columnHeader1->Width = 38;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Name";
			this->columnHeader2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader2->Width = 183;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Phone Number";
			this->columnHeader3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader3->Width = 148;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"E-mail";
			this->columnHeader4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader4->Width = 214;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Job";
			this->columnHeader5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader5->Width = 167;
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"voxBOX", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(499, 25);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(183, 17);
			this->label7->TabIndex = 1;
			this->label7->Text = L"All contacts";
			// 
			// pn_add
			// 
			this->pn_add->Controls->Add(this->panel2);
			this->pn_add->Controls->Add(this->label11);
			this->pn_add->Controls->Add(this->label4);
			this->pn_add->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_add->Location = System::Drawing::Point(0, 0);
			this->pn_add->Name = L"pn_add";
			this->pn_add->Size = System::Drawing::Size(955, 430);
			this->pn_add->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button13);
			this->panel2->Controls->Add(this->button12);
			this->panel2->Controls->Add(this->button11);
			this->panel2->Controls->Add(this->Jtextbox);
			this->panel2->Controls->Add(this->Etextbox);
			this->panel2->Controls->Add(this->PNtextbox);
			this->panel2->Controls->Add(this->LNtextbox);
			this->panel2->Controls->Add(this->FNtextbox);
			this->panel2->Controls->Add(this->label17);
			this->panel2->Controls->Add(this->label16);
			this->panel2->Controls->Add(this->label15);
			this->panel2->Controls->Add(this->label14);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(955, 430);
			this->panel2->TabIndex = 2;
			// 
			// button13
			// 
			this->button13->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button13->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::DarkOrange;
			this->button13->Location = System::Drawing::Point(583, 264);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 23);
			this->button13->TabIndex = 13;
			this->button13->Text = L"Erase";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button12
			// 
			this->button12->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button12->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::DarkOrange;
			this->button12->Location = System::Drawing::Point(502, 264);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 23);
			this->button12->TabIndex = 12;
			this->button12->Text = L"Save";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(0, 0);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 11;
			this->button11->Text = L"button11";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// Jtextbox
			// 
			this->Jtextbox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Jtextbox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Jtextbox->Location = System::Drawing::Point(502, 238);
			this->Jtextbox->Name = L"Jtextbox";
			this->Jtextbox->Size = System::Drawing::Size(160, 20);
			this->Jtextbox->TabIndex = 10;
			this->Jtextbox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Jtextbox_KeyDown);
			// 
			// Etextbox
			// 
			this->Etextbox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Etextbox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Etextbox->Location = System::Drawing::Point(502, 199);
			this->Etextbox->Name = L"Etextbox";
			this->Etextbox->Size = System::Drawing::Size(160, 20);
			this->Etextbox->TabIndex = 9;
			this->Etextbox->TextChanged += gcnew System::EventHandler(this, &MyForm::Etextbox_TextChanged);
			this->Etextbox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Etextbox_KeyDown);
			// 
			// PNtextbox
			// 
			this->PNtextbox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->PNtextbox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PNtextbox->Location = System::Drawing::Point(502, 160);
			this->PNtextbox->Name = L"PNtextbox";
			this->PNtextbox->Size = System::Drawing::Size(160, 20);
			this->PNtextbox->TabIndex = 8;
			this->PNtextbox->TextChanged += gcnew System::EventHandler(this, &MyForm::PNtextbox_TextChanged);
			this->PNtextbox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::PNtextbox_KeyDown);
			// 
			// LNtextbox
			// 
			this->LNtextbox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->LNtextbox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->LNtextbox->Location = System::Drawing::Point(502, 119);
			this->LNtextbox->Name = L"LNtextbox";
			this->LNtextbox->Size = System::Drawing::Size(160, 20);
			this->LNtextbox->TabIndex = 7;
			this->LNtextbox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::LNtextbox_KeyDown);
			// 
			// FNtextbox
			// 
			this->FNtextbox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->FNtextbox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->FNtextbox->ForeColor = System::Drawing::Color::Black;
			this->FNtextbox->Location = System::Drawing::Point(502, 77);
			this->FNtextbox->Name = L"FNtextbox";
			this->FNtextbox->Size = System::Drawing::Size(160, 20);
			this->FNtextbox->TabIndex = 6;
			this->FNtextbox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::FNtextbox_KeyDown);
			// 
			// label17
			// 
			this->label17->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(502, 222);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(33, 13);
			this->label17->TabIndex = 5;
			this->label17->Text = L"Job :";
			// 
			// label16
			// 
			this->label16->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(501, 144);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(95, 13);
			this->label16->TabIndex = 4;
			this->label16->Text = L"Phone number :";
			// 
			// label15
			// 
			this->label15->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(502, 183);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(43, 13);
			this->label15->TabIndex = 3;
			this->label15->Text = L"Email :";
			// 
			// label14
			// 
			this->label14->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(502, 103);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(72, 13);
			this->label14->TabIndex = 2;
			this->label14->Text = L"Last name :";
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(501, 58);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(73, 13);
			this->label12->TabIndex = 1;
			this->label12->Text = L"First name :";
			// 
			// label13
			// 
			this->label13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"voxBOX", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label13->Location = System::Drawing::Point(481, 20);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(203, 22);
			this->label13->TabIndex = 0;
			this->label13->Text = L"Add contact";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(238, 84);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(70, 13);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Fisrt name:";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"voxBOX", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Location = System::Drawing::Point(481, 20);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(203, 22);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Add contact";
			// 
			// pn_delete
			// 
			this->pn_delete->Controls->Add(this->deletelabel);
			this->pn_delete->Controls->Add(this->delete_btn);
			this->pn_delete->Controls->Add(this->label18);
			this->pn_delete->Controls->Add(this->Delete_listView);
			this->pn_delete->Controls->Add(this->label6);
			this->pn_delete->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_delete->Location = System::Drawing::Point(0, 0);
			this->pn_delete->Name = L"pn_delete";
			this->pn_delete->Size = System::Drawing::Size(955, 430);
			this->pn_delete->TabIndex = 1;
			this->pn_delete->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pn_delete_Paint);
			// 
			// deletelabel
			// 
			this->deletelabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->deletelabel->AutoSize = true;
			this->deletelabel->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->deletelabel->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deletelabel->ForeColor = System::Drawing::Color::Red;
			this->deletelabel->Location = System::Drawing::Point(353, 68);
			this->deletelabel->Name = L"deletelabel";
			this->deletelabel->Size = System::Drawing::Size(0, 13);
			this->deletelabel->TabIndex = 7;
			this->deletelabel->Click += gcnew System::EventHandler(this, &MyForm::deletelabel_Click);
			// 
			// delete_btn
			// 
			this->delete_btn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->delete_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->delete_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->delete_btn->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->delete_btn->ForeColor = System::Drawing::Color::DarkOrange;
			this->delete_btn->Location = System::Drawing::Point(800, 39);
			this->delete_btn->Name = L"delete_btn";
			this->delete_btn->Size = System::Drawing::Size(143, 26);
			this->delete_btn->TabIndex = 5;
			this->delete_btn->Text = L"Delete";
			this->delete_btn->UseVisualStyleBackColor = false;
			this->delete_btn->Click += gcnew System::EventHandler(this, &MyForm::delete_btn_Click);
			// 
			// label18
			// 
			this->label18->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::Red;
			this->label18->Location = System::Drawing::Point(499, 235);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(0, 14);
			this->label18->TabIndex = 6;
			// 
			// Delete_listView
			// 
			this->Delete_listView->Activation = System::Windows::Forms::ItemActivation::OneClick;
			this->Delete_listView->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Delete_listView->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->Delete_listView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->columnHeader6,
					this->columnHeader7, this->columnHeader8, this->columnHeader9, this->columnHeader10
			});
			this->Delete_listView->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete_listView->ForeColor = System::Drawing::Color::White;
			this->Delete_listView->FullRowSelect = true;
			this->Delete_listView->HideSelection = false;
			this->Delete_listView->Location = System::Drawing::Point(203, 87);
			this->Delete_listView->Name = L"Delete_listView";
			this->Delete_listView->Size = System::Drawing::Size(740, 328);
			this->Delete_listView->TabIndex = 4;
			this->Delete_listView->UseCompatibleStateImageBehavior = false;
			this->Delete_listView->View = System::Windows::Forms::View::Details;
			this->Delete_listView->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::Delete_listView_SelectedIndexChanged);
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Num";
			this->columnHeader6->Width = 38;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"Name";
			this->columnHeader7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader7->Width = 183;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"Phone Number";
			this->columnHeader8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader8->Width = 148;
			// 
			// columnHeader9
			// 
			this->columnHeader9->Text = L"E-mail";
			this->columnHeader9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader9->Width = 214;
			// 
			// columnHeader10
			// 
			this->columnHeader10->Text = L"Job";
			this->columnHeader10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader10->Width = 167;
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"voxBOX", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(477, 25);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(209, 17);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Delete contact";
			// 
			// pn_search
			// 
			this->pn_search->Controls->Add(this->searchdemoo_btn);
			this->pn_search->Controls->Add(this->search_pn2);
			this->pn_search->Controls->Add(this->label28);
			this->pn_search->Controls->Add(this->search_lb);
			this->pn_search->Controls->Add(this->search1);
			this->pn_search->Controls->Add(this->search1textbox);
			this->pn_search->Controls->Add(this->searchlistView);
			this->pn_search->Controls->Add(this->label9);
			this->pn_search->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_search->Location = System::Drawing::Point(0, 0);
			this->pn_search->Name = L"pn_search";
			this->pn_search->Size = System::Drawing::Size(955, 430);
			this->pn_search->TabIndex = 4;
			this->pn_search->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pn_search_Paint);
			// 
			// searchdemoo_btn
			// 
			this->searchdemoo_btn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->searchdemoo_btn->BackColor = System::Drawing::Color::Red;
			this->searchdemoo_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->searchdemoo_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"searchdemoo_btn.Image")));
			this->searchdemoo_btn->Location = System::Drawing::Point(679, 61);
			this->searchdemoo_btn->Name = L"searchdemoo_btn";
			this->searchdemoo_btn->Size = System::Drawing::Size(72, 22);
			this->searchdemoo_btn->TabIndex = 15;
			this->searchdemoo_btn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->searchdemoo_btn->UseVisualStyleBackColor = false;
			this->searchdemoo_btn->Click += gcnew System::EventHandler(this, &MyForm::searchdemoo_btn_Click);
			// 
			// search_pn2
			// 
			this->search_pn2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->search_pn2->Controls->Add(this->label27);
			this->search_pn2->Controls->Add(this->searchlistviewdemo);
			this->search_pn2->Location = System::Drawing::Point(203, 89);
			this->search_pn2->Name = L"search_pn2";
			this->search_pn2->Size = System::Drawing::Size(740, 326);
			this->search_pn2->TabIndex = 14;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::Red;
			this->label27->Location = System::Drawing::Point(228, 165);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(0, 14);
			this->label27->TabIndex = 11;
			// 
			// searchlistviewdemo
			// 
			this->searchlistviewdemo->Activation = System::Windows::Forms::ItemActivation::OneClick;
			this->searchlistviewdemo->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->searchlistviewdemo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->searchlistviewdemo->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->columnHeader26,
					this->columnHeader27, this->columnHeader28, this->columnHeader29, this->columnHeader30
			});
			this->searchlistviewdemo->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchlistviewdemo->ForeColor = System::Drawing::Color::White;
			this->searchlistviewdemo->FullRowSelect = true;
			this->searchlistviewdemo->HideSelection = false;
			this->searchlistviewdemo->Location = System::Drawing::Point(0, -2);
			this->searchlistviewdemo->Name = L"searchlistviewdemo";
			this->searchlistviewdemo->Size = System::Drawing::Size(740, 328);
			this->searchlistviewdemo->TabIndex = 10;
			this->searchlistviewdemo->UseCompatibleStateImageBehavior = false;
			this->searchlistviewdemo->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader26
			// 
			this->columnHeader26->Text = L"Num";
			this->columnHeader26->Width = 38;
			// 
			// columnHeader27
			// 
			this->columnHeader27->Text = L"Name";
			this->columnHeader27->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader27->Width = 183;
			// 
			// columnHeader28
			// 
			this->columnHeader28->Text = L"Phone Number";
			this->columnHeader28->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader28->Width = 148;
			// 
			// columnHeader29
			// 
			this->columnHeader29->Text = L"E-mail";
			this->columnHeader29->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader29->Width = 214;
			// 
			// columnHeader30
			// 
			this->columnHeader30->Text = L"Job";
			this->columnHeader30->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader30->Width = 167;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::Color::Red;
			this->label28->Location = System::Drawing::Point(435, 261);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(0, 13);
			this->label28->TabIndex = 13;
			// 
			// search_lb
			// 
			this->search_lb->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->search_lb->AutoSize = true;
			this->search_lb->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search_lb->ForeColor = System::Drawing::Color::Red;
			this->search_lb->Location = System::Drawing::Point(414, 45);
			this->search_lb->Name = L"search_lb";
			this->search_lb->Size = System::Drawing::Size(0, 13);
			this->search_lb->TabIndex = 12;
			// 
			// search1
			// 
			this->search1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->search1->BackColor = System::Drawing::Color::DarkOrange;
			this->search1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->search1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"search1.Image")));
			this->search1->Location = System::Drawing::Point(679, 61);
			this->search1->Name = L"search1";
			this->search1->Size = System::Drawing::Size(72, 22);
			this->search1->TabIndex = 11;
			this->search1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->search1->UseVisualStyleBackColor = false;
			this->search1->Click += gcnew System::EventHandler(this, &MyForm::search1_Click);
			// 
			// search1textbox
			// 
			this->search1textbox->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->search1textbox->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search1textbox->Location = System::Drawing::Point(371, 61);
			this->search1textbox->Name = L"search1textbox";
			this->search1textbox->Size = System::Drawing::Size(313, 22);
			this->search1textbox->TabIndex = 10;
			this->search1textbox->TextChanged += gcnew System::EventHandler(this, &MyForm::search1textbox_TextChanged);
			this->search1textbox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::search1textbox_KeyDown);
			// 
			// searchlistView
			// 
			this->searchlistView->Activation = System::Windows::Forms::ItemActivation::OneClick;
			this->searchlistView->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->searchlistView->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->searchlistView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->columnHeader21,
					this->columnHeader22, this->columnHeader23, this->columnHeader24, this->columnHeader25
			});
			this->searchlistView->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchlistView->ForeColor = System::Drawing::Color::White;
			this->searchlistView->FullRowSelect = true;
			this->searchlistView->HideSelection = false;
			this->searchlistView->Location = System::Drawing::Point(203, 87);
			this->searchlistView->Name = L"searchlistView";
			this->searchlistView->Size = System::Drawing::Size(740, 328);
			this->searchlistView->TabIndex = 9;
			this->searchlistView->UseCompatibleStateImageBehavior = false;
			this->searchlistView->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader21
			// 
			this->columnHeader21->Text = L"Num";
			this->columnHeader21->Width = 38;
			// 
			// columnHeader22
			// 
			this->columnHeader22->Text = L"Name";
			this->columnHeader22->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader22->Width = 183;
			// 
			// columnHeader23
			// 
			this->columnHeader23->Text = L"Phone Number";
			this->columnHeader23->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader23->Width = 148;
			// 
			// columnHeader24
			// 
			this->columnHeader24->Text = L"E-mail";
			this->columnHeader24->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader24->Width = 214;
			// 
			// columnHeader25
			// 
			this->columnHeader25->Text = L"Job";
			this->columnHeader25->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader25->Width = 167;
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"voxBOX", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(519, 20);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(101, 17);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Search";
			// 
			// pn_update
			// 
			this->pn_update->Controls->Add(this->pn_edit);
			this->pn_update->Controls->Add(this->label20);
			this->pn_update->Controls->Add(this->updateLb);
			this->pn_update->Controls->Add(this->button14);
			this->pn_update->Controls->Add(this->Update_listView);
			this->pn_update->Controls->Add(this->label10);
			this->pn_update->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_update->Location = System::Drawing::Point(0, 0);
			this->pn_update->Name = L"pn_update";
			this->pn_update->Size = System::Drawing::Size(955, 430);
			this->pn_update->TabIndex = 5;
			this->pn_update->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pn_update_Paint);
			// 
			// pn_edit
			// 
			this->pn_edit->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pn_edit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->pn_edit->Controls->Add(this->Emailtextbox);
			this->pn_edit->Controls->Add(this->joblb);
			this->pn_edit->Controls->Add(this->label26);
			this->pn_edit->Controls->Add(this->label25);
			this->pn_edit->Controls->Add(this->label24);
			this->pn_edit->Controls->Add(this->label23);
			this->pn_edit->Controls->Add(this->FirstNtextbox);
			this->pn_edit->Controls->Add(this->LastNtextbox);
			this->pn_edit->Controls->Add(this->PhoneNtextbox);
			this->pn_edit->Controls->Add(this->Jobtextbox);
			this->pn_edit->Controls->Add(this->save_btn2);
			this->pn_edit->Controls->Add(this->close_btn);
			this->pn_edit->Controls->Add(this->editLb);
			this->pn_edit->Location = System::Drawing::Point(432, 20);
			this->pn_edit->Name = L"pn_edit";
			this->pn_edit->Size = System::Drawing::Size(287, 392);
			this->pn_edit->TabIndex = 13;
			this->pn_edit->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pn_edit_Paint);
			// 
			// Emailtextbox
			// 
			this->Emailtextbox->Location = System::Drawing::Point(53, 230);
			this->Emailtextbox->Name = L"Emailtextbox";
			this->Emailtextbox->Size = System::Drawing::Size(188, 20);
			this->Emailtextbox->TabIndex = 13;
			this->Emailtextbox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Emailtextbox_KeyDown);
			// 
			// joblb
			// 
			this->joblb->AutoSize = true;
			this->joblb->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->joblb->ForeColor = System::Drawing::Color::White;
			this->joblb->Location = System::Drawing::Point(50, 254);
			this->joblb->Name = L"joblb";
			this->joblb->Size = System::Drawing::Size(27, 13);
			this->joblb->TabIndex = 12;
			this->joblb->Text = L"Job";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::Color::White;
			this->label26->Location = System::Drawing::Point(50, 214);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(48, 13);
			this->label26->TabIndex = 11;
			this->label26->Text = L"E-mail :";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::White;
			this->label25->Location = System::Drawing::Point(50, 176);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(95, 13);
			this->label25->TabIndex = 10;
			this->label25->Text = L"Phone number :";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::White;
			this->label24->Location = System::Drawing::Point(50, 134);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(72, 13);
			this->label24->TabIndex = 9;
			this->label24->Text = L"Last name :";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::White;
			this->label23->Location = System::Drawing::Point(50, 92);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(73, 13);
			this->label23->TabIndex = 8;
			this->label23->Text = L"First name :";
			// 
			// FirstNtextbox
			// 
			this->FirstNtextbox->Location = System::Drawing::Point(53, 108);
			this->FirstNtextbox->Name = L"FirstNtextbox";
			this->FirstNtextbox->Size = System::Drawing::Size(188, 20);
			this->FirstNtextbox->TabIndex = 7;
			this->FirstNtextbox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::FirstNtextbox_KeyDown);
			// 
			// LastNtextbox
			// 
			this->LastNtextbox->Location = System::Drawing::Point(53, 150);
			this->LastNtextbox->Name = L"LastNtextbox";
			this->LastNtextbox->Size = System::Drawing::Size(188, 20);
			this->LastNtextbox->TabIndex = 6;
			this->LastNtextbox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::LastNtextbox_KeyDown);
			// 
			// PhoneNtextbox
			// 
			this->PhoneNtextbox->Location = System::Drawing::Point(53, 191);
			this->PhoneNtextbox->Name = L"PhoneNtextbox";
			this->PhoneNtextbox->Size = System::Drawing::Size(188, 20);
			this->PhoneNtextbox->TabIndex = 5;
			this->PhoneNtextbox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::PhoneNtextbox_KeyDown);
			// 
			// Jobtextbox
			// 
			this->Jobtextbox->Location = System::Drawing::Point(53, 269);
			this->Jobtextbox->Name = L"Jobtextbox";
			this->Jobtextbox->Size = System::Drawing::Size(188, 20);
			this->Jobtextbox->TabIndex = 3;
			this->Jobtextbox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Jobtextbox_KeyDown);
			// 
			// save_btn2
			// 
			this->save_btn2->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->save_btn2->ForeColor = System::Drawing::Color::DarkOrange;
			this->save_btn2->Location = System::Drawing::Point(53, 298);
			this->save_btn2->Name = L"save_btn2";
			this->save_btn2->Size = System::Drawing::Size(75, 23);
			this->save_btn2->TabIndex = 2;
			this->save_btn2->Text = L"Save";
			this->save_btn2->UseVisualStyleBackColor = true;
			this->save_btn2->Click += gcnew System::EventHandler(this, &MyForm::save_btn2_Click);
			// 
			// close_btn
			// 
			this->close_btn->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->close_btn->ForeColor = System::Drawing::Color::DarkOrange;
			this->close_btn->Location = System::Drawing::Point(166, 298);
			this->close_btn->Name = L"close_btn";
			this->close_btn->Size = System::Drawing::Size(75, 23);
			this->close_btn->TabIndex = 1;
			this->close_btn->Text = L"Close";
			this->close_btn->UseVisualStyleBackColor = true;
			this->close_btn->Click += gcnew System::EventHandler(this, &MyForm::close_btn_Click);
			// 
			// editLb
			// 
			this->editLb->AutoSize = true;
			this->editLb->Font = (gcnew System::Drawing::Font(L"voxBOX", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->editLb->ForeColor = System::Drawing::Color::DarkOrange;
			this->editLb->Location = System::Drawing::Point(67, 21);
			this->editLb->Name = L"editLb";
			this->editLb->Size = System::Drawing::Size(174, 17);
			this->editLb->TabIndex = 0;
			this->editLb->Text = L"Edit Contact";
			// 
			// label20
			// 
			this->label20->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::Red;
			this->label20->Location = System::Drawing::Point(505, 233);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(0, 14);
			this->label20->TabIndex = 12;
			// 
			// updateLb
			// 
			this->updateLb->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->updateLb->AutoSize = true;
			this->updateLb->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->updateLb->ForeColor = System::Drawing::Color::Red;
			this->updateLb->Location = System::Drawing::Point(353, 68);
			this->updateLb->Name = L"updateLb";
			this->updateLb->Size = System::Drawing::Size(0, 13);
			this->updateLb->TabIndex = 11;
			// 
			// button14
			// 
			this->button14->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::DarkOrange;
			this->button14->Location = System::Drawing::Point(800, 38);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(143, 26);
			this->button14->TabIndex = 10;
			this->button14->Text = L"Edit contact";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// Update_listView
			// 
			this->Update_listView->Activation = System::Windows::Forms::ItemActivation::OneClick;
			this->Update_listView->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Update_listView->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->Update_listView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->columnHeader16,
					this->columnHeader17, this->columnHeader18, this->columnHeader19, this->columnHeader20
			});
			this->Update_listView->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Update_listView->ForeColor = System::Drawing::Color::White;
			this->Update_listView->FullRowSelect = true;
			this->Update_listView->HideSelection = false;
			this->Update_listView->Location = System::Drawing::Point(203, 87);
			this->Update_listView->Name = L"Update_listView";
			this->Update_listView->Size = System::Drawing::Size(740, 328);
			this->Update_listView->TabIndex = 9;
			this->Update_listView->UseCompatibleStateImageBehavior = false;
			this->Update_listView->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader16
			// 
			this->columnHeader16->Text = L"Num";
			this->columnHeader16->Width = 38;
			// 
			// columnHeader17
			// 
			this->columnHeader17->Text = L"Name";
			this->columnHeader17->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader17->Width = 183;
			// 
			// columnHeader18
			// 
			this->columnHeader18->Text = L"Phone Number";
			this->columnHeader18->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader18->Width = 148;
			// 
			// columnHeader19
			// 
			this->columnHeader19->Text = L"E-mail";
			this->columnHeader19->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader19->Width = 214;
			// 
			// columnHeader20
			// 
			this->columnHeader20->Text = L"Job";
			this->columnHeader20->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader20->Width = 167;
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"voxBOX", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(540, 20);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(101, 17);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Update";
			// 
			// pn_fav
			// 
			this->pn_fav->Controls->Add(this->label21);
			this->pn_fav->Controls->Add(this->RemoveLb);
			this->pn_fav->Controls->Add(this->Removebtn);
			this->pn_fav->Controls->Add(this->FVlistView);
			this->pn_fav->Controls->Add(this->label5);
			this->pn_fav->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_fav->Location = System::Drawing::Point(0, 0);
			this->pn_fav->Name = L"pn_fav";
			this->pn_fav->Size = System::Drawing::Size(955, 430);
			this->pn_fav->TabIndex = 6;
			this->pn_fav->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pn_fav_Paint_1);
			// 
			// label21
			// 
			this->label21->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold));
			this->label21->ForeColor = System::Drawing::Color::Red;
			this->label21->Location = System::Drawing::Point(505, 233);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(0, 14);
			this->label21->TabIndex = 8;
			// 
			// RemoveLb
			// 
			this->RemoveLb->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->RemoveLb->AutoSize = true;
			this->RemoveLb->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RemoveLb->ForeColor = System::Drawing::Color::Red;
			this->RemoveLb->Location = System::Drawing::Point(312, 68);
			this->RemoveLb->Name = L"RemoveLb";
			this->RemoveLb->Size = System::Drawing::Size(0, 13);
			this->RemoveLb->TabIndex = 7;
			// 
			// Removebtn
			// 
			this->Removebtn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Removebtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->Removebtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Removebtn->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Removebtn->ForeColor = System::Drawing::Color::DarkOrange;
			this->Removebtn->Location = System::Drawing::Point(788, 38);
			this->Removebtn->Name = L"Removebtn";
			this->Removebtn->Size = System::Drawing::Size(155, 26);
			this->Removebtn->TabIndex = 6;
			this->Removebtn->Text = L"Remove from favourites";
			this->Removebtn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Removebtn->UseVisualStyleBackColor = false;
			this->Removebtn->Click += gcnew System::EventHandler(this, &MyForm::Removebtn_Click);
			// 
			// FVlistView
			// 
			this->FVlistView->Activation = System::Windows::Forms::ItemActivation::OneClick;
			this->FVlistView->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->FVlistView->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->FVlistView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->columnHeader11,
					this->columnHeader12, this->columnHeader13, this->columnHeader14, this->columnHeader15
			});
			this->FVlistView->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FVlistView->ForeColor = System::Drawing::Color::White;
			this->FVlistView->FullRowSelect = true;
			this->FVlistView->HideSelection = false;
			this->FVlistView->Location = System::Drawing::Point(203, 87);
			this->FVlistView->Name = L"FVlistView";
			this->FVlistView->Size = System::Drawing::Size(740, 328);
			this->FVlistView->TabIndex = 4;
			this->FVlistView->UseCompatibleStateImageBehavior = false;
			this->FVlistView->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader11
			// 
			this->columnHeader11->Text = L"Num";
			this->columnHeader11->Width = 38;
			// 
			// columnHeader12
			// 
			this->columnHeader12->Text = L"Name";
			this->columnHeader12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader12->Width = 183;
			// 
			// columnHeader13
			// 
			this->columnHeader13->Text = L"Phone Number";
			this->columnHeader13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader13->Width = 148;
			// 
			// columnHeader14
			// 
			this->columnHeader14->Text = L"E-mail";
			this->columnHeader14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader14->Width = 214;
			// 
			// columnHeader15
			// 
			this->columnHeader15->Text = L"Job";
			this->columnHeader15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader15->Width = 167;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"voxBOX", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(443, 20);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(271, 17);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Favourites contact";
			// 
			// MyForm
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->ClientSize = System::Drawing::Size(955, 539);
			this->Controls->Add(this->pn_nav_bar);
			this->Controls->Add(this->pn_co);
			this->Controls->Add(this->pn_st_bar);
			this->Controls->Add(this->pn_title_bar);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->RightToLeftLayout = true;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->pn_title_bar->ResumeLayout(false);
			this->pn_st_bar->ResumeLayout(false);
			this->pn_st_bar->PerformLayout();
			this->pn_nav_bar->ResumeLayout(false);
			this->pn_co->ResumeLayout(false);
			this->pn_all->ResumeLayout(false);
			this->pn_all->PerformLayout();
			this->pn_add->ResumeLayout(false);
			this->pn_add->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->pn_delete->ResumeLayout(false);
			this->pn_delete->PerformLayout();
			this->pn_search->ResumeLayout(false);
			this->pn_search->PerformLayout();
			this->search_pn2->ResumeLayout(false);
			this->search_pn2->PerformLayout();
			this->pn_update->ResumeLayout(false);
			this->pn_update->PerformLayout();
			this->pn_edit->ResumeLayout(false);
			this->pn_edit->PerformLayout();
			this->pn_fav->ResumeLayout(false);
			this->pn_fav->PerformLayout();
			this->ResumeLayout(false);

		}
		//-----------------......---------------------//
			   //---------Functions--------//
		void erase()//This function for button (erase) in page add contact .
		{
			FNtextbox->Text = "\0";
			LNtextbox->Text = "\0";
			PNtextbox->Text = "\0";
			Etextbox->Text = "\0";
			Jtextbox->Text = "\0";
		}
		void save()//This function for button (save) in page add contact .
		{
			//-------------------save first name--------------------//
			StreamWriter file1("data/FirstName.txt", true);// use true to can add text in file without delete anytext in file. (This is similar to (ios::app)).
			file1.WriteLine(FNtextbox->Text);
			file1.Close();
			//-------------------save last name--------------------//
			StreamWriter file2("data/LastName.txt", true);
			file2.WriteLine(LNtextbox->Text);
			file2.Close();
			//------------------save mobile number----------------//
			StreamWriter file3("data/PhoneNum.txt", true);
			file3.WriteLine(PNtextbox->Text);
			file3.Close();
			//-----------------save Email------------------------//
			StreamWriter file4("data/Email.txt", true);
			file4.WriteLine(Etextbox->Text);
			file4.Close();
			//------------------save Job-------------------------//
			StreamWriter file5("data/Job.txt", true);
			file5.WriteLine(Jtextbox->Text);
			file5.Close();
			//--------------------username save------------------//
			StreamWriter file6("data/username.txt", true);
			file6.WriteLine(FNtextbox->Text + " " + LNtextbox->Text);
			file6.Close();
		}
		int check_phonenum()
		{
			String^ str = PNtextbox->Text;
			std::string x = msclr::interop::marshal_as< std::string >(str);//convert from String System to string std.
			int c = 0;
			for (int i = 0; i < x.length(); i++)//for check if Are there letters?.
			{
				if (x.at(i) >= 48 && x.at(i) <= 64)
				{
					c++;
				}
				else
				{
					break;
				}
			}
			if (x.length() != 11)// check if phone numbers field containing 11 digits.
			{
				return 0;
			}
			else if (c == x.length())//for check if Are there letters?.
			{
				return 1;
			}
			else
			{
				return 2;
			}

		}
		int check_email()
		{
			String^ str = Etextbox->Text;
			std::string x = msclr::interop::marshal_as< std::string >(str);//convert from String System to string std.
			if (x.find("@") <= x.length())
			{
				if (x.find("@") == x.rfind("@"))
				{
					if (x.length() - x.find(".com", x.find("@")) == 4)
					{
						return 0;
					}
					else
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}

		}
		int check_email_in_edit()
		{
			String^ str = Emailtextbox->Text;
			std::string x = msclr::interop::marshal_as< std::string >(str);//convert from String System to string std.
			if (x.find("@") <= x.length())
			{
				if (x.find("@") == x.rfind("@"))
				{
					if (x.length() - x.find(".com", x.find("@")) == 4)
					{
						return 0;
					}
					else
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
		int check_phonenum2()
		{
			std::ifstream file;
			std::string* PHONE_NUM = new std::string[read_count()];
			int c = 1;
			file.open("data/PhoneNum.txt");
			for (int i = 0; i < read_count(); i++)
			{
				getline(file, PHONE_NUM[i]);
			}
			file.close();
			for (int i = 0; i < read_count(); i++)
			{
				String^ str = gcnew String(PHONE_NUM[i].data());
				if (str == PNtextbox->Text)
				{
					c++;
				}
			}
			if (c > 1)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			delete[]PHONE_NUM;
		}
		int check_phonenum_in_edit()
		{
			String^ str = PhoneNtextbox->Text;
			std::string x = msclr::interop::marshal_as< std::string >(str);//convert from String System to string std.
			int c = 0;
			for (int i = 0; i < x.length(); i++)//for check if Are there letters?.
			{
				if (x.at(i) >= 48 && x.at(i) <= 64)
				{
					c++;
				}
				else
				{
					break;
				}
			}
			if (x.length() != 11)// check if phone numbers field containing 11 digits.
			{
				return 0;
			}
			else if (c == x.length())//for check if Are there letters?.
			{
				return 1;
			}
			else
			{
				return 2;
			}
		}
		int check_phonenum2_in_edit()
		{
			std::ifstream file;
			std::string* PHONE_NUM = new std::string[read_count()];
			int c = 1;
			file.open("data/PhoneNum.txt");
			for (int i = 0; i < read_count(); i++)
			{
				getline(file, PHONE_NUM[i]);
			}
			file.close();
			for (int i = 0; i < read_count(); i++)
			{
				String^ str = gcnew String(PHONE_NUM[i].data());
				if (Update_listView->SelectedItems[0]->SubItems[2]->Text == PhoneNtextbox->Text)
				{
					c = 1;
					break;
				}
				else if (str == PhoneNtextbox->Text)
				{
					c++;
				}
			}
			if (c > 1)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			delete[]PHONE_NUM;
		}
		void push(contact c)//stack based linked list
		{
			node* new_node = new node;
			new_node->data = c;
			new_node->next = NULL;
			if (top != NULL)
			{
				new_node->next = top;
				top = new_node;
			}
			else
			{
				top = new_node;
			}
		}
		void Bubble_sort() {
			if (top != NULL)
			{
				node* i, * j;
				contact tmp;
				for (i = top; i->next != NULL; i = i->next) {
					for (j = top; j->next != NULL; j = j->next) {
						if (j->data.username > j->next->data.username) {
							tmp = j->data;
							j->data = j->next->data;
							j->next->data = tmp;
						}
					}
				}
			}
		}
		void count_contacts(int c)// how many Favourite contacts.
		{
			String^ str = Convert::ToString(c);
			StreamWriter file("data/count.txt");
			file.WriteLine(str);
			file.Close();
		}
		void count_FVcontacts(int c)// how many contacts..
		{
			String^ str = Convert::ToString(c);
			StreamWriter file("data/FVcount.txt");
			file.WriteLine(str);
			file.Close();
		}
		int  read_count()
		{
			StreamReader file("data/count.txt");
			String^ str = file.ReadLine();
			file.Close();
			return  Convert::ToInt32(str);
		}
		int  read_count_Favourite()
		{
			StreamReader file("data/FVcount.txt");
			String^ str = file.ReadLine();
			file.Close();
			return  Convert::ToInt32(str);
		}
		void push_data_form_file()// push data from file .here used stack based linked list.
		{
			std::ifstream file, file1, file2, file3, file4, file5;
			file.open("data/FirstName.txt");
			file1.open("data/LastName.txt");
			file2.open("data/PhoneNum.txt");
			file3.open("data/Email.txt");
			file4.open("data/Job.txt");
			file5.open("data/username.txt");
			for (int i = 0; i < read_count(); i++)
			{
				contact c;
				getline(file, c.first_name);
				getline(file1, c.last_name);
				getline(file2, c.phone_num);
				getline(file3, c.email);
				getline(file4, c.Job);
				getline(file5, c.username, '\n');
				push(c);
			}
			file.close();
			file1.close();
			file2.close();
			file3.close();
			file4.close();
			file5.close();
		}
		void ClearItemsFromListview()//Clear All Items from listview.
		{
			listViewItem = gcnew Windows::Forms::ListViewItem("\0");
			All_listView->Items->Clear();
			Delete_listView->Items->Clear();
			Update_listView->Items->Clear();
		}
		void display_in_AllContact_page()// display list from stack in viewlist.
		{
			push_data_form_file();
			Bubble_sort();
			std::string  un, pn, e, j;
			int count = 1;
			while (top != NULL)
			{
				String^ c;
				c = Convert::ToString(count);
				un = top->data.username;
				pn = top->data.phone_num;
				e = top->data.email;
				j = top->data.Job;
				top = top->next;
				//---------------------------//
				String^ str1 = gcnew String(un.data());
				String^ str2 = gcnew String(pn.data());
				String^ str3 = gcnew String(e.data());
				String^ str4 = gcnew String(j.data());
				listViewItem = gcnew Windows::Forms::ListViewItem(c);
				listViewItem->SubItems->Add(str1);
				listViewItem->SubItems->Add(str2);
				listViewItem->SubItems->Add(str3);
				listViewItem->SubItems->Add(str4);
				All_listView->Items->Add(listViewItem);
				count++;
			}

		}
		void display_in_DeleteContact_page()
		{
			{
				push_data_form_file();
				Bubble_sort();
				std::string un, pn, e, j;
				int count = 1;
				while (top != NULL)
				{
					String^ c;
					c = Convert::ToString(count);
					un = top->data.username;
					pn = top->data.phone_num;
					e = top->data.email;
					j = top->data.Job;
					top = top->next;
					//---------------------------//
					String^ str1 = gcnew String(un.data());
					String^ str2 = gcnew String(pn.data());
					String^ str3 = gcnew String(e.data());
					String^ str4 = gcnew String(j.data());
					listViewItem = gcnew Windows::Forms::ListViewItem(c);
					listViewItem->SubItems->Add(str1);
					listViewItem->SubItems->Add(str2);
					listViewItem->SubItems->Add(str3);
					listViewItem->SubItems->Add(str4);
					Delete_listView->Items->Add(listViewItem);
					count++;
				}
			}
		}
		void display_in_SearchContact_page()
		{
			push_data_form_file();
			Bubble_sort();
			std::string un, pn, e, j;
			int count = 1;
			while (top != NULL)
			{
				String^ c;
				c = Convert::ToString(count);
				un = top->data.username;
				pn = top->data.phone_num;
				e = top->data.email;
				j = top->data.Job;
				top = top->next;
				//---------------------------//
				String^ str1 = gcnew String(un.data());
				String^ str2 = gcnew String(pn.data());
				String^ str3 = gcnew String(e.data());
				String^ str4 = gcnew String(j.data());
				listViewItem = gcnew Windows::Forms::ListViewItem(c);
				listViewItem->SubItems->Add(str1);
				listViewItem->SubItems->Add(str2);
				listViewItem->SubItems->Add(str3);
				listViewItem->SubItems->Add(str4);
				searchlistView->Items->Add(listViewItem);
				count++;
			}

		}
		void display_in_UpdateContact_page()
		{
			push_data_form_file();
			Bubble_sort();
			std::string  un, pn, e, j;
			int count = 1;
			while (top != NULL)
			{
				String^ c;
				c = Convert::ToString(count);
				un = top->data.username;
				pn = top->data.phone_num;
				e = top->data.email;
				j = top->data.Job;
				top = top->next;
				//---------------------------//
				String^ str1 = gcnew String(un.data());
				String^ str2 = gcnew String(pn.data());
				String^ str3 = gcnew String(e.data());
				String^ str4 = gcnew String(j.data());
				listViewItem = gcnew Windows::Forms::ListViewItem(c);
				listViewItem->SubItems->Add(str1);
				listViewItem->SubItems->Add(str2);
				listViewItem->SubItems->Add(str3);
				listViewItem->SubItems->Add(str4);
				Update_listView->Items->Add(listViewItem);
				count++;
			}
		}
		void Merge(std::string* a, std::string* b, std::string* c, std::string* d, int low, int high, int mid)
		{
			int i, j, k;
			std::string* temp = new std::string[high - low + 1];
			std::string* temp_mobileNum = new std::string[high - low + 1];
			std::string* temp_Email = new std::string[high - low + 1];
			std::string* temp_Job = new std::string[high - low + 1];
			i = low;
			k = 0;
			j = mid + 1;

			while (i <= mid && j <= high)
			{
				if (a[i] < a[j])
				{
					temp[k] = a[i];
					temp_mobileNum[k] = b[i];
					temp_Email[k] = c[i];
					temp_Job[k] = d[i];
					k++;
					i++;
				}
				else
				{
					temp[k] = a[j];
					temp_mobileNum[k] = b[j];
					temp_Email[k] = c[j];
					temp_Job[k] = d[j];
					k++;
					j++;
				}
			}

			while (i <= mid)
			{
				temp[k] = a[i];
				temp_mobileNum[k] = b[i];
				temp_Email[k] = c[i];
				temp_Job[k] = d[i];
				k++;
				i++;
			}

			while (j <= high)
			{
				temp[k] = a[j];
				temp_mobileNum[k] = b[j];
				temp_Email[k] = c[j];
				temp_Job[k] = d[j];
				k++;
				j++;
			}

			for (i = low; i <= high; i++)
			{
				a[i] = temp[i - low];
				b[i] = temp_mobileNum[i - low];
				c[i] = temp_Email[i - low];
				d[i] = temp_Job[i - low];
			}
		}
		void MergeSort(std::string* a, std::string* b, std::string* c, std::string* d, int low, int high)
		{
			int mid;
			if (low < high)
			{
				mid = (low + high) / 2;
				MergeSort(a, b, c, d, low, mid);
				MergeSort(a, b, c, d, mid + 1, high);
				Merge(a, b, c, d, low, high, mid);
			}
		}
		void display_in_FavouritesContact_page()
		{

			std::ifstream file, file1, file2, file3, file4;
			std::string* USERNAME = new std::string[read_count()];
			std::string* MOBILENUM = new std::string[read_count()];
			std::string* EMAIL = new std::string[read_count()];
			std::string* JOB = new std::string[read_count()];
			//---------------------------//
			file.open("data/username.txt");
			file2.open("data/PhoneNum.txt");
			file3.open("data/Email.txt");
			file4.open("data/Job.txt");
			//--------------------------//
			for (int i = 0; i < read_count(); i++)
			{
				getline(file, USERNAME[i]);
				getline(file2, MOBILENUM[i]);
				getline(file3, EMAIL[i]);
				getline(file4, JOB[i]);
			}
			//--------------------------//
			file.close();
			file1.close();
			file2.close();
			file3.close();
			file4.close();
			//------------------------//
			std::ifstream file6;
			std::string* CHECKPHONENUM = new std::string[read_count_Favourite()];
			file6.open("data/Favourite.txt");
			for (int i = 0; i < read_count_Favourite(); i++)
			{
				getline(file6, CHECKPHONENUM[i]);
			}
			file6.close();
			//------------------------//
			int count = 1;
			//-----------------------//
			MergeSort(USERNAME, MOBILENUM, EMAIL, JOB, 0, (read_count() - 1));
			//-----------------------//
			for (int i = 0; i < read_count(); i++)
			{
				for (int j = 0; j < read_count_Favourite(); j++)
				{
					String^ c = Convert::ToString(count);
					if (MOBILENUM[i] == CHECKPHONENUM[j])
					{
						String^ str1 = gcnew String((USERNAME[i]).data());
						String^ str2 = gcnew String(MOBILENUM[i].data());
						String^ str3 = gcnew String(EMAIL[i].data());
						String^ str4 = gcnew String(JOB[i].data());
						listViewItem = gcnew Windows::Forms::ListViewItem(c);
						listViewItem->SubItems->Add(str1);
						listViewItem->SubItems->Add(str2);
						listViewItem->SubItems->Add(str3);
						listViewItem->SubItems->Add(str4);
						FVlistView->Items->Add(listViewItem);
						count++;
					}
					else
					{
						continue;
					}
				}
			}
			delete[]USERNAME;
			delete[]MOBILENUM;
			delete[]EMAIL;
			delete[]JOB;

		}
		int check_Phonenum_in_Favourite()
		{
			int check = 0;
			std::string* ph = new std::string[read_count_Favourite()];
			//-------------------------------------------//
			std::ifstream file;
			file.open("data/Favourite.txt");
			//------------------------------------//
			for (int i = 0; i < read_count_Favourite(); i++)
			{
				getline(file, ph[i]);
			}
			file.close();
			//-----------------------------------//
			for (int i = 0; i < read_count_Favourite(); i++)
			{
				String^ str = gcnew String(ph[i].data());
				if (All_listView->SelectedItems[0]->SubItems[2]->Text == str)
				{
					check++;
				}
				else
				{
					continue;
				}
			}
			delete[]ph;
			if (check == 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		void save_edit()
		{
			std::ifstream file, file1, file2, file3, file4, file5, file15;
			std::string* FN = new std::string[read_count()];
			std::string* LN = new std::string[read_count()];
			std::string* un = new std::string[read_count()];
			std::string* PN = new std::string[read_count()];
			std::string* E = new std::string[read_count()];
			std::string* J = new std::string[read_count()];
			std::string* FV = new std::string[read_count_Favourite()];
			std::string check_phone_num = msclr::interop::marshal_as<std::string>(Update_listView->SelectedItems[0]->SubItems[2]->Text);
			std::string firstN = msclr::interop::marshal_as<std::string>(FirstNtextbox->Text);
			std::string lastN = msclr::interop::marshal_as<std::string>(LastNtextbox->Text);
			std::string UserN = msclr::interop::marshal_as<std::string>(FirstNtextbox->Text + " " + LastNtextbox->Text);
			std::string phone = msclr::interop::marshal_as<std::string>(PhoneNtextbox->Text);
			std::string email = msclr::interop::marshal_as<std::string>(Emailtextbox->Text);
			std::string job = msclr::interop::marshal_as<std::string>(Jobtextbox->Text);

			//-----------------open file-------------------------------//
			file.open("data/FirstName.txt");
			file1.open("data/LastName.txt");
			file2.open("data/PhoneNum.txt");
			file3.open("data/Email.txt");
			file4.open("data/Job.txt");
			file5.open("data/Favourite.txt");
			file15.open("data/username.txt");
			//--------------Read From file---------------------------//
			for (int i = 0; i < read_count(); i++)
			{
				getline(file, FN[i]);
				getline(file1, LN[i]);
				getline(file2, PN[i]);
				getline(file3, E[i]);
				getline(file4, J[i]);
				getline(file15, un[i], '\n');
			}
			for (int i = 0; i < read_count_Favourite(); i++)
			{
				getline(file5, FV[i]);
			}
			//-----------------close file-------------------------//
			file.close();
			file1.close();
			file2.close();
			file3.close();
			file4.close();
			file5.close();
			file15.close();
			//---------------------------------------------------//
			std::ofstream file6, file7, file8, file9, file10, file11, file16;
			//------------------open file--------------------------//
			file6.open("data/demo.txt");
			file7.open("data/demo1.txt");
			file8.open("data/demo2.txt");
			file9.open("data/demo3.txt");
			file10.open("data/demo4.txt");
			file11.open("data/demo5.txt");
			file16.open("data/demo6.txt");
			//----------------write in file----------------------//
			for (int i = 0; i < read_count(); i++)
			{
				if (PN[i] == check_phone_num)
				{
					file6 << firstN << std::endl;
					file7 << lastN << std::endl;
					file8 << phone << std::endl;
					file9 << email << std::endl;
					file10 << job << std::endl;
					file16 << UserN << std::endl;
				}
				else
				{
					file6 << FN[i] << std::endl;
					file7 << LN[i] << std::endl;
					file8 << PN[i] << std::endl;
					file9 << E[i] << std::endl;
					file10 << J[i] << std::endl;
					file16 << un[i] << std::endl;
				}
			}
			for (int i = 0; i < read_count_Favourite(); i++)
			{
				if (FV[i] == check_phone_num)
				{
					file11 << phone << std::endl;
				}
				else
				{
					file11 << FV[i] << std::endl;
				}
			}
			//------------------close file----------------------//
			file6.close();
			file7.close();
			file8.close();
			file9.close();
			file10.close();
			file11.close();
			file16.close();
			//-----------------remove file------------------------//
			remove("data/FirstName.txt");
			remove("data/username.txt");
			remove("data/LastName.txt");
			remove("data/PhoneNum.txt");
			remove("data/Email.txt");
			remove("data/Job.txt");
			remove("data/Favourite.txt");
			//------------------rename file-----------------------//
			rename("data/demo.txt", "data/FirstName.txt");
			rename("data/demo1.txt", "data/LastName.txt");
			rename("data/demo2.txt", "data/PhoneNum.txt");
			rename("data/demo3.txt", "data/Email.txt");
			rename("data/demo4.txt", "data/Job.txt");
			rename("data/demo5.txt", "data/Favourite.txt");
			rename("data/demo6.txt", "data/username.txt");
			//---------------------------------------------------//
			delete[]FN;
			delete[]LN;
			delete[]PN;
			delete[]E;
			delete[]J;
			delete[]FV;
			delete[]un;
		}
		void liner_search1()
		{
			push_data_form_file();
			Bubble_sort();
			std::string  fn, ln, un, pn, e, j;
			int count = 1;
			while (top != NULL)
			{
				String^ c;
				c = Convert::ToString(count);
				fn = top->data.first_name;
				ln = top->data.last_name;
				un = top->data.username;
				pn = top->data.phone_num;
				e = top->data.email;
				j = top->data.Job;
				top = top->next;
				//---------------------------//
				String^ str = gcnew String(fn.data());
				String^ str0 = gcnew String(ln.data());
				String^ str1 = gcnew String(un.data());
				String^ str2 = gcnew String(pn.data());
				String^ str3 = gcnew String(e.data());
				String^ str4 = gcnew String(j.data());
				if (search1textbox->Text == str || search1textbox->Text == str0 || search1textbox->Text == str1 || search1textbox->Text == str2 || search1textbox->Text == str3 || search1textbox->Text == str4)
				{
					listViewItem = gcnew Windows::Forms::ListViewItem(c);
					listViewItem->SubItems->Add(str1);
					listViewItem->SubItems->Add(str2);
					listViewItem->SubItems->Add(str3);
					listViewItem->SubItems->Add(str4);
					searchlistviewdemo->Items->Add(listViewItem);
				}
				count++;
			}
		}
		//------------------------//

#pragma endregion
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
//--------------------------------panel------------------------------------------------------//
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void pn_title_bar_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void pn_all_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
	{
		if (All_listView->Items->Count > 0)
		{
			label19->Text = "\0";
		}
		else
		{
			label19->Text = "Not found contacts,please add contacts for display";
		}
		if (count_click_btn == 0)
		{
			display_in_AllContact_page();
			count_click_btn += 2;
		}
		if (All_listView->Items->Count > 0)
		{
			label22->Text = "Please click on the contact you want to add to the favourites, then press the button (Add to favourites)";
		}
		else
		{
			label22->Text = "\0";
		}
	}
private: System::Void pn_delete_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) 
	{
		if (Delete_listView->Items->Count > 0)
		{
			label18->Text = "\0";
			deletelabel->Text = "Please click on the contact you want to delete and then click on the (Delete) button";
		}
		else
		{
			deletelabel->Text = "\0";
			label18->Text = "Not found contacts to delete";
		}
	}
private: System::Void pn_fav_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) 
{
		if (FVlistView->Items->Count > 0)
		{
			label21->Text = "\0";
			RemoveLb->Text = "Please click on the contact you want to remove, then press the button (Remove from favorites)";
		}
		else
		{
			RemoveLb->Text = "\0";
			label21->Text = "Not found contacts to remove";
		}
}
private: System::Void pn_update_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) 
{

	if (Update_listView->Items->Count > 0)
	{
		label20->Text = "\0";
		updateLb->Text = "Please click on the contact you want to Edit, then press the button (Edit contact)";
	}
	else
	{
		updateLb->Text = "\0";
		label20->Text = "Not found contacts to edit";
	}
}
private: System::Void pn_edit_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {


}
private: System::Void pn_search_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
//------------------------------------------------------------------------------------------//
//--------------------------------Button Click------------------------------//
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) //add contact button.
{
	
	this->button7->BackColor = System::Drawing::Color::DarkOrange;
	this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	pn_add->BringToFront();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e)//delete button
{
	this->button8->BackColor = System::Drawing::Color::DarkOrange;
	this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	pn_delete->BringToFront();
	if (count_click_btn_delete == 0)
	{
		display_in_DeleteContact_page();
		count_click_btn_delete++;
	}
	
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)//all contact button
{
	this->button5->BackColor = System::Drawing::Color::DarkOrange;
	this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	pn_all->BringToFront();
	if (count_click_btn==1)
	{
		display_in_AllContact_page();
		count_click_btn++;
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e)//search button
{
	this->button9->BackColor = System::Drawing::Color::DarkOrange;
	this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	pn_search->BringToFront();
	search_pn2->Hide();
	searchdemoo_btn->Hide();
	if (count_click_search_btn == 0)
	{
		display_in_SearchContact_page();
		count_click_search_btn++;
	}
	if (searchlistView->Items->Count > 0)
	{
		label28->Text = "";
		search_lb->Text = "Type in the search field and press the (search) button";
	}
	else
	{
		label28->Text = "There are no contacts to search";
		search_lb->Text = "";
	}
	
	
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) //update button
{
	this->button10->BackColor = System::Drawing::Color::DarkOrange;
	this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	
	pn_update->BringToFront();
	if (count_click_btn_update == 0)
	{
		display_in_UpdateContact_page();
		count_click_btn_update++;
	}
	pn_edit->Hide();//hide edit panel.
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) //Favourites button.
{
	this->button4->BackColor = System::Drawing::Color::DarkOrange;
	this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));
	pn_fav->BringToFront();
	if (count_click_btn_favourite == 0)
	{
		FVlistView->Items->Clear();
		display_in_FavouritesContact_page();
		count_click_btn_favourite++;
	}
	
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)//close button.
{
	Environment::Exit(0);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) //Minimized button.
{
	this->WindowState = FormWindowState::Minimized;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)//Maximized button
{
	if (this->WindowState == FormWindowState::Normal)
	{
		this->WindowState = FormWindowState::Maximized;
	}
	else
	{
		this->WindowState = FormWindowState::Normal;
	}
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e)//erase button 
{
	erase();
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e)//save_button
{
	//--------------check if textboxs empty or no----------------//
	if (FNtextbox->Text != "" && LNtextbox->Text != "" && PNtextbox->Text != "" && Etextbox->Text != "" && Jtextbox->Text != "")
	{
		if (check_phonenum() == 0)
		{
			MessageBox::Show("Please enter an 11-digit phone number", "Error Message");
		}
		else if (check_phonenum() == 2)
		{
			MessageBox::Show("Please enter numbers only in the Phone number field", "Error Message");
		}
		else if (check_phonenum2() == 0)
		{
			MessageBox::Show("This phone number is already exists,please enter another phone number", "Error Message");
		}
		else if (check_email() == 1)
		{
			MessageBox::Show("The email must contain only one(@)sign and must contain(.com)at the end of the sentence. for example(example@example.com)", "Error Message");
		}
		else
		{
			if (MessageBox::Show("Do you want to save the contact ?", "Save Message", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			{
				save();
				erase();
				MessageBox::Show("Contact saved successfully", "Successfull Message");
				ClearItemsFromListview();
				searchlistView->Items->Clear();
				count_click_btn = 1;
				count_click_btn_delete = 0;
				count_click_btn_update = 0;
				count_click_search_btn = 0;
				count_contacts(read_count() + 1);
			}
			else
			{
				erase();
			}
		}

	}
	else
	{
		MessageBox::Show(Error_message_If_Empty_Textboxs, "Error Message");
	}

	
}
private: System::Void delete_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Delete_listView->SelectedItems->Count > 0)
	{
		if (MessageBox::Show("Are you sure you want to delete the contact?", "Confirmation Message", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			//---------------------------------------//
			String^ lb = Delete_listView->SelectedItems[0]->SubItems[2]->Text;
			std::string x = msclr::interop::marshal_as< std::string >(lb);//convert from String System to string std.
			//-------------------------------------//
			std::ifstream file1, file2, file3, file4, file5,file0,file15;
			file1.open("data/FirstName.txt");
			file2.open("data/LastName.txt");
			file3.open("data/PhoneNum.txt");
			file4.open("data/Email.txt");
			file5.open("data/Job.txt");
			file0.open("data/Favourite.txt");
			file15.open("data/username.txt");
			//------------------------------------//
			std::string* FN = new std::string[read_count()];
			std::string* LN = new std::string[read_count()];
			std::string* PN = new std::string[read_count()];
			std::string* E = new std::string[read_count()];
			std::string* J = new std::string[read_count()];
			std::string* un = new std::string[read_count()];
			std::string* P = new std::string[read_count_Favourite()];
			//-----------------------------------//
			for (int i = 0; i < read_count(); i++)//read data from files
			{
				getline(file1, FN[i]);
				getline(file2 , LN[i]);
				getline(file3, PN[i]);
				getline(file4 , E[i]);
				getline(file5 , J[i]);
				getline(file15, un[i],'\n');
			}
			for (int i = 0; i < read_count_Favourite(); i++)
			{
				getline(file0, P[i]);
			}
			//------------------------------------//
			file1.close();
			file2.close();
			file3.close();
			file4.close();
			file5.close();
			file0.close();
			file15.close();
			//-----------------------------------//
			std::ofstream file6, file7, file8, file9, file10,file11,file16;
			file6.open("data/demo_FirstName.txt", std::ios::app);
			file7.open("data/demo_LastName.txt", std::ios::app);
			file8.open("data/demo_PhoneNum.txt", std::ios::app);
			file9.open("data/demo_Email.txt", std::ios::app);
			file10.open("data/demo_Job.txt", std::ios::app);
			file11.open("data/demo_Favourite.txt",std::ios::app);
			file16.open("data/demo_username.txt", std::ios::app);
			//----------------------------------------//
			for (int i = 0; i < read_count(); i++)
			{
				if (x != PN[i] && PN[i].length() != 0)
				{
					file6 << FN[i] << std::endl;
					file7 << LN[i] << std::endl;
					file8 << PN[i] << std::endl;
					file9 << E[i] << std::endl;
					file10 << J[i] << std::endl;
					file16 << un[i] << std::endl;
					
				}
			}
			//-------------------------------------------//
			for (int i = 0; i < read_count_Favourite(); i++)
			{
				if (x != P[i] && P[i].length() != 0)
				{
					file11 << P[i] << std::endl;
				}
			}
			//--------------------------//
				
			count_contacts(read_count() - 1);
			for (int i = 0; i < read_count_Favourite(); i++)
			{
				if (x == P[i])
				{
					if (read_count_Favourite() != 0)
					{
						count_FVcontacts(read_count_Favourite() - 1);
					}
				}
			}
			//---------------------------------///
			//---------------------------//
			file6.close();
			file7.close();
			file8.close();
			file9.close();
			file10.close();
			file11.close();
			file16.close();
			//-------------------------------------//
			remove("data/FirstName.txt");
			remove("data/LastName.txt");
			remove("data/username.txt");
			remove("data/PhoneNum.txt");
			remove("data/Email.txt");
			remove("data/Job.txt");
			remove("data/Favourite.txt");
			rename("data/demo_FirstName.txt", "data/FirstName.txt");
			rename("data/demo_LastName.txt", "data/LastName.txt");
			rename("data/demo_username.txt", "data/username.txt");
			rename("data/demo_PhoneNum.txt", "data/PhoneNum.txt");
			rename("data/demo_Email.txt", "data/Email.txt");
			rename("data/demo_Job.txt", "data/Job.txt");
			rename("data/demo_Favourite.txt", "data/Favourite.txt");
			
			//----------------------------------///
			ClearItemsFromListview();
			FVlistView->Items->Clear();
			searchlistView->Items->Clear();
			count_click_btn = 1;
			count_click_btn_update = 0;
			count_click_btn_favourite = 0;
			count_click_search_btn = 0;
			display_in_DeleteContact_page();
			MessageBox::Show("Contact has been deleted successfully", "Success Message");
			//----------------------------------------//
			delete[]FN;
			delete[]LN;
			delete[]PN;
			delete[]E;
			delete[]J;
			delete[]P;
			delete[]un;
			//-----------------------------------------//
		}
	}
	else if (Delete_listView->Items->Count == 0)
	{
		MessageBox::Show("There are no contacts to delete", "Error Message");
	}
	else
	{
			MessageBox::Show("Please click on the contact you want to delete", "Error Message");
	}
	
	if (Delete_listView->Items->Count > 0)
	{
		label18->Text = "\0";
		deletelabel->Text = "Please click on the contact you want to delete and then click on the delete button";
	}
	else
	{
		deletelabel->Text = "\0";
		label18->Text = "Not found contacts to delete";
	}
	
	  }
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e)//Edit button
{

	if (Update_listView->Items->Count == 0)
	{
		MessageBox::Show("There are no contacts to edit", "Error Message");
	}
	else
	{

		if (Update_listView->SelectedItems->Count > 0)
		{
			pn_edit->Show();
			String^ un = (Update_listView->SelectedItems[0]->SubItems[1]->Text);
			std::string UserName = msclr::interop::marshal_as<std::string>(un);
			int c = UserName.length();
			int c2 = UserName.find(" ");
			int c4 = UserName.find(" ") + 1;
			std::string h;
			std::string b;
			int d = 0;
			for (int i = c4; i < c; i++)
			{

				h = UserName.at(i);
				b = b.append(h);
			}
			std::string y = b;
			std::string x = UserName.erase(c2);
			String^ F = gcnew String(x.data());
			String^ L = gcnew String(y.data());
			String^ p = (Update_listView->SelectedItems[0]->SubItems[2]->Text);
			String^ em = (Update_listView->SelectedItems[0]->SubItems[3]->Text);
			String^ j = (Update_listView->SelectedItems[0]->SubItems[4]->Text);
			FirstNtextbox->Text = F;
			LastNtextbox->Text = L;
			PhoneNtextbox->Text = p;
			Emailtextbox->Text = em;
			Jobtextbox->Text = j;
		}
		else
		{
			MessageBox::Show("Please click on the contact you want to Edit", "Error Message");
		}
	}
}
private: System::Void addfavouritebtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (All_listView->Items->Count == 0)
	{
		MessageBox::Show("There are no contacts to add to favourites", "Error Message");
	}

	else
	{
		if (All_listView->SelectedItems->Count == 0)
		{
			MessageBox::Show("Please click on the contact you want to add to favourites", "Error Message");
		}
		else
		{
			if (check_Phonenum_in_Favourite() == 1)
			{
				if (MessageBox::Show("Do you want to add this contact to favourites?", "Confirmation Message", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
				{
					StreamWriter file("data/Favourite.txt", true);
					file.WriteLine(All_listView->SelectedItems[0]->SubItems[2]->Text);
					count_FVcontacts(read_count_Favourite() + 1);
					file.Close();
					FVlistView->Items->Clear();
					count_click_btn_favourite = 0;
					MessageBox::Show("Successfully added to favourites", "Success Message");
				}
			}
			else
			{
				MessageBox::Show("This contact is already in favourites", "Error Message");
			}
		}
	}
}
private: System::Void Removebtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (FVlistView->Items->Count == 0)
	{
		MessageBox::Show("There are no contacts to remove", "Error Message");
	}
	else
	{
		if (FVlistView->SelectedItems->Count == 0)
		{
			MessageBox::Show("Please click on the contact you want to remove", "Error Message");
		}
		else
		{
			if (MessageBox::Show("Are you sure you removed a contact?", "Confirmation Message", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			{
				String^ lb = FVlistView->SelectedItems[0]->SubItems[2]->Text;
				std::string PHONE = msclr::interop::marshal_as<std::string>(lb);//convert from String System to string std.
				std::string* PHONEnum = new std::string[read_count_Favourite()];
				std::ifstream file;
				std::ofstream file1;
				//--------------------------------------------------------------//
				file.open("data/Favourite.txt");
				for (int i = 0; i < read_count_Favourite(); i++)
				{
					getline(file, PHONEnum[i]);
				}
				file.close();
				//--------------------------------------------------------------//
				for (int i = 0; i < read_count_Favourite(); i++)
				{
					if (PHONE == PHONEnum[i])
					{
						PHONEnum[i] = "";
					}
				}
				//-------------------------------------------------------------//
				file1.open("data/demofavourite.txt", std::ios::app);
				for (int i = 0; i < read_count_Favourite(); i++)
				{
					if (PHONE != PHONEnum[i] && PHONEnum[i].length() != 0)
					{
						file1 << PHONEnum[i] << std::endl;
					}
				}
				file1.close();
				//-------------------------------------------------------------//
				remove("data/Favourite.txt");
				rename("data/demofavourite.txt", "data/Favourite.txt");
				//-------------------------------------------------------------//
				if (read_count_Favourite() != 0)
				{
					count_FVcontacts(read_count_Favourite() - 1);
					FVlistView->Items->Clear();
					display_in_FavouritesContact_page();
					count_click_btn_favourite = 0;
					MessageBox::Show("The contact has been removed from the favourites successfully", "Success Message");
				}
				//-------------------------------------------------------------//
				delete[]PHONEnum;

				if (FVlistView->Items->Count > 0)
				{
					label21->Text = "\0";
					RemoveLb->Text = "Please click on the contact you want to remove, then press the button (Remove from favorites)";
				}
				else
				{
					RemoveLb->Text = "\0";
					label21->Text = "Not found contacts to remove";
				}
			}
		}
	}
}
private: System::Void close_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	pn_edit->Hide();
}
private: System::Void save_btn2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (FirstNtextbox->Text != "" && LastNtextbox->Text != "" && PhoneNtextbox->Text != "" && Emailtextbox->Text != "" && Jobtextbox->Text != "")
	{
		if (check_phonenum_in_edit() == 0)
		{
			MessageBox::Show("Please enter an 11-digit phone number", "Error Message");
		}
		else if (check_phonenum_in_edit() == 2)
		{
			MessageBox::Show("Please enter numbers only in the Phone number field", "Error Message");
		}
		else if (check_phonenum2_in_edit() == 0)
		{
			MessageBox::Show("This phone number is already exists,please enter another phone number", "Error Message");
		}
		else if (check_email_in_edit() == 1)
		{
			MessageBox::Show("The email must contain only one(@)sign and must contain(.com)at the end of the sentence. for example(example@example.com)", "Error Message");
		}
		else
		{
			if (MessageBox::Show("Do you want to add this contact to favourites?", "Confirmation Message", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			{

				save_edit();
				MessageBox::Show("Saved successfully", "success message");
				ClearItemsFromListview();
				FVlistView->Items->Clear();
				searchlistView->Items->Clear();
				display_in_UpdateContact_page();
				count_click_btn = 1;
				count_click_btn_delete = 0;
				count_click_btn_favourite = 0;
				count_click_search_btn = 0;
				pn_edit->Hide();

			}
		}
	}
	else
	{
		MessageBox::Show("Please fill in all fields", "Error Message");
	}



}
private: System::Void search1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (search1textbox->Text == "")
	{
		MessageBox::Show("Please type in the search field", "Error Message");
	}
	else
	{
		if (count_click_search1_btn == 0)
		{
			liner_search1();
			search_pn2->Show();
			search1->Hide();
			searchdemoo_btn->Show();
			if (searchlistviewdemo->Items->Count == 0)
			{
				label27->Text = "This contact is not found";
			}
			count_click_search1_btn++;
		}
		else if (count_click_search1_btn == 1)
		{
			search1textbox->Text = "";
		}


	}
}
private: System::Void searchdemoo_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	search_pn2->Hide();
	searchlistviewdemo->Items->Clear();
	searchdemoo_btn->Hide();
	search1->Show();
	count_click_search1_btn = 0;
	label27->Text = "";
}
//-----------------------------------------------------------------------------------------------------//
//--------------------------------------label---------------------------------------------------------//
private: System::Void deletelabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label20_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
//---------------------------------------------------------------------------------------------------//
//---------------------------------------listView---------------------------------------------------//
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void Delete_listView_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {


}
//------------------------------------------------------------------------------------------------//
//----------------------------------------TextBox------------------------------------------------//
private: System::Void PNtextbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Etextbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void search1textbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (search1textbox->Text == "")
	{
		search_pn2->Hide();
		searchlistviewdemo->Items->Clear();
		searchdemoo_btn->Hide();
		search1->Show();
		count_click_search1_btn=0;
		label27->Text = "";
	}
}
private: System::Void search1textbox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter)
	{
		search1_Click(sender, e);
	}
}
private: System::Void FNtextbox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter)
	{
		SendKeys::Send("{TAB}");
	}
}
private: System::Void LNtextbox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter)
	{
		SendKeys::Send("{TAB}");
	}
}
private: System::Void PNtextbox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter)
	{
		SendKeys::Send("{TAB}");
	}
}
private: System::Void Etextbox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter)
	{
		SendKeys::Send("{TAB}");
	}
}
private: System::Void Jtextbox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter)
	{
		button12_Click(sender, e);
	}
}
private: System::Void FirstNtextbox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode==Keys::Enter)
	{
		save_btn2_Click(sender, e);
	}
}
private: System::Void LastNtextbox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter)
	{
		save_btn2_Click(sender, e);
	}
}
private: System::Void PhoneNtextbox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter)
	{
		save_btn2_Click(sender, e);
	}
}
private: System::Void Emailtextbox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter)
	{
		save_btn2_Click(sender, e);
	}
}
private: System::Void Jobtextbox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter)
	{
		save_btn2_Click(sender, e);
	}
}
//---------------------------------------------------------------------------------------------//
};
}
