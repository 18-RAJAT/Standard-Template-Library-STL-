
#include<bits/stdc++.h>

#include<string>

using namespace std;

void print(set<string> &s)
{
    cout<<s.size()<<endl<<endl;
    //1st way to access the value 
for(string value : s)
{
    cout<<value<<endl<<endl;
}

cout<<"||||||"<<endl<<endl;

   //2nd way to access the value
for(auto it = s.begin();it !=s.end();++it)
{
   
    cout<<(*it)<<endl<<endl;;
}
}

int main()
{

    //declare the set

    set <string> s;
    s.insert("abc");
    s.insert("xyz");
    s.insert("rajat");
    
    auto it = s.find("abc");

    print(s);
}


//// inertion time complexity is >> log(n)


//find 

#include<bits/stdc++.h>

#include<string>

using namespace std;

void print(set<string> &s)
{
    cout<<s.size()<<endl<<endl;
    //1st way to access the value 
for(string value : s)
{
    cout<<value<<endl<<endl;
}

}

int main()
{

    //declare the set

    set <string> s;
    s.insert("abc");
    s.insert("xyz");
    s.insert("rajat");
    
    auto it = s.find("abc");
   
   //.end always check be aware to the not get segmenation fault...!!
   if(it !=s.end())
   {
       cout<<(*it);
       s.erase(it);
   }
    print(s);
}
