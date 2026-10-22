#ifndef CLASSES_OBJ420F70_H
#define CLASSES_OBJ420F70_H

#include "common.h"

struct HeapLinkNode {
    HeapLinkNode *previous;
    HeapLinkNode *next;
};

/* Unlinks each node without taking ownership of its storage. */
struct HeapLinkList {
    ~HeapLinkList()
    {
        if (first != NULL) {
            HeapLinkNode *node = first;
            do {
                HeapLinkNode *next = node->next;
                node->next = NULL;
                node->previous = NULL;
                node = next;
            } while (node != NULL);
            first = NULL;
        }
    }
    HeapLinkNode *first;
};

/* Abstract heap interface; all seven vtable entries are pure virtual. */
class Obj420f70 {
public:
    virtual ~Obj420f70() = 0;
    virtual void vfunc08() = 0;
    virtual void vfunc0c() = 0;
    virtual void vfunc10() = 0;
    virtual void vfunc14() = 0;
    virtual void vfunc18() = 0;
protected:
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 outstanding;
    /* 0x10 */ HeapLinkList links;
};

#endif
