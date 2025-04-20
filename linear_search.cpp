#include <iostream>
#include <vector>
using namespace std;

int liner_search(const vector<int> &v, int n)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == n)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    cout << "Please an integer:" << endl;
    int n;
    cin >> n;

    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int index = liner_search(v, n);

    if (index == -1)
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "Found at index " << index << endl;
    }

    return 0;
}
