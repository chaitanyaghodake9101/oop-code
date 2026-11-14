#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, long long> states;

    states["Maharashtra"] = 112374333;
    states["Uttar Pradesh"] = 199812341;
    states["Bihar"] = 104099452;
    states["Gujarat"] = 60439692;
    states["Rajasthan"] = 68548437;

    string name;
    cout << "Enter state name: ";
    getline(cin, name);

    if (states.find(name) != states.end()) {
        cout << "Population: " << states[name] << endl;
    } else {
        cout << "State not found in map.\n";
    }

    return 0;
}
