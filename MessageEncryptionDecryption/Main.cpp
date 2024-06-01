#include<iostream>
#include<string>
using namespace std;

static int id_count = 1;

int Interger_of_Character(char& data)
{
	if (data == 'A')
		return 0;
	else if (data == 'B')
		return 1;
	else if (data == 'C')
		return 2;
	else if (data == 'D')
		return 3;
	else if (data == 'E')
		return 4;
	else if (data == 'F')
		return 5;
	else if (data == 'G')
		return 6;
	else if (data == 'H')
		return 7;
	else if (data == 'I')
		return 8;
	else if (data == 'J')
		return 9;
	else if (data == 'K')
		return 10;
	else if (data == 'L')
		return 11;
	else if (data == 'M')
		return 12;
	else if (data == 'N')
		return 13;
	else if (data == 'O')
		return 14;
	else if (data == 'P')
		return 15;
	else if (data == 'Q')
		return 16;
	else if (data == 'R')
		return 17;
	else if (data == 'S')
		return 18;
	else if (data == 'T')
		return 19;
	else if (data == 'U')
		return 20;
	else if (data == 'V')
		return 21;
	else if (data == 'W')
		return 22;
	else if (data == 'X')
		return 23;
	else if (data == 'Y')
		return 24;
	else if (data == 'Z')
		return 25;
	else if (data == 'a')
		return 26;
	else if (data == 'b')
		return 27;
	else if (data == 'c')
		return 28;
	else if (data == 'd')
		return 29;
	else if (data == 'e')
		return 30;
	else if (data == 'f')
		return 31;
	else if (data == 'g')
		return 32;
	else if (data == 'h')
		return 33;
	else if (data == 'i')
		return 34;
	else if (data == 'j')
		return 35;
	else if (data == 'k')
		return 36;
	else if (data == 'l')
		return 37;
	else if (data == 'm')
		return 38;
	else if (data == 'n')
		return 39;
	else if (data == 'o')
		return 40;
	else if (data == 'p')
		return 41;
	else if (data == 'q')
		return 42;
	else if (data == 'r')
		return 43;
	else if (data == 's')
		return 44;
	else if (data == 't')
		return 45;
	else if (data == 'u')
		return 46;
	else if (data == 'v')
		return 47;
	else if (data == 'w')
		return 48;
	else if (data == 'x')
		return 49;
	else if (data == 'y')
		return 50;
	else if (data == 'z')
		return 51;
	else if (data == '0')
		return 52;
	else if (data == '1')
		return 53;
	else if (data == '2')
		return 54;
	else if (data == '3')
		return 55;
	else if (data == '4')
		return 56;
	else if (data == '5')
		return 57;
	else if (data == '6')
		return 58;
	else if (data == '7')
		return 59;
	else if (data == '8')
		return 60;
	else if (data == '9')
		return 61;
}

char character_of_integer(int temp)
{
	if (temp == 0)
		return 'A';
	else if (temp == 1)
		return 'B';
	else if (temp == 2)
		return 'C';
	else if (temp == 3)
		return 'D';
	else if (temp == 4)
		return 'E';
	else if (temp == 5)
		return 'F';
	else if (temp == 6)
		return 'G';
	else if (temp == 7)
		return 'H';
	else if (temp == 8)
		return 'I';
	else if (temp == 9)
		return 'J';
	else if (temp == 10)
		return 'K';
	else if (temp == 11)
		return 'L';
	else if (temp == 12)
		return 'M';
	else if (temp == 13)
		return 'N';
	else if (temp == 14)
		return 'O';
	else if (temp == 15)
		return 'P';
	else if (temp == 16)
		return 'Q';
	else if (temp == 17)
		return 'R';
	else if (temp == 18)
		return 'S';
	else if (temp == 19)
		return 'T';
	else if (temp == 20)
		return 'U';
	else if (temp == 21)
		return 'V';
	else if (temp == 22)
		return 'W';
	else if (temp == 23)
		return 'X';
	else if (temp == 24)
		return 'Y';
	else if (temp == 25)
		return 'Z';
	else if (temp == 26)
		return 'a';
	else if (temp == 27)
		return 'b';
	else if (temp == 28)
		return 'c';
	else if (temp == 29)
		return 'd';
	else if (temp == 30)
		return 'e';
	else if (temp == 31)
		return 'f';
	else if (temp == 32)
		return 'g';
	else if (temp == 33)
		return 'h';
	else if (temp == 34)
		return 'i';
	else if (temp == 35)
		return 'j';
	else if (temp == 36)
		return 'k';
	else if (temp == 37)
		return 'l';
	else if (temp == 38)
		return 'm';
	else if (temp == 39)
		return 'n';
	else if (temp == 40)
		return 'o';
	else if (temp == 41)
		return 'p';
	else if (temp == 42)
		return 'q';
	else if (temp == 43)
		return 'r';
	else if (temp == 44)
		return 's';
	else if (temp == 45)
		return 't';
	else if (temp == 46)
		return 'u';
	else if (temp == 47)
		return 'v';
	else if (temp == 48)
		return 'w';
	else if (temp == 49)
		return 'x';
	else if (temp == 50)
		return 'y';
	else if (temp == 51)
		return 'z';
	else if (temp == 52)
		return '0';
	else if (temp == 53)
		return '1';
	else if (temp == 54)
		return '2';
	else if (temp == 55)
		return '3';
	else if (temp == 56)
		return '4';
	else if (temp == 57)
		return '5';
	else if (temp == 58)
		return '6';
	else if (temp == 59)
		return '7';
	else if (temp == 60)
		return '8';
	else if (temp == 61)
		return '9';
}

