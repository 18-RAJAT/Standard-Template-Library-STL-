#include<bits/stdc++.h>

using namespace std;

int main()
{

    vector<int>v = {1,2,3,4,5,6};

    for(int i =0; i<v.size(); i++)
    {
        cout<<v[i]<<endl<<endl <<" ";
    }

    vector<int>::iterator it = v.begin()   ;
    
    //find the value is using pointer
    
    //1st element
    cout<<(*(it))<< endl <<endl;

    cout<<(*(it+1))<<endl;

    cout<<(*(it+2))<<endl;

}



#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v = {2,4,5};

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }

    vector<int> :: iterator it =v.begin();

    for (it = v.begin();it !=v.end();++it)
    {
        cout<<(*(it))<<endl;
    }
}

//output is || 2 4 5 2 4 5 ...
