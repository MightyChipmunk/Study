#include <iostream>
#include <string>
#define MAX 100
using namespace std;

struct account {
	int accnum;
	string accname;
	int accmoney;
};

void makeaccout(account *str, int index) {
	cout << "[���°���]" << endl;
	cout << "����ID: ";
	cin >> str[index].accnum;
	cin.ignore(32767, '\n');
	cout << "�̸�: ";
	getline(cin, str[index].accname);
	cout << "�Աݾ�: ";
	cin >> str[index].accmoney;
}

void deposit(account *str) {
	int id;
	int money;
	cout << "[�Ա�]" << endl;
	cout << "����ID: ";
	cin >> id;
	cout << "�Աݾ�: ";
	cin >> money;
	for (int i = 0; i < MAX; i++) {
		if (str[i].accnum == id) {
			str[i].accmoney += money;
			break;
		}
		else;
	}
	cout << "�ԱݿϷ�" << endl;
}

void withdraw(account *str) {
	int id;
	int money;
	cout << "[���]" << endl;
	cout << "����ID: ";
	cin >> id;
	cout << "��ݾ�: ";
	cin >> money;
	for (int i = 0; i < MAX; i++) {
		if (str[i].accnum == id) {
			str[i].accmoney -= money;
			break;
		}
		else;
	}
	cout << "��ݿϷ�" << endl;
}

void printaccount(account *str, int index) {
	for (int i = 0; i < index; i++) {
		cout << "����ID " << str[i].accnum << endl;
		cout << "�̸� " << str[i].accname << endl;
		cout << "�ܾ� " << str[i].accmoney << endl;
	}
}

int main(void) {
	account acc[MAX];
	int index = 0;

	while (1) {
		cout << "-----Menu-----" << endl;
		cout << "1. ���°���" << endl;
		cout << "2. �Ա�" << endl;
		cout << "3. ���" << endl;
		cout << "4. �������� ��ü ���" << endl;
		cout << "5. ���α׷� ����" << endl;
		cout << "���� ";
		
		int choice;
		cin >> choice;

		if (choice == 1) {
			makeaccout(acc, index);
			index++;
			cout<<endl;
		}
		else if (choice == 2) {
			deposit(acc);
			cout << endl;
		}
		else if (choice == 3) {
			withdraw(acc);
			cout << endl;
		}
		else if (choice == 4) {
			printaccount(acc, index);
			cout << endl;
		}
		else if (choice == 5) {
			break;
		}
	}

	return 0;
}
