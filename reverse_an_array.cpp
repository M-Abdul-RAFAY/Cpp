#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &v)
{
    vector<int> temp = v;
    int size = v.size();

    for (int i = 0; i < v.size(); i++)
    {
        size--;
        v[i] = temp[size];
    }
}

int main()
{

    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    reverse(v);

    for (int element : v)
    {
        cout << element << endl;
    }
    return 0;
}
