#include<iostream>
using namespace std;

int main()
{
    char str[100];
    int vowels=0,consonants=0;
    cout<<"Enter a string: ";
cin.getline(str,100);

  gets(str);
    for(int i=0 ; str[i] !='\0'; i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            vowels++;
        }
        else if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
        {
            consonants++;
        }
    }
    cout<<"Number of vowels: "<<vowels<<endl;
    cout<<"Number of consonants: "<<consonants<<endl;
} 