//
//  main.c
//  Recursion
//
//  Created by D.Ruin on 07/08/2018.
//  Copyright © 2018 D.Ruin. All rights reserved.
//

#include <stdio.h>

void Recursive(int num){
    if(num <= 0) // 만약 num이 0이 되었을 때
        return ; // 함수 종료
    printf("Recursive call! %d \n", num);
    Recursive(num - 1); // 여기서 1씩 줄어듦
}

int main(void){
    Recursive(3);
    return 0;
}

// 완전 초간단한 재귀 예시...
