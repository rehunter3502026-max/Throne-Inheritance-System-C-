#include <iostream>
#include <string>
using namespace std;

class ThroneInheritance {
private:
    string name[100];      // names of people
    int parent[100];       // parent index
    bool alive[100];       // alive or dead
    int total;             // total people

    // Find index of a person by name
    int find(string n) {
        for (int i = 0; i < total; i++) {
            if (name[i] == n)
                return i;
        }
        return -1;
    }

    // Print inheritance (DFS style)
    void printOrder(int p) {
        if (alive[p])
            cout << name[p] << " ";

        for (int i = 0; i < total; i++) {
            if (parent[i] == p) {
                printOrder(i);
            }
        }
    }

public:
    // Constructor
    ThroneInheritance(string kingName) {
        name[0] = kingName;
        parent[0] = -1; // king has no parent
        alive[0] = true;
        total = 1;
    }

    // Birth
    void birth(string parentName, string childName) {
        int p = find(parentName);
        name[total] = childName;
        parent[total] = p;
        alive[total] = true;
        total++;
    }

    // Death
    void death(string n) {
        int i = find(n);
        if (i != -1)
            alive[i] = false;
    }

    // Display inheritance
    void getInheritanceOrder() {
        printOrder(0);
        cout << endl;
    }
};

int main() {
    ThroneInheritance kingdom("King");

    kingdom.birth("King", "Charles");
    kingdom.birth("King", "Anne");
    kingdom.birth("Charles", "William");
    kingdom.birth("William", "George");

    cout << "Current Inheritance Order:\n";
    kingdom.getInheritanceOrder();

    kingdom.death("Charles");

    cout << "Updated Inheritance Order:\n";
    kingdom.getInheritanceOrder();

    return 0;
}
