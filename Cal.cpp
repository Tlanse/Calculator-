#include "main.h"
void Cal()
{
	string str;
	float a,b=0;
	float c=0;
	float out=0;
	char sub,st;
	while (true)
	{
		cout << "> ";
		cin >> str;
		if (str == "new"||str == "s")
		{
			while (true)
			{
			New:
				cout << "New:";
				cin >> a >> sub >> b;
				switch (sub)
				{
				case '+':
				case 'a':
					out = a + b;
					cout << "= " << out << &endl;
					break;
				case '-':
				case 'b':
					out = a - b;
					cout << "= " << out << &endl;
					break;
				case '*':
				case 'c':
					out = a * b;
					cout << "= " << out << &endl;
					break;
				case '/':
				case 'd':
					if (b != 0)
					{
						out = a / b;
						cout << "= " << out << &endl;
					}
					else if (b == 0)
					{
						cout << "Error" << &endl;
					}
					break;
				case '^':
				case 'e':
					out = pow(a,b);
					cout << "= " << out << &endl;
					break;
				default:
					cout << "Î´Öª×Ö·û:"+sub << &endl;
					goto New;
					break;
				}
				break;
			}
		}
		else if (str == "con"||str=="c")
		{
			while (true)
			{
			Con:
				cout << out;
				cin >> st >> c;
				switch (st)
				{
				case '+':
				case 'a':
					out = out + c;
					cout << "= " << out << &endl;
					break;
				case '-':
				case 'b':
					out = out - c;
					cout << "= " << out << &endl;
					break;
				case '*':
				case 'c':
					out = out * c;
					cout << "= " << out << &endl;
					break;
				case '/':
				case 'd':
					if (c != 0)
					{
						out = out / c;
						cout << "= " << out << &endl;
					}
					else if (c == 0)
					{
						cout << "Error" << &endl;
					}
					break;
				case '^':
				case 'e':
					out = pow(out, c);
					cout << "= " << out << &endl;
					break;
				default:
					cout << "Î´Öª×Ö·û:" + st << &endl;
					goto Con;
					break;
				}
				break;
			}
		}
		else if (str == "quit")
		{
			Sleep(110);
			system("cls");
			Sleep(500);
			exit(0);
		}
		else {
			cout << "Î´Öª×Ö·û:" + str << &endl;
		}
	}
}
int main()
{
	Cal();
	return 0;
}