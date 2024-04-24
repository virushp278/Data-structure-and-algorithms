#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> l;
    l.push_back(2);
    l.push_front(3);

    for(int i:l){
        cout<< i <<" ";
    }
    cout<< ""<< endl;
    l.push_front(5);
    l.push_front(7);
    l.pop_back();
    for(int i:l){
        cout<< i <<" "<<endl;
    }
    l.erase(l.begin());
    cout<<"size after erase =>> "<<l.size()<<endl;
   
}