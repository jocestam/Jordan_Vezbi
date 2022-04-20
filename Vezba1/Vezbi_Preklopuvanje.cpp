#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::istream;
using std::setw;
/*
class Complex {
public:
	Complex(double = 0.0, double = 0.0);       // konstruktor
	Complex operator+(const Complex&) const;  // sobiranje
	Complex operator-(const Complex&) const;  // odzemanje
	const Complex& operator=(const Complex&); // dodeluvanje
	//void print() const;         
	friend ostream &operator<<( ostream&,const Complex& );
	friend istream &operator>>(istream&, Complex&);
private:
	double real;       // realen del
	double imaginary;  // imaginaren del
	double kompleksenBroj;
}; // kraj na klasta Complex
// Konstruktor
Complex::Complex(double r, double i)
	: real(r), imaginary(i) { }

// Preklopi operator za sobiranje
Complex Complex::operator+(const Complex& operand2) const
{
	return Complex(real + operand2.real,
		imaginary + operand2.imaginary);
} // kraj na funkcijata operator+ 

// Preklopi operator za odzemanje
Complex Complex::operator-(const Complex& operand2) const
{
	return Complex(real - operand2.real,
		imaginary - operand2.imaginary);
} // kraj na funkcijata operator- 

// Preklopi operator = 
const Complex& Complex::operator=(const Complex& right)
{
	real = right.real;
	imaginary = right.imaginary;
	return *this;   // ovozmozhuva kaskadiranje
} // kraj na funkcijata operator= 


// Ispechati objekt od klasa Complex vo oblik: (a, b)
//void Complex::print() const
//{
//	cout << '(' << real << ", " << imaginary << ')';
//}

ostream &operator<<(ostream& output, const Complex& num)
{
	output << "(" << num.real << ", " << num.imaginary <<") ";

	return output;     // mu ovozmozhuva na cout << a << b << c;
} // kraj na oprator<< funkcijata

istream& operator>>(istream& input, Complex& num)
{
	cout << "\nVnesi realen del od brojot: ";
	input >> num.real; // vnesi realen broj
	cout << "Vnesi imaginaren del od brojot: ";
	input >> num.imaginary; // vnesi imaginaren broj
	return input;  
} // kraj na operator>> funkcijata



int main()
{
	Complex p;
	cout << "Vnesi kompleksen broj. ";
	cin >> p;
	cout << "Vnesovte kompleksen broj x:" << p;

	//x.print();
	//cout << "\ny: ";
	//y.print();
	//cout << "\nz: ";
	//z.print();

	//x = y + z;
	//cout << "\n\nx = y + z:\n";
	//x.print();
	//cout << " = ";
    //y.print();
	//cout << " + ";
	//z.print();

	//x = y - z;
	//cout << "\n\nx = y - z:\n";
	//x.print();
	//cout << " = ";
	//y.print();
	//cout << " - ";
	//z.print();
	//cout << endl;
	
	return 0;
} // kraj main
*/