// data structure is used  in multimap is not defined by standerd BUT like RED BLACK TREE assumed by most -->>

//use of this we will be add multiple values....!!

//it store key value pair in sorted order on basic of the key (assending/decending)!

//lookup:: count,find,contains,equal_range,lower_bound,upper_bound

//syntax-->multimap<char,int,std::greater<>> multimap;
#include<bits/stdc++.h>
using namespace std;

int main()
{
  
  std::multimap<char,int>multimap;

  multimap.insert(make_pair('a',1));
  multimap.insert(make_pair('b',2));
  multimap.insert(make_pair('c',3));
  multimap.insert(make_pair('d',4));
  multimap.insert(make_pair('e',5));

  //iterate over the multimap

  for(auto &element :multimap)
  {
      cout<<element.first<<" "<<element.second<<endl;
  }

  //get all the pairs of the given key
  auto range = multimap.equal_range ('a');

  for(auto it = range.first ; it!=range.second;++it)
  {
      cout<<it->first<<" "<<it->second<<endl;
  }

}
