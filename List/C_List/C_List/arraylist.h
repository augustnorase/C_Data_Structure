//
//  arraylist.h
//  C_List
//
//  Created by D.Ruin on 24/07/2018.
//  Copyright © 2018 D.Ruin. All rights reserved.
//

#ifndef _ARRAYLIST_
#define _ARRAYLIST_

typedef struct ArrayListNodeType{
    int data;
    
}
ArrayListNode;

typedef struct ArrayListType{
    int maxElementCount;
    int currentElementCount;
    ArrayListNode *pElement;
    
}
ArrayList;

ArrayList* createArrayList(int maxElementCount);
void deleteArrayList(ArrayList* pList);
int isArrayListFull(ArrayList* pList);
int addAlElement(ArrayList* pList, int position, ArrayListNode element);
int removeAlElement(ArrayList* pList, int position);
ArrayListNode* getAlElement(ArrayList* pList);
void clearArrayList(ArrayList* pList);
int getArrayListLength(ArrayList* pList);

#endif /* arraylist_h */

#ifndef _COMMON_LIST_DEF_
#define _COMMON_LIST_DEF_

#define TRUE 1
#define FALSE 0

#endif