char Encryption(int& data, int& key)
{
	int temp = (data + key) % 62;

	return character_of_integer(temp);
}

char Decrytion(int& data, int& key)
{
	int temp = data - key;

	while (temp < 0)
	{
		temp = temp + 62;
	}
	temp = temp % 62;

	return character_of_integer(temp);
}

class Message
{
public:
	int key;
	string Data;
	int sender_id;
	int reciever_id;
	Message* next;
	Message()
	{
		next = NULL;
	}
};

class Queue
{
public:
	Message* Head;
	Message* Tail;
	Queue()
	{
		Head = NULL;
		Tail = NULL;
	}

	void Enqueue(int& key, int& s_id, int& r_id, string& data)
	{
		Message* temp = new Message();
		temp->Data = data;
		temp->reciever_id = r_id;
		temp->sender_id = s_id;
		temp->key = key;

		if (Head == NULL)
			Head = temp;
		else
			Tail->next = temp;

		Tail = temp;
	}
};

class Tree_Node
{

public:
	int id;
	Queue Sent_Data;
	Queue Recieved_Data;

	int balance_factor;
	Tree_Node* left;
	Tree_Node* right;


	Tree_Node(int id)
	{
		this->id = id;
		balance_factor = 0;
		left = NULL;
		right = NULL;
	}
};

class AVL_Tree
{
	int get_height(Tree_Node* temp)
	{
		if (temp == NULL)
		{
			return 0;
		}
		if (temp != NULL)
		{
			int left_height = get_height(temp->left);
			int right_height = get_height(temp->right);
			return max(left_height, right_height) + 1;
		}
	}

	void RR_rotation(Tree_Node* temp)
	{
		bool flag = false;
		Tree_Node* temp1 = NULL;

		if (temp->right != NULL)
			temp1 = temp->right->left;

		temp->right->left = temp;
		if (temp == root)
		{
			root = temp->right;
			flag = true;
		}

		if (!flag)
		{
			Tree_Node* parent = root;
			while (parent != NULL)
			{
				if (parent->right == temp)
				{
					parent->right = temp->right;
					break;
				}
				else if (parent->left == temp)
				{
					parent->left = temp->right;
					break;
				}
				else if (temp->id < parent->id)
					parent = parent->left;
				else if (temp->id > parent->id)
					parent = parent->right;
			}
		}
		temp->right = temp1;
	}

	void LL_rotation(Tree_Node* temp)
	{
		bool flag = false;
		Tree_Node* temp1 = NULL;

		if (temp->left != NULL)
			temp1 = temp->left->right;

		temp->left->right = temp;
		if (temp == root)
		{
			root = temp->left;
			flag = true;
		}

		if (!flag)
		{
			Tree_Node* parent = root;
			while (parent != NULL)
			{
				if (parent->right == temp)
				{
					parent->right = temp->left;
					break;
				}
				else if (parent->left == temp)
				{
					parent->left = temp->left;
					break;
				}
				else if (temp->id < parent->id)
					parent = parent->left;
				else if (temp->id > parent->id)
					parent = parent->right;
			}
		}
		temp->left = temp1;
	}

