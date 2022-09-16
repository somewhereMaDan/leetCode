#include<iostream>
#include<map>
#include<string>
using namespace std;

// Map is an associative array

int main(int argc, char const *argv[])
{
  map<string, int> marksMap;
  marksMap["Madan"] = 97;
  marksMap["Ritika"] = 77;
  marksMap["Anshikha"] = 83;

  marksMap.insert({{"Naruto", 100}, {"Sasuke", 100}});
  map<string, int> :: iterator iter;
  for(iter = marksMap.begin(); iter != marksMap.end(); iter++){
    cout << (*iter).first << " " << (*iter).second << "\n";
  }

  return 0;
}
