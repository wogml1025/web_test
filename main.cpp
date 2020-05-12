//
//  main.cpp
//  baekjoon
//
//  Created by 가재희 on 2020/01/05.
//  Copyright © 2020 가재희. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int hour, min;
    
    cin >> hour >> min ;
    
    if(min>45){
        min = min-45;
        cout << hour << min << endl;
    }else{
        hour = hour-1;
        min = 60 - (45 - min);
        if(min == 60){
            hour=hour+1;
            cout << hour << " " << endl;
        }else
        cout << hour << " " << min << endl;
    }
    
    return 0;
}
