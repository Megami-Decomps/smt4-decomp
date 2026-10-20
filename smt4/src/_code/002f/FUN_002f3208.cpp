/* NON_MATCHING: retail predicates the tail/prev stores separately (strne/streq) and bumps the count before storing the new tail; this build merges the node->prev store and stores the tail first */
#include "common.h"

extern "C" {

typedef struct EffNode {
    /* 0x000 */ u8 unk000[0x90];
    /* 0x090 */ void *block;
    /* 0x094 */ u8 unk094[0x18];
    /* 0x0AC */ struct EffNode *next;
    /* 0x0B0 */ struct EffNode *prev;
} EffNode;

typedef struct EffList {
    /* 0x00 */ u8 unk00[0x80];
    /* 0x80 */ s32 count;
    /* 0x84 */ u8 unk84[4];
    /* 0x88 */ EffNode *tail;
    /* 0x8C */ EffNode *head;
} EffList;

extern void *effBlockCloneDeep(void *block);
extern EffNode *FUN_0025c870(void);

/* Appends a node holding a deep copy of `block` to the list. */
void FUN_002f3208(EffList *list, void *block)
{
    void *clone = effBlockCloneDeep(block);
    EffNode *node = FUN_0025c870();

    node->next = NULL;
    node->block = clone;
    if (list->tail != NULL) {
        list->tail->next = node;
        node->prev = list->tail;
    } else {
        list->head = node;
        node->prev = NULL;
    }
    list->count++;
    list->tail = node;
}

} /* extern "C" */