	void RL_rotation(Tree_Node* temp)
	{
		LL_rotation(temp->right);
		RR_rotation(temp);
	}

	void LR_rotation(Tree_Node* temp)
	{
		RR_rotation(temp->left);
		LL_rotation(temp);
	}

	void Sended_Data(int& s_id, int& r_id, string& data, int& key, Tree_Node*& temp)
	{
		if (temp->id == s_id)
			temp->Sent_Data.Enqueue(key, s_id, r_id, data);
		else if (s_id > temp->id)
			Sended_Data(s_id, r_id, data, key, temp->right);
		else if (s_id < temp->id)
			Sended_Data(s_id, r_id, data, key, temp->left);
	}

	void Receive_Data(int& s_id, int& r_id, string& data, int& key, Tree_Node*& temp)
	{
		if (temp->id == r_id)
			temp->Recieved_Data.Enqueue(key, s_id, r_id, data);
		else if (r_id > temp->id)
			Receive_Data(s_id, r_id, data, key, temp->right);
		else if (r_id < temp->id)
			Receive_Data(s_id, r_id, data, key, temp->left);
	}
public:
	Tree_Node* root;

	AVL_Tree()
	{
		root = NULL;
	}

	void insert(Tree_Node*& temp, int a)
	{
		Tree_Node* mynode = new Tree_Node(a);
		if (root == NULL)
		{
			root = mynode;
		}
		else
		{
			if (temp->id < a)
			{
				if (temp->right == NULL)
					temp->right = mynode;
				else
					insert(temp->right, a);
			}
			else if (temp->id > a)
			{
				if (temp->left == NULL)
					temp->left = mynode;
				else
					insert(temp->left, a);
			}

			temp->balance_factor = get_height(temp->left) - get_height(temp->right);

			if (temp->balance_factor > 1)
			{
				int left_height = get_height(temp->left->left);
				int right_height = get_height(temp->left->right);

				if (right_height > left_height)
					LR_rotation(temp);
				else if (left_height >= right_height)
					LL_rotation(temp);
			}
			else if (temp->balance_factor < -1)
			{
				int left_height = get_height(temp->right->left);
				int right_height = get_height(temp->right->right);

				if (left_height > right_height)
					RL_rotation(temp);
				else if (right_height >= left_height)
					RR_rotation(temp);
			}
		}
	}

	bool Search_ID(int id, Tree_Node*& temp)
	{
		if (temp != NULL)
		{
			if (temp->id == id)
				return true;

			if (id > temp->id)
				Search_ID(id, temp->right);
			else if (id < temp->id)
				Search_ID(id, temp->left);
		}
		else
			return false;
	}

	void ADD_Data(int& s_id, int& r_id, string& data, int& key, Tree_Node*& temp)
	{
		Sended_Data(s_id, r_id, data, key, temp);
		Receive_Data(s_id, r_id, data, key, temp);
	}

	void Display_All_Receive_Data(int& id, Tree_Node*& temp)
	{
		Message* tempmsg;
		if (temp->id == id)
		{
			if (temp->Recieved_Data.Head != NULL)
			{
				tempmsg = temp->Recieved_Data.Head;
				while (tempmsg != NULL)
				{
					int length = tempmsg->Data.length();
					string s = tempmsg->Data;
					char* te = new char[length];

					for (int j = 0; j < length; j++)
					{
						if (isalnum(s[j]))
						{
							int data = Interger_of_Character(s[j]);
							te[j] = Decrytion(data, tempmsg->key);
						}
						else
							te[j] = s[j];
					}
					te[length] = '\0';

					cout << "\n---------------------------------------------\n\n";
					cout << "\n\tSender Id: " << tempmsg->sender_id;
					cout << "\n\tData: " << te;
					cout << "\n\n---------------------------------------------\n\n";

					tempmsg = tempmsg->next;
				}
			}
			else
				cout << "\n\tNot Received Any Data" << endl;;
		}
		else if (temp->id < id)
			Display_All_Receive_Data(id, temp->right);
		else if (temp->id > id)
			Display_All_Receive_Data(id, temp->left);
	}

