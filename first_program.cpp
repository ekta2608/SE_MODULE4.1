 //WAP to print "Hello World" using c++

#include<iostream> // header file of c++
using namespace std; 
class student{
         
	public: // access modifier               
	   void print()     // method or function    
	   {
	   	cout<<"Hello World"; // cout--> printf()
		 }
};
int main()
{
	student s1;    // class name student  and s1 is object
	s1.print();   
}
