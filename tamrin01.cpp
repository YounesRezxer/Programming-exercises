#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	if (a == b && a == c)
		cout << "motasviol azla" << endl;
	else
		if (a == b || a == c || b == c)
			cout << "motasaviossagheyn" << endl;
		else
			cout << "mokhtalefol azla" << endl;

	return 0;
}   