#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() 
   {    
    map<string, string> PhoneList;

    int n;
    cin>>n;

    string name,ph,str;

    while(n--)

        {

         cin>>name>>ph;

         PhoneList[name] = ph;

        }

    while( getline (cin,str) )

      { 
          cin>>str;

          auto ph = PhoneList.find(str);

               if(ph==PhoneList.end())

                  cout<<"Not Found\n";

               else

                  cout<<str<<"="<<ph->second<<endl;
      }

    return 0;
}

