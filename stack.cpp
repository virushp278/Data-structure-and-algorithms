#include <iostream>
#include <stack>

using namespace std;
int main(){
    stack<string> s;
    s.push("Harsh");
    s.push("is");
    s.push("a good");
    s.push("boy");
cout<< "size before pop"<<s.size()<<endl;
cout <<"first element"<< s.top()<<endl;
s.pop();
cout <<" size after pop =>"<<s.size()<<endl;
cout <<"new first element now=>" <<s.top()<<endl;
cout<<"empty or not"<<s.empty();
}