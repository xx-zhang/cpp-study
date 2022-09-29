#include <map>
#include <string>
#include <iostream>

int main(){
    using std::map;
    using std::string;
    using std::cout;

    map<string, string> myMap1 = {
        {"Name", "ClearLove"},
        {"Gender", "Male"},
        {"Position", "Jungle"},
        {"ID", "1"}
    };

    map<string, string> myMap2;
    myMap2["Name"] = "TheShy";
    myMap2["Gender"] = "Male";
    myMap2["Position"] = "Top";
    myMap2["ID"] = "2";

    map<string, string> myMap3(myMap2.begin(), myMap2.end());
    myMap3["ID"] = "3";

    map<string, string> myMap4(myMap3);
    myMap4["ID"] = "4";

    map<string, string> mapArr[4] = {myMap1, myMap2, myMap3, myMap4};

    map<string, string>::iterator iter;

    for(int iMap=0; iMap<4; iMap++){
        cout << "Map " << iMap+1 << " of 4\n";
        for(iter=mapArr[iMap].begin(); iter!=mapArr[iMap].end(); iter++){
            cout << "key: " << iter->first << " , value: " << iter->second << ".\n";
        }
    }
    return 0;
}
