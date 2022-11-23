#include <iostream>
using namespace std;


int v[100000000] = { 0 }, n, i = 0;
int main()
{
	v[0] = 1; 
	cout << "n = "; cin >> n; 
	while (n != 0)
	{
		for (int j = 0; j <= i; j++)
		{
			v[j] *= 2; 
		}
		for (int j = 0; j <= i; j++)
		{
			if (v[j] > 9)
			{
				v[j + 1] = (v[j] / 10) + v[j + 1];
				v[j] = v[j] % 10;
				if (j == i)
				{
					i++;
					j++;
				}
			}
		}
		n--; 
	}
	for (int k = i; k >= 0; k--)
	{
		cout << v[k]; 
	}
	cout << "\n" << i << "\n"; 
}

struct nod
{
	int x; 
	nod *next, *prev;
}prim, ultim;

/*int main()
{
	prim = ultim; 
	int n; 
	cout << "n = "; cin >> n;
	while (n != 0)
	{
		nod *p = new nod;
	}
}*/


/*int main()
{
	v[0] = 1;
	cout << "n = "; cin >> n;
	while (n != 0)
	{
		for (int j = 0; j <= i; j++)
		{
			v[j] *= 2;
		}
		for (int j = 0; j <= i; j++)
		{
			if (v[j] > 99)
			{
				v[j + 1] = (v[j] / 100) + v[j + 1];
				v[j] = v[j] % 100;
				if (j == i)
				{
					i++;
					j++;
				}
			}

		}
		n--;
	}
	for (int k = i; k >= 0; k--)
	{
		cout << v[k];
	}
	cout << "\n" << i << "\n";
}*/



/*pana la 2^30

int main()
{ 
	int n, p = 1; 
	cout << "n = "; 
	cin >> n; 
	while (n != 0)
	{
		p *= 2;
		n--;
	}
	cout << p << "\n";
	
*/