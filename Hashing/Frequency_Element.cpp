
/*      Program to find the frequency of any sub-string in a given string
        @author : Rishikesh raj
*/

#include <iostream>
#include <unordered_map>

using namespace std;

void freq(string arr[], int n)
{
    unordered_map<string, int> umap;
    for (int i = 0; i < n; i++)
    {
        umap[arr[i]]++;
    }

    unordered_map<string, int>::iterator itr;
    for (itr = umap.begin(); itr != umap.end(); itr++)
    {
        cout << itr->first << " -> " << itr->second << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the size of array :";
    cin >> n;

    string arr[n];
    cout << "Enter the element";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    freq(arr, n);
    return 0;
}