	void Display_All_Sent_Data(int& id, Tree_Node* temp)
	{
		Message* tempmsg;
		if (temp->id == id)
		{
			if (temp->Sent_Data.Head != NULL)
			{
				tempmsg = temp->Sent_Data.Head;
				while (tempmsg != NULL)
				{
					int length = tempmsg->Data.length();
					string s = tempmsg->Data;
					char* te = new char[length];

					for (int j = 0; j < length; j++)
					{
						if (isalnum(s[j]))
						{
							int data = Interger_of_Character(s[j]);
							te[j] = Decrytion(data, tempmsg->key);
						}
						else
							te[j] = s[j];
					}
					te[length] = '\0';

					cout << "\n---------------------------------------------\n\n";
					cout << "\n\tReceiver Id: " << tempmsg->reciever_id;
					cout << "\n\tData: " << te;
					cout << "\n\n---------------------------------------------\n\n";

					tempmsg = tempmsg->next;
				}
			}
			else
				cout << "\n\tNot Sent Any Data" << endl;
		}
		else if (temp->id < id)
			Display_All_Sent_Data(id, temp->right);
		else if (temp->id > id)
			Display_All_Sent_Data(id, temp->left);
	}

	void Display_Sent_Data_By_ID(int& id, int send_id, Tree_Node* temp)
	{
		bool flag = false;
		Message* tempmsg;

		if (id == temp->id)
		{
			if (temp->Sent_Data.Head != NULL)
			{
				tempmsg = temp->Sent_Data.Head;
				while (tempmsg != NULL)
				{
					if (tempmsg->reciever_id == send_id)
					{
						int length = tempmsg->Data.length();
						string s = tempmsg->Data;
						char* te = new char[length];

						for (int j = 0; j < length; j++)
						{
							if (isalnum(s[j]))
							{
								int data = Interger_of_Character(s[j]);
								te[j] = Decrytion(data, tempmsg->key);
							}
							else
								te[j] = s[j];
						}
						te[length] = '\0';

						cout << "\n---------------------------------------------\n\n";
						cout << "\n\tReceiver Id: " << tempmsg->reciever_id;
						cout << "\n\tData: " << te;
						cout << "\n\n---------------------------------------------\n\n";
						flag = true;
					}

					tempmsg = tempmsg->next;
				}
				if (!flag)
					cout << "\n\nNo data sent to " << send_id << endl;
			}
			else
			{
				cout << "\n\nNo data sent" << endl;
				flag = true;
			}
		}
		else if (temp->id < id)
			Display_Sent_Data_By_ID(id, send_id, temp->right);
		else if (temp->id > id)
			Display_Sent_Data_By_ID(id, send_id, temp->left);
	}

	void Display_Recieved_Data_By_ID(int& id, int recieved_id, Tree_Node* temp)
	{
		bool flag = false;
		Message* tempmsg;

		if (temp->id == id)
		{
			if (temp->Recieved_Data.Head != NULL)
			{
				tempmsg = temp->Recieved_Data.Head;
				while (tempmsg != NULL)
				{
					if (tempmsg->sender_id == recieved_id)
					{
						int length = tempmsg->Data.length();
						string s = tempmsg->Data;
						char* te = new char[length];

						for (int j = 0; j < length; j++)
						{
							if (isalnum(s[j]))
							{
								int data = Interger_of_Character(s[j]);
								te[j] = Decrytion(data, tempmsg->key);
							}
							else
								te[j] = s[j];
						}
						te[length] = '\0';

						cout << "\n---------------------------------------------\n\n";
						cout << "\n\tSender Id: " << tempmsg->sender_id;
						cout << "\n\tData: " << te;
						cout << "\n\n---------------------------------------------\n\n";
						flag = true;
					}

					tempmsg = tempmsg->next;
				}
				if (!flag)
					cout << "\n\nNo data recieved from ID " << recieved_id << endl;
			}
			else
			{
				cout << "\n\tNot Received Any Data" << endl;
				flag = true;
			}
		}
		else if (temp->id < id)
			Display_Recieved_Data_By_ID(id, recieved_id, temp->right);
		else if (temp->id > id)
			Display_Recieved_Data_By_ID(id, recieved_id, temp->left);
	}
};

class Date
{
public:
	int month;
	int day;
	int year;

	Date()
	{
		month = 0;
		day = 0;
		year = 0;
	}

	void Set_Date(int day, int month, int year)
	{
		this->day = day;
		this->month = month;
		this->year = year;
	}

