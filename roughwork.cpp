#include <iostream>
using namespace std;

main()
{
    string word;
    string word2;
    cout << "Enter word: ";
    cin >> word;

    for (int i = 0; i < word.length(); i++)
    {
        word2[i] = word[i] + 32;
    }

    for (int i = 0; i < word.length(); i++)
    {
        cout << word2[i];
    }

}