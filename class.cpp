#include <iostream>
using namespace std;

class empolyee{
public:    
    string name;
    string company;
    int age;

    void empolyeeIntroduce(){
        cout <<"Name: "<<name<<endl;
        cout<<"Company: "<<company<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

int main()
{
    empolyee empolyee1;
    empolyee1.name = "Bikash Chandra Ray";
    empolyee1.company = "BTCL";
    empolyee1.age = 28;
    empolyee1.empolyeeIntroduce();
}