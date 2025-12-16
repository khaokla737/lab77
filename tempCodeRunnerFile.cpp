#include<iostream>
using namespace std;

char before(char x){
	if(x >= 'A' && x <= 'Z'){
        if(x == 'A'){
            x = 'Z';
        }
        else{
            x = x - 1;
        }
    }
    else{
        x = '0';
    }
    return x;
}

int main(){
	//Test Case
	char m;
	cout << "";
	cin >> m;
	cout << before(m);
	return 0;
}