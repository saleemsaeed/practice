#include <unordered_map>
#include <iostream>
#include <vector>
//like hash table

using namespace std;

bool ransom_note(vector<string> magazine, vector<string> ransom) {
    unordered_map<string,int> wordsAvailable, wordsNeeded;
    for (vector<string>::iterator it=magazine.begin();it!=magazine.end();it++){
        wordsAvailable[*it]++;   //if you already have the word in the hashtable, incrememnt frequency
    }
    for (vector<string>::iterator it=ransom.begin();it!=ransom.end();it++){
        wordsNeeded[*it]++;
    }    
    for (vector<string>::iterator it=ransom.begin();it!=ransom.end();it++){
        if (wordsAvailable[*it]<wordsNeeded[*it]) return false;
    }    
    return true;
}

int main(){
    int m;
    int n;
    cin >> m >> n;
    vector<string> magazine(m);
    for(int magazine_i = 0;magazine_i < m;magazine_i++){
       cin >> magazine[magazine_i];
    }
    vector<string> ransom(n);
    for(int ransom_i = 0;ransom_i < n;ransom_i++){
       cin >> ransom[ransom_i];
    }
    if(ransom_note(magazine, ransom))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}