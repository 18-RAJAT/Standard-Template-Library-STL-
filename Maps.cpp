// /*
using iterator

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int ,string> m;
    
    m[1] ="rajat";
    m[5] ="joshi";
    m[4] ="rajat";

    m.insert({7,"agg"});
    
    map<int , string> :: iterator it;

    for(it = m.begin(); it !=m.end();++it)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
}


// /*

// using auto keyword>>

// */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int ,string> m;
    
    m[1] ="rajat";
    m[5] ="joshi";
    m[4] ="rajat";

    m.insert({7,"agg"});
    
    //copy create nahi ho karke we will use &.....!!

    for(auto &pair : m)
    {
        cout<<pair.first <<" "<<pair.second<<endl;
    }
}



// /*using function*/

#include<bits/stdc++.h>
using namespace std;

void print(map<int,string> &m)
{
    cout<<m.size()<<endl;

    for(auto &pair : m)
    {
        cout<<pair.first<<" "<<pair.second<<endl;
    }
}

int main()
{
    map<int,string>m;
    
    //tc O(logn)..this is (n log n) 

    m[1] ="rajat";
    m[5] ="joshi";
    m[4] ="rajat";

    m.insert({7,"fz"});

    print(m);
}


/*find (searching) >> time complexity O(log n)*/


#include<bits/stdc++.h>
using namespace std;

void print(map<int,string> &m)
{
    cout<<m.size()<<endl;

    for(auto &pair : m)
    {
        cout<<pair.first<<" "<<pair.second<<endl;
    }
}

int main()
{
    map<int,string>m;
    
    //tc O(logn)..this is (n log n) 

    m[1] ="rajat";
    m[5] ="joshi";
    m[4] ="rajat";

    m.insert({7,"fz"});


    auto it = m.find(2);  //>>return iterator

    if(it == m.end())
    {
        cout<<"no value"<<endl;
    }
    else
    {
      cout<<(*it).first<<" "<<(*it).second<<endl;
    }

}


   /*earse m.earse()*/

   
#include<bits/stdc++.h>
using namespace std;

void print(map<int,string> &m)
{
    cout<<m.size()<<endl;

    for(auto &pair : m)
    {
        cout<<pair.first<<" "<<pair.second<<endl;
    }
}

int main()
{
    map<int,string>m;
    
    //tc O(logn)..this is (n log n) 

    m[1] ="rajat";
    m[5] ="joshi";
    m[4] ="rajat";

    m.insert({7,"fz"});


    auto it = m.find(4);  //>>return iterator
   
    m.erase(5);

    print(m);

}

/*clear  m.clear()*/

#include<bits/stdc++.h>
using namespace std;

void print(map<int,string> &m)
{
    cout<<m.size()<<endl;

    for(auto &pair : m)
    {
        cout<<pair.first<<" "<<pair.second<<endl;
    }
}

int main()
{
    map<int,string>m;
    
    //tc O(logn)..this is (n log n) 

    m[1] ="rajat";
    m[5] ="joshi";
    m[4] ="rajat";

    m.insert({7,"fz"});


    auto it = m.find(4);  //>>return iterator

    m.clear();

    print(m);

}


/* time complexty depends on keys*/

#include<bits/stdc++.h>
using namespace std;

void print(map<string,string> &m)
{
    cout<<m.size()<<endl;

    for(auto &pair : m)
    {
        cout<<pair.first<<" "<<pair.second<<endl;
    }
}

int main()
{
    map<string,string>m;
    
    m["abcd"] = "abf"; //-->>time complexity>> s.size() * log(n)
   
    print(m);

}



/*question related maps-->> Given N strings print uniuque strings in lexiographical order with their frequency

N <=10^5

|S|<=100

*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    map <string,int>m;

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;

       //  m[s] = m[s]+1;
       m[s]++;

    }

    for(auto pair: m)
    {
        cout<<pair.first<<" "<<pair.second<<" " <<endl<<endl;
    }
}


