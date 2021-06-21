#include <iostream>
using namespace std;
int main()
{
	int level;
	while (true)
	{
		int n=0,c=0;
		cout << endl << endl << endl << endl<< "                                                                Enetr number of Game level ( 1 , 2 , 3 , 4 ):: ";
		cin >> level;
		cout << "\n\n";
		if (level == 1)
		{
			cout << "                                                                                    star Game                          \n";
			for (int i = 0; i < 5; i++)
			{
				cout <<"                                                                                    "<< i << " + " << i + 10 << " = ";
				cin >> n;
				if (n == i + i + 10)
				{
					c++;
				}
			}
			if (c >=2)
			{
				cout << "                                                                                \aYou Win \a                 "<<"\n\n\n\n\n\n";
			}
		}
		else if (level == 2)
		{
			cout << "                                                                                    star Game                          \n";
			for (int i = 0; i < 5; i++)
			{
				cout << "                                                                                    " << i << " * " << i * 10 << " = ";
				cin >> n;
				if (n == i * i * 10)
				{
					c++;
				}
			}
			if (c >= 2)
			{
				cout << "                                                                               \aYou Win \a                 " << "\n\n\n\n\n\n";
			}

		}
		else if (level == 3)
		{
			cout << "                                                                                    star Game                          \n";
			for (int i = 0; i < 5; i++)
			{
				cout << "                                                                                    " << 10+i<<""<<-i<< " = ";
				cin >> n;
				if (n == (10+i)-i)
				{
					c++;
				}
			}
			if (c >= 2)
			{
				cout << "                                                                                \aYou Win \a                 " << "\n\n\n\n\n\n";
			}
		}

		else if (level == 4)
		{
			
			cout << "                                                                                    star Game                          \n";
			for (int i = 0; i < 5; i++)
			{
				cout << "                                                                                    " << i << " / " << i * 10 << " = ";
				cin >> n;
				if (n == i / i * 10)
				{
					c++;
				}
	
			}
			
			//cout << "                                                                                    star Game                          \n";
			
			for (int i = 0; i < 5; i++)
			{
				cout << "                                                                                    " <<"( "<<i << " * " << i<<" )"<<" % "<< 10 << " = ";
				cin >> n;
				if (n == i * i % 10)
				{
					c++;
				}
	
			}
			
			
			if (c >= 2)
			{
				cout << "                                                                                   \aYou Win \a                 " << "\n\n\n\n\n\n";
			}
			
		}
	}
}