#include <iostream>
#include <string>
using namespace std;

struct FullInfo {
    string address;

    FullInfo(string name) {
        cout << "Fetching address from data base" << endl;
        address = "Mr " + name + "\'s address";
    }
};

class Customer {
    string  name;
    mutable FullInfo *fullInfo;
public:
    Customer(string n) {
        name     = n;
        fullInfo = nullptr;
    }

    string getInfo() const {
        return name;
    }

    string getFullInfo() const {
        if (fullInfo == nullptr)
            fullInfo = new FullInfo(name);
        return name + ", " + fullInfo->address;
    }

    ~Customer() {
        delete fullInfo;
        cout << "deleting " + name << endl;
    }
};

int main() {
    Customer customer("Smith");
    cout << customer.getInfo()     << endl;
    cout << customer.getFullInfo() << endl;
    cout << "End of \'main\'\n";
}
