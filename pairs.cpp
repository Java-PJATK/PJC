#include <fstream>
#include <string>
#include <utility>   // pair
#include <vector>
#include <algorithm> // copy, sort, etc.
#include <iostream>
using namespace std;

typedef pair<string,int> PAIR;
typedef vector<PAIR>     VECT;
typedef VECT::iterator   VECTIT;

template <typename P>
class Minor {
    int age;
public:
    Minor(int age) : age(age) { }

    bool operator()(const P& p) const {
        return p.second < age;
    }
};

template <typename P1, typename P2>
ostream& operator<<(ostream& str, const pair<P1,P2>& p) {
    return str << "[" << p.first << "," << p.second << "]";
}

template <typename P1, typename P2>
istream& operator>>(istream& str, pair<P1,P2>& p) {
    return str >> p.first >> p.second;
}

template <typename P>
bool comp(const P& p1, const P& p2) {
    return p1.second < p2.second;
}

int main() {
    ifstream file("pairs.dat");

    PAIR   p;
    VECT vec;
    VECTIT it, fin;

    while (file >> p) vec.push_back(p);

    cout << "After reading:\n";
    fin=vec.end();
    for (it = vec.begin(); it != fin; ++it)
        cout << *it << " ";

    cout << "\nOldest "
         << *max_element(vec.begin(),vec.end(),comp<PAIR>)
         << ", youngest "
         << *min_element(vec.begin(),vec.end(),comp<PAIR>);

    it = remove_if(vec.begin(),fin,
                   Minor<PAIR>(18));
    vec.erase(it,vec.end());

    cout << "\nAfter removing minors:\n";
    fin=vec.end();
    for (it = vec.begin(); it != fin; ++it)
        cout << *it << " ";

    sort(vec.begin(),fin,comp<PAIR>);

    cout << "\nAfter sorting:\n";
    fin=vec.end();
    for (it = vec.begin(); it != fin; ++it)
        cout << *it << " ";

    cout << endl;
}
