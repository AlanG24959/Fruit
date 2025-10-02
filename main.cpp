#include <iostream>
#include <cassert>

using namespace std;

class fruit
{
protected:
    string name;
    int tasty;
    int convenience;

    int total_score() {
        return tasty + convenience;
    }
public:
    string evaluate() {
        return "The " + name + " has a total score of " + to_string(total_score()) + ".";
    }
};

class Strawberry : public fruit
{
public:
    Strawberry(const string& n, int t, int c) {
        name = n;
        tasty = t;
        convenience = c;
    }

    string get_name() {
        return name;
    }
};

class Mango : public fruit
{
public:
    Mango(const string& n, int t, int c) {
        name = n;
        tasty = t;
        convenience = c;
    }

    string get_name() {
        return name;
    }
};

int main()
{
    Strawberry strawberry("strawberry", 7, 7);
    Mango mango("mango", 10, 4);

    assert(strawberry.get_name() == "strawberry");
    assert(strawberry.evaluate() == "The strawberry has a total score of 14.");
    assert(mango.evaluate() == "The mango has a total score of 14.");

    cout << strawberry.evaluate() << endl;
    cout << mango.evaluate() << endl;

    return 0;
}