	void Enter_Date()
	{
		while (true)
		{
			cout << "\t\tEnter day : ";
			cin >> day;
			if (day > 31)
				cout << "\t\tDay cannot be greater than 31" << endl;
			else if (day < 0)
				cout << "\t\tDay cannot be less than 0" << endl;
			else
				break;
		}

		while (true)
		{
			cout << "\t\tEnter month : ";
			cin >> month;
			if (month > 12)
				cout << "\t\tMonth cannot be greater than 12" << endl;
			else if (month < 0)
				cout << "\t\tMonth cannot be less than 0" << endl;
			else
				break;
		}

		while (true)
		{
			cout << "\t\tEnter year : ";
			cin >> year;
			if (year > 2022)
				cout << "\t\tYear cannot be greater than 2022" << endl;
			else if (year < 1900)
				cout << "\t\tYear cannot be less than 1900" << endl;
			else
				break;
		}
	}
};

class Person
{
	string username;
	string password;
	string name;
	Date date_of_birth;
	int id;

public:

	void setData(string name, string username, string password, int day, int month, int year, int id)
	{
		this->username = username;
		this->password = password;
		this->name = name;
		date_of_birth.Set_Date(day, month, year);
		this->id = id;
	}

	string get_username()
	{
		return username;
	}

	string get_password()
	{
		return password;
	}

	string get_name()
	{
		return name;
	}

	int get_Day()
	{
		return date_of_birth.day;
	}

	int get_Month()
	{
		return date_of_birth.month;
	}

	int get_Year()
	{
		return date_of_birth.year;
	}

	int get_id()
	{
		return id;
	}

	void set_Id(int id)
	{
		this->id = id;
	}
};

class Link_List_Node
{
	Person P;
public:
	Link_List_Node* next;
	Link_List_Node()
	{
		next = NULL;
	}

	void Add_Person(Person P)
	{
		this->P = P;
	}

	int get_ID()
	{
		return P.get_id();
	}

	string get_Username()
	{
		return P.get_username();
	}

	string get_Password()
	{
		return P.get_password();
	}

	int get_Day()
	{
		return P.get_Day();
	}

	int get_Month()
	{
		return P.get_Month();
	}

	int get_Year()
	{
		return P.get_Year();
	}

	string get_Name()
	{
		return P.get_name();
	}

	void set_ID(int id)
	{
		P.set_Id(id);
	}
};

class Link_List
{
public:
	Link_List_Node* Head;
	Link_List()
	{
		Head = NULL;
	}

	void Insert(Person& P)
	{
		Link_List_Node* temp = new Link_List_Node;
		temp->Add_Person(P);

		if (Head != NULL)
			temp->next = Head;

		Head = temp;
	}
};

class Hash_Table
{
	Link_List L[10];
	int size = 10;
	bool Search_By_UserName(string username)
	{
		bool flag = true;
		for (int i = 0; i < size; i++)
		{
			Link_List_Node* temp = L[i].Head;

			while (temp != NULL)
			{
				if (temp->get_Username() == username)
				{
					flag = false;
					break;
				}
				temp = temp->next;
			}

			if (!flag)
				break;
		}
		return flag;
	}

public:
	AVL_Tree T;
	void Add_Person(Person& P)
	{
		if (Search_By_UserName(P.get_username()))
		{
			int index = P.get_id() % size;
			L[index].Insert(P);
			T.insert(T.root, id_count);

			cout << "\n\n\tSigned up successfully" << endl;
			id_count++;
		}
		else
			cout << "\n\n\tUsername Already Exists" << endl;
	}

	bool Search_Person(Person& P)
	{
		for (int i = 0; i < size; i++)
		{
			Link_List_Node* temp = L[i].Head;

			while (temp != NULL)
			{
				if (temp->get_Username() == P.get_username() && temp->get_Password() == P.get_password())
				{
					P.setData(temp->get_Name(), temp->get_Username(), temp->get_Password(), temp->get_Day(), temp->get_Month(), temp->get_Year(), temp->get_ID());
					return true;
				}
				temp = temp->next;
			}
		}
		return false;
	}

	bool Check()
	{
		for (int i = 0; i < size; i++)
		{
			Link_List_Node* temp = L[i].Head;
			if (temp != NULL)
			{
				return true;
			}
		}
		return false;
	}
};


