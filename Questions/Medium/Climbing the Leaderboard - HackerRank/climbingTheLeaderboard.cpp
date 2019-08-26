
#include <map>
#include <iterator>
#include <vector>

// Complete the climbingLeaderboard function below.

void find(int aliceScore, int &rankNum, map<int, int> sc){
    map <int ,int>::iterator itr;
    bool work = true;
    
   
        for(itr = sc.begin(); work && itr != sc.end(); itr++){
            
            if(aliceScore == itr->first){
                rankNum = itr->second;
                work = false;
            }
            if(aliceScore < itr->first ){
                rankNum = itr->second + 1;
                work = false;
            }
        }   
        if(work){
            rankNum = 1;
        }
}
vector<int> climbingLeaderboard(vector<int> scores, vector<int> alice) {
    
    vector<int> holdIndex;
    map <int, int> sc;
    map <int, int>::iterator itr;
   
    int index = 1;
    bool good = false;
    
    for(int i = 0; i < scores.size(); i++){
        good = false;
        if(sc.empty()) {
            sc.insert(pair<int, int> (scores.at(i), index));

        } else {
            for(itr = sc.begin(); itr != sc.end(); itr++){
                if(itr->first == scores.at(i)){
                    good = true;
                }
            }
            if(good == false){
                ++index;
                sc.insert(pair<int, int> (scores.at(i),index));
 
            }
        }
    }

    for(int i = 0; i < alice.size(); i++) {
        index = 1;
        find(alice.at(i), index, sc);
        holdIndex.push_back(index);
    } 

    return holdIndex;
}
