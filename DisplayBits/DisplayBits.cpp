#include <iostream>
#include <iomanip>
using namespace std;

void displayBits( unsigned );

int main()
{
	unsigned inputValue;

	cout << "Enter an unsigned integer : " ;
	cin >> inputValue;
	displayBits( inputValue );	
	return 0;
}

void displayBits( unsigned  value )
{
	const int SHIFT = 8 * sizeof( unsigned )  -1;
	const unsigned MASK = 1 << SHIFT;
	cout << setw( 10 ) << value << " = ";

	for( unsigned i =1; i <= SHIFT +1; i++)
	{
		cout << ( value & MASK ? '1' : '0');
		value <<= 1; // value = value << 1

		if ( i % 8 == 0)
			cout << ' ';
	} 
	cout << endl;
}