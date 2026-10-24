/* NON_MATCHING: logic and calls match (std::list-style unlink with the iterator-compare helper); stack locals differ: retail has `second` at sp+4 and the zero temporary at sp+0 with the frame allocated by `push {r1-r3,...}`, built swaps the slots and uses `sub sp, #12` */
#include "common.h"

extern "C" {

struct LinkNode {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ LinkNode *first;
    /* 0x08 */ LinkNode *second;
};

struct LinkList {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ LinkNode *head;
    /* 0x08 */ LinkNode *tail;
    /* 0x0c */ u8 unk0c[4];
    /* 0x10 */ s32 count;
};

u32 wordRefsDiffer_002fe9f2(LinkNode **a, LinkNode **b);

/* Unlinks the node `*nodeRef` from `list`; `*next` receives its first link, its second link is used to patch the neighbour. */
void FUN_002fea02(LinkNode **next, LinkList *list, LinkNode **nodeRef, u32 unused)
{
    LinkNode *second = (*nodeRef)->second;

    *next = (*nodeRef)->first;
    LinkNode *none = NULL;
    if (wordRefsDiffer_002fe9f2(&second, &none)) {
        second->first = *next;
    }
    (*nodeRef)->second = NULL;
    none = NULL;
    if (wordRefsDiffer_002fe9f2(next, &none)) {
        (*next)->second = second;
    }
    (*nodeRef)->first = NULL;
    if (list->head == *nodeRef) {
        list->head = *next;
    }
    if (list->tail == *nodeRef) {
        list->tail = second;
    }
    list->count--;
}

} /* extern "C" */
