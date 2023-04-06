#include <iostream>

using namespace std;
 
class ComplexNumber
{
	public:
	  float real;
	  float img;
	
	  ComplexNumber()
	  {
	    real = 0.0;
	    this->img = 0.0;
	  }
	
	  ComplexNumber(float real1, float img1)
	  {
	    real = real1;
	    img = img1;
	  }

	  //overloading + operator
	  ComplexNumber operator+(const ComplexNumber &obj){
	    ComplexNumber temp;
	    temp.img = img + obj.img;
	    temp.real = real + obj.real;
	    return temp;
	  }
	
	  //overloading - operator
	  ComplexNumber operator-(const ComplexNumber &obj){
	    ComplexNumber temp;
	    temp.img = this->img - obj.img;
	    temp.real = this->real - obj.real;
	    return temp;
	  }
	
	  void display(){
	    cout << this->real << " + " << this->img << "i" << endl;
	  }
};
 
int main()
{
	  ComplexNumber a, b, c;
	
	  cout << "Enter real and complex coefficient of the first complex number: " << endl;
	  cin >> a.real;
	  cin >> a.img;
	
	  cout << "Enter real and complex coefficient of the second complex number: " << endl;
	  cin >> b.real;
	  cin >> b.img;
	
	  cout << "Addition Result: ";
	  c = a+b;
	  c.display();
	
	  cout << "Subtraction Result: ";
	  c = a-b;
	  c.display();
	
	  return 0;
}
