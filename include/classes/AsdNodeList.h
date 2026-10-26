#ifndef CLASSES_ASDNODELIST_H
#define CLASSES_ASDNODELIST_H

#include "common.h"
#include <stddef.h>

struct AsdListLink {
    /* 0x00 */ AsdListLink *previous;
    /* 0x04 */ AsdListLink *next;
};

/* A list head whose destructor detaches every node without freeing it. */
class AsdNodeList {
public:
    AsdNodeList() : head(NULL) {}
    ~AsdNodeList();
    /* 0x00 */ AsdListLink *head;
};
typedef char AsdNodeListLayoutCheck[sizeof(AsdNodeList) == 4 && offsetof(AsdNodeList, head) == 0 ? 1 : -1];

#endif
