#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter any char: ";
    cin>>ch;
    ch=tolower(ch); //capita or small letter dose not metter
    switch (ch)
    {
    /*case 'A':
        cout<<"Vowel";
        break;
    case 'E':
        cout<<"Vowel";
        break;
    case 'I':
        cout<<"Vowel";
        break;
    case 'O':
        cout<<"Vowel";
        break;
    case 'U':
        cout<<"Vowel";
        break;*/
    case 'a':
        cout<<"Vowel";
        break;
    case 'e':
        cout<<"Vowel";
        break;
    case 'i':
        cout<<"Vowel";
        break;
    case 'u':
        cout<<"Vowel";
        break;
    case 'o':
        cout<<"Vowel";
        break;
    default:
    cout<<"consonant";
        break;
    }
}