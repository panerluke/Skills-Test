#include <iostream>
#include <string>

using namespace std;

int main()
{
	double inc, , pyrte, hr, ttax, net, newclth, schsupp, savb, prntadd;
	inc = pyrte * (hr * 5);
	ttax = inc * 0.14;
	net = inc - ttax;
	newclth = net * 0.10;
	schsupp = net * 0.01;
	savb = (net - newclth - schsupp) * 0.25;
	prntadd = savb * 0.50;

	cout << "Please input pay rate:" << endl;
	cin >> pyrte;
	cout << "Please input numbers of hours per week:" << endl;
	cin >> hr;
	cout << "Income from summer job before taxes are paid: " << inc << endl;

	system("pause");
	return 0;
}