int Login_Signup_Menu()
{
	system("CLS");
	cout << "\n\n\n";
	cout << " ________________________________________________________" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                        Register                        |" << endl;
	cout << "|________________________________________________________|" << endl;

	cout << "\n\n\t1. Signup" << endl;
	cout << "\t2. Login" << endl;
	cout << "\t3. Exit" << endl;

	int a;
	cout << "\nEnter a number to perform a specific operation : ";
	cin >> a;
	return a;
}

Person Signup()
{
	system("CLS");
	cout << "\n\n\n";
	cout << " ________________________________________________________" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                          Signup                        |" << endl;
	cout << "|________________________________________________________|" << endl;

	Person P;
	string username = "NULL";
	string password = "NULL";
	string name;
	Date d;

	cin.ignore();
	cout << "\n\n\tEnter name and for back enter -1: ";
	getline(cin, name);
	if (name == "-1")
	{
		P.setData(name, username, password, d.day, d.month, d.year, id_count);
		return P;
	}
	cout << "\tEnter username: ";
	getline(cin, username);
	cout << "\tEnter password: ";
	cin >> password;
	cout << "\tEnter your date of birth" << endl;
	d.Enter_Date();


	P.setData(name, username, password, d.day, d.month, d.year, id_count);

	return P;
}

Person Login()
{
	system("CLS");
	cout << "\n\n\n";
	cout << " ________________________________________________________" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                          Login                         |" << endl;
	cout << "|________________________________________________________|" << endl;

	Person P;
	string username;
	string password = "NULL";
	string name = "NULL";
	Date d;


	cin.ignore();
	cout << "\n\n\tEnter username and for back enter -1: ";
	getline(cin, username);
	if (username == "-1")
	{
		P.setData(name, username, password, d.day, d.month, d.year, id_count);
		return P;
	}
	cout << "\tEnter password : ";
	cin >> password;

	P.setData(name, username, password, d.day, d.month, d.year, id_count);

	return P;
}



