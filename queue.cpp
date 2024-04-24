#include <iostream>
#include <queue>

using namespace std;
int main(){
    queue<string> q;
    q.push("Harsh");
    q.push("is");
    q.push("a good");
    q.push("boy");
cout<< "size before pop"<<q.size()<<endl;
cout <<"first element"<< q.front()<<endl;
q.pop();
cout <<" size after pop =>"<<q.size()<<endl;
cout <<"new first element now=>" <<q.front()<<endl;
}