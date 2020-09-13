
 //Unordered_set 
// Basic functions of Unordered_set

#include<bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[])
{
   
   unordered_set<string>unset;
   unset.insert("Rishi");
   unset.insert("Ram");
   unset.insert("chandan");
   unset.insert("karan");

   cout<<"Enter the key to find :";
   string key;
   cin>>key;

   if(unset.find(key)==unset.end())
        cout<<"\nNot found"<<endl;
    else
        cout<<"Found"<<endl;

    return 0;
}

