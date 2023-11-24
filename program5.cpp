
#include <iostream>
#include <string>
using namespace std;
class Person {
  private:  string name;
  int age;
  string country;

  public:
    // Setter functions
    void setName(const std::string & n) 
	{
      name = n;
    }

  void setAge(int a)
   {
    age = a;
  }

  void setCountry(const std::string & c)
   {
    country = c;
  }

  // Getter functions
  string getName() 
  {
    return name;
  }

  int getAge() 
  {
    return age;
  }

  string getCountry()
   {
    return country;
  }
};

int main() 
{
  // Create a person object
  Person person;

  // Set the person's details
  person.setName("dev bhanushali");
  person.setAge(21);
  person.setCountry("germany");

  // Get and display the person's details
  cout << "Name: " << person.getName() << endl;
  cout << "Age: " << person.getAge() << endl;
  cout << "Country: " << person.getCountry() << endl;

  
}
