#include <iostream>
#include <map>

using namespace std;

int main(){
    map<string,int> mapa;
    map<int,string> mapa2;
    int cp,pc;
    string palabra;
    cin>>cp>>pc;
    for (int i = 0; i < cp ; i++)
    {
        cin>>palabra;
        mapa[palabra]++;
    }

    for(auto x: mapa){
       mapa2[x.second] = x.first;
    }
    for(auto x=(mapa2.end()); x!=(mapa2.begin());--x){
         cout<< x->first << " " << x->second << endl;
    }

    
}
