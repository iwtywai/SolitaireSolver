#include ".\\includes.h"

vector<string> workFlow;
card Map[8][14],pairer[28];

void input(){
    for(int i=1;i<=7;i++){
        for(int j=1;j<=i;j++){
            string tmpName;
            cin>>tmpName;
            card tmpcard;
            tmpcard.generate(tmpName);
            Map[i-1][2*j-1]=tmpcard;
        }
    }
    for(int i=0;i<28;i++){
        string tmpName;
        cin>>tmpName;
        card tmpcard;
        tmpcard.generate(tmpName);
        pairer[i]=tmpcard;
    }
}

void solve(){
    pass();
}

int main(){
    input();
    solve();
    return 0;
}
