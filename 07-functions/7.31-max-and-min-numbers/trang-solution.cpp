#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

vector<int> StringToVector(const string &);
void NoMaxMin(const string &);
void RemoveMinMax(vector<int> &);
string OutputLine(const string &);

int main()
{
    const string FILENAME = "input.txt";

    NoMaxMin(FILENAME);

    return 0;
}

void NoMaxMin(const string &filename)
{
    ifstream inFS(filename);

    if (inFS.is_open()){
        string line;

        while (!inFS.eof()){
            getline(inFS, line);

            if (!inFS.fail()){
                cout << OutputLine(line);
            }
        }
    }
    inFS.close();
}

vector<int> StringToVector(const string &sentence)
{
    int num;
    vector<int> vec;
    stringstream ss(sentence);

    while (ss >> num) {
        vec.push_back(num);
    }
    return vec;
}

void RemoveMinMax(vector<int> &vec)
{
    auto max = max_element(vec.begin(), vec.end());
    vec.erase(max);

    auto min = min_element(vec.begin(), vec.end());
    vec.erase(min);
}

string OutputLine(const string &numList)
{
    stringstream ss, no_max_min;
    vector<int> v = StringToVector(numList);
    RemoveMinMax(v);

    for (auto e : v) {
        no_max_min << e << " ";
    }

    ss << setw(30) << numList << " -> " << no_max_min.str() << endl;

    return ss.str();
}