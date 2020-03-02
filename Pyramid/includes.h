#include <bits/stdc++.h>
using namespace std;

const int cardValue[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13};

bool isAlpha(char a){
	if(a>=48 && a<=57){
		return true;
	}else{
		return false;
	}
}

typedef struct card{
    string name;
    int value;
    bool isAvaliable;
    void generate(string name){
        this->name=name;
        int add=0;
        if(isAlpha(name[0])){
            add=name[0]-48;
        }else{
            if(name=="J"){
                add=11;
            }else if(name=="Q"){
                add=12;
            }else{
                add=13;
            }
        }
        this->value=cardValue[add];
        this->isAvaliable=false;
    }
    void switchbool(){
        this->isAvaliable*=-1;
    }
}card;

bool cmp(card A,card B){
    if(A.value+B.value==13) 
        return true; 
    else
        return false;
}

void pass(){
    return; //ռλ 
}