void Profile(Hash_Table& h, Person& P)
{
	int a;

	do {
		system("CLS");
		cout << "\n\n\n";
		cout << " ________________________________________________________" << endl;
		cout << "|                                                        |" << endl;
		cout << "|                        Profile                         |" << endl;
		cout << "|________________________________________________________|" << endl;

		cout << "\n\n\t1. Send Data\n"
			"\t2. Display All Received Data\n"
			"\t3. Display All Sent Data\n"
			"\t4. Display Personal Information\n"
			"\t5. Display Sent Data By ID\n"
			"\t6. Display Received Data By ID\n"
			"\t7. Logout\n";

		cout << "\nEnter a number to perform a specific operation : ";
		cin >> a;

		if (a == 1)
		{
			cout << "\n\n\n";
			cout << " ________________________________________________________" << endl;
			cout << "|                                                        |" << endl;
			cout << "|                       Send Data                        |" << endl;
			cout << "|________________________________________________________|" << endl;

			cout << "\n\tEnter Receiver Id: ";
			int id;
			cin >> id;

			if (id != P.get_id())
			{
				if (h.T.Search_ID(id, h.T.root))
				{
					int key = rand();

					string data;
					cin.ignore();
					cout << "\tEnter Message (In String): ";
					getline(cin, data);
					int length = data.length();
					char* temp = new char[length];

					for (int i = 0; i < length; i++)
					{
						if (isalnum(data[i]))
						{
							int d = Interger_of_Character(data[i]);
							temp[i] = Encryption(d, key);
						}
						else
							temp[i] = data[i];
					}

					temp[length] = '\0';
					data = temp;
					cout << data;
					int s = P.get_id();
					h.T.ADD_Data(s, id, data, key, h.T.root);
				}
				else
					cout << "\n\tID Not Exist" << endl;
			}
			else
				cout << "\n\tOther Than Your ID" << endl;

			cout << "\n\n";
			system("PAUSE");
		}
		else if (a == 2)
		{
			cout << "\n\n\n";
			cout << " ________________________________________________________" << endl;
			cout << "|                                                        |" << endl;
			cout << "|                    Received Data                       |" << endl;
			cout << "|________________________________________________________|" << endl << endl;

			int id = P.get_id();
			h.T.Display_All_Receive_Data(id, h.T.root);

			cout << "\n\n";
			system("PAUSE");
		}
		else if (a == 3)
		{
			cout << "\n\n\n";
			cout << " ________________________________________________________" << endl;
			cout << "|                                                        |" << endl;
			cout << "|                       Sent Data                        |" << endl;
			cout << "|________________________________________________________|" << endl << endl;


			int id = P.get_id();
			h.T.Display_All_Sent_Data(id, h.T.root);

			cout << "\n\n";
			system("PAUSE");
		}
		else if (a == 4)
		{
			cout << "\n\n\n";
			cout << " ________________________________________________________" << endl;
			cout << "|                                                        |" << endl;
			cout << "|                     Personal Data                      |" << endl;
			cout << "|________________________________________________________|" << endl;

			cout << "\n\tName : " << P.get_name();
			cout << "\n\tUser Name: " << P.get_username();
			cout << "\n\tUser ID Number: " << P.get_id();
			cout << "\n\tDate of Birth";
			cout << "\n\t\tDay : " << P.get_Day();
			cout << "\n\t\tMonth : " << P.get_Month();
			cout << "\n\t\tYear : " << P.get_Year();

			cout << "\n\n";
			system("PAUSE");
		}
		else if (a == 5)
		{
			cout << "\n\n\n";
			cout << " ________________________________________________________" << endl;
			cout << "|                                                        |" << endl;
			cout << "|                       Sent Data                        |" << endl;
			cout << "|________________________________________________________|" << endl << endl;

			int send_id;
			int id = P.get_id();

			cout << "\n\tEnter ID of reciever to display data sent to that ID : ";
			cin >> send_id;

			if (id == send_id)
				cout << "\n\tEnter id other than your id" << endl;
			else if (h.T.Search_ID(send_id, h.T.root))
				h.T.Display_Sent_Data_By_ID(id, send_id, h.T.root);
			else
				cout << "\n\n\tID does not exist" << endl;

			cout << "\n\n";
			system("Pause");
		}
		else if (a == 6)
		{
			cout << "\n\n\n";
			cout << " ________________________________________________________" << endl;
			cout << "|                                                        |" << endl;
			cout << "|                    Received Data                       |" << endl;
			cout << "|________________________________________________________|" << endl << endl;

			int reciever_id;
			int id = P.get_id();

			cout << "\n\tEnter ID of sender to display data recieved by that ID : ";
			cin >> reciever_id;

			if (id == reciever_id)
				cout << "\n\tEnter id other than your id" << endl;
			else if (h.T.Search_ID(reciever_id, h.T.root))
				h.T.Display_Recieved_Data_By_ID(id, reciever_id, h.T.root);
			else
				cout << "\n\n\tID does not exist" << endl;

			cout << "\n\n";
			system("Pause");
		}

	} while (a != 7);

	cout << "\n\n\n";
	cout << " ________________________________________________________" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                         Logout                         |" << endl;
	cout << "|________________________________________________________|" << endl << endl;

}

int main()
{
	int select;
	Hash_Table h;
	Person P;

	while (true)
	{
		system("CLS");
		select = Login_Signup_Menu();

		if (select == 1)
		{
			P = Signup();
			if (P.get_name() != "-1")
			{
				h.Add_Person(P);
			}
			else
			{
				cout << "\n\n\n";
				cout << " ________________________________________________________" << endl;
				cout << "|                                                        |" << endl;
				cout << "|                           Back                         |" << endl;
				cout << "|________________________________________________________|" << endl;
			}
		}
		else if (select == 2)
		{
			if (h.Check())
			{
				do
				{
					P = Login();
					if (P.get_username() != "-1")
					{
						if (h.Search_Person(P))
						{
							cout << "\tLogged in successfully" << endl;
							Profile(h, P);
							break;
						}
						else
						{
							cout << "\n\tInvalid Username or password" << endl;
							system("PAUSE");
						}
					}
					else
					{
						cout << "\n\n\n";
						cout << " ________________________________________________________" << endl;
						cout << "|                                                        |" << endl;
						cout << "|                           Back                         |" << endl;
						cout << "|________________________________________________________|" << endl;
						break;
					}
				} while (true);
			}
			else
				cout << "\n\tPerson Not Yet Added" << endl;
		}
		else if (select == 3)
			break;
		else
			cout << "\n\tInvalid choice" << endl;

		system("Pause");
	}

	cout << "\n\n\n";
	cout << " ________________________________________________________" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                       PROGRAM END                      |" << endl;
	cout << "|________________________________________________________|" << endl;
	return 0;
}