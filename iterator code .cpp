#include<bits/stdc++.h>
using namespace std;


//this is the code of copy the values not actual values...!!!
int main()
{
    vector<int>v={1,2,3,4,5};

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";

        cout<<endl;
    }

    vector<int> :: iterator it;

    for(it = v.begin();it!=v.end();++it)
    {
        cout<<(*it)<<" ";
    }
   
    for(int value : v)
    {
        cout<<value<<" ";
    }


}

// //values from the vector is come with actual using reference...!!

#include<bits/stdc++.h>
using namespace std;


//this is the code of copy the values not actual values...!!!
int main()
{
    vector<int>v={23,  33  ,48  ,55  ,60};

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";

        cout<<endl;
    }

    vector<int> :: iterator it;

    for(it = v.begin();it!=v.end();++it)
    {
        cout<<(*it)<<" ";
    }
    
    //using to get actual values...!!

    for(int &value : v)
    {
        cout<<value<<" "<<endl;
    }
   
    for(int value : v)
    {
        cout<<value<<" ";
    }

}

same cheez vector and pair m use kar sakte hai(we will be perform the same iteration in vector and pair)..


#include<bits/stdc++.h>
using namespace std;


//this is the code of copy the values not actual values...!!!
int main()
{
    vector<int>v={23,  33  ,48  ,55  ,60};

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";

        cout<<endl;
    }

    vector<int> :: iterator it;

    for(it = v.begin();it!=v.end();++it)
    {
        cout<<(*it)<<" ";
    }
    
    //--->>>>>>>>using to get actual values...!!

    for(int &value : v)
    {
        cout<<value<<" "<<endl;
    }

    //--->>>>>>>>using pair

    vector <pair<int,int> >vp={{1,2},{1,5},{11,33}};

    for(pair<int,int> &value : vp)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }
   
   
    for(int value : v)
    {
        cout<<value<<" ";
    }

}



//using pair by AUTO--->>>


#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={23,  33  ,48  ,55  ,60};

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";

        cout<<endl;
    }


  //using auto.....!!

    for(auto it = v.begin();it!=v.end();++it)
    {
        cout<<(*it)<<" ";
    }


    for(int &value : v)
    {
        cout<<value<<" "<<endl;
    }

    vector <pair<int,int> >vp={{1,2},{1,5},{11,33}};

    for(pair<int,int> &value : vp)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }

    auto a = 1.0;
    cout<<a<<endl;
   
   
    for(int value : v)
    {
        cout<<value<<" ";
    }

}




//using vevtor by AUTO--->>>


#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={23,  33  ,48  ,55  ,60};

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";

        cout<<endl;
    }


  //using auto.....!!

    for(auto it = v.begin();it!=v.end();++it)
    {
        cout<<(*it)<<" ";
    }


    for(int &value : v)
    {
        cout<<value<<" "<<endl;
    }

    vector <pair<int,int> >vp={{1,2},{1,5},{11,33}};

    for(auto &value : vp)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }

    auto a = 1.0;
    cout<<a<<endl;
   
    for(int value : v)
    {
        cout<<value<<" ";
    }

}
//   ALL ABOUT ITERATOR xd:)