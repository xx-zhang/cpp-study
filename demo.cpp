#include<iostream>
#include<vector>
#include<map>
#include<list>
// #include<hash_map>
#include<hash_set>
#include<filesystem>
#include<unordered_map>
#include<set>

using namespace std; 

int testMap1(){

     unordered_map<const char*, int> months;
 
     months["january"] = 31;
     months["february"] = 28;
     months["march"] = 31;
     months["april"] = 30;
     months["may"] = 31;
     months["june"] = 30;
     months["july"] = 31;
     months["august"] = 31;
     months["september"] = 30;
     months["october"] = 31;
     months["november"] = 30;
     months["december"] = 31;
 
     cout << "september -> " << months["september"] << endl;
     cout << "april     -> " << months["april"] << endl;
     cout << "june      -> " << months["june"] << endl;
     cout << "november  -> " << months["november"] << endl;

     return 0; 

}



int main()
{
    list<int> t; 
    t.push_back(111); 

    std::cout << t.size() << endl; 
    vector<int> a;
    for( int i; i<10; i++){
        a.push_back( i * 10);
    }
    // for (int i=0; i< a.size(); i++){
    //     std:cout << a[i] << endl; 
    // }

    map<int, int> b;
    for( int i; i<10; i++){
        b.insert({i, 2*i});   
    }

    std::hash<int> hash_int;// Function object to hash int
    std::vector<int> n = {-5, -2, 2, 5, 10};
    std::transform(
        std::begin(n), 
        std::end(n),
        std::ostream_iterator<size_t> (std::cout," "),
        hash_int
    );

    // for (int i=0; i< b.size(); i++){
    //     std::cout << b[i] << endl; 
    // }

    testMap1();

    return 0; 
}

