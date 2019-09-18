#include <iostream>

int main() {
	int a;
	cout<<"Upisi broj razlicit od 0"<<endl;
	cin>>a;
	if (a<0)
	{
	cout<<"Broj"<<a<<" je negativan \
	Njegova apsolutna vrijednost je "<<-a<<endl;
   }
	else
	{
		cout<<"broj "<<a<<"je pozitivan. \
		Njegova apsolutna vrijednost je "<<a<<endl;
	}
	return 0;
}
