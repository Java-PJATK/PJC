#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int height;
    double weight;
    cout << "Enter your name, height and weight: ";
    cin  >> name >> height >> weight;
    cout << name << ", you are " << height  << " cm tall "
         << "and you weigh " << weight << " kg" << endl;
}
