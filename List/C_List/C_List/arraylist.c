//
//  arraylist.c
//  C_List
//
//  Created by D.Ruin on 24/07/2018.
//  Copyright © 2018 D.Ruin. All rights reserved.
//

#include "arraylist.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

ArrayList* createArrayList(int maxElementCount){
    ArrayList *pReturn = NULL;
    int i = 0;
    
    if(maxElementCount > 0){
        pReturn = (ArrayList *)malloc(sizeof(ArrayList));
        
        if(pReturn != NULL){
            pReturn -> maxElementCount = maxElementCount;
            pReturn -> currentElementCount = 0;
            pReturn -> pElement = NULL;
        }
        else{
            printf("오류, 메모리할당 createArrayList()\n");
            return NULL;
        }
    }
    else{
        printf("오류, 최대 원소 개수는 0 이상이어야 합니다.\n");
        return NULL;
    }
    
    pReturn -> pElement = (ArrayList *)malloc(sizeof(ArrayListNode) * maxElementCount);
    
    if(pReturn -> pElement == NULL){
        printf("오류, 2번째 메모리할당 createArrayList()\n");
        free(pReturn);
        return NULL;
    }
    memset(pReturn -> pElement, 0, sizeof(ArrayListNode) * maxElementCount);
    
    return pReturn;

    
}
