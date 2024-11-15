#include <iostream>
#include <string>
using namespace std;

class Person {
    string name;
    int    age;
public:
    Person(const string& name, int age)
        : name(name), age(age)
    { }

     // ... other members

    friend ostream& operator<<(ostream&, const Person&);
};

ostream& operator<<(ostream& str, const Person& k) {
    return str << k.name << " (" << k.age << " yo)";
}

int main() {
    Person t[] = {  Person("Joe",18), Person("Sue",26),
                    Person("Eve",35), Person("Tim",11)  };

    for (int i = 0; i < 4; i++)
        cout << t[i] << endl;
}
