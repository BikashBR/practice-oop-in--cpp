#include <iostream>
using namespace std;

class empolyee{
public:    
    string Name;
    string Company;
    int Age;

    void empolyeeIntroduce(){
        cout <<"Name: "<<Name<<endl;
        cout<<"Company: "<<Company<<endl;
        cout<<"Age: "<<Age<<endl<<endl;
    }
    empolyee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main()
{
    empolyee empolyee1 = empolyee("Bikash Chandra Ray", "Amazon", 28);
    empolyee1.empolyeeIntroduce();

    empolyee empolyee2 = empolyee("Imran Hossain", "Meta", 27);
    empolyee2.empolyeeIntroduce();

}