#include "common.h"

extern "C" {

typedef struct BtlNode {
    /* 0x000 */ u8 unk000[2];
    /* 0x002 */ u16 kind;
    /* 0x004 */ u8 unk004[2];
    /* 0x006 */ u16 flags;
    /* 0x008 */ u8 unk008[0x298];
    /* 0x2A0 */ u8 unk2A0[2];
    /* 0x2A2 */ s16 index;
    /* 0x2A4 */ struct BtlNode *next;
    /* 0x2A8 */ struct BtlNode *prev;
} BtlNode;

typedef struct BtlList {
    /* 0x0 */ BtlNode *first;
    /* 0x4 */ BtlNode *last;
    /* 0x8 */ s32 count;
} BtlList;

extern BtlList *DAT_00435d78;
s32 FUN_002b6b04(void);
void infoWinStartTimer(s32 mode);
void asdMemFree(void *memory);

/* Removes a node from its list and returns it. */
static __inline BtlNode *btlListRemove(BtlList *list, BtlNode *node)
{
    if (node->prev == NULL) {
        list->first = node->next;
    } else {
        node->prev->next = node->next;
    }
    if (node->next == NULL) {
        list->last = node->prev;
    } else {
        node->next->prev = node->prev;
    }
    list->count--;
    return node;
}

/* Frees every node of the list, starting the info window timer for each ready one (valid index,
 * kind 1, flag 0 clear, FUN_002b6b04 passing). */
void FUN_0027e874(void)
{
    BtlNode *node = DAT_00435d78->first;

    while (node != NULL) {
        BtlNode *next = node->next;

        if (node->index >= 0 && node->kind == 1 && (node->flags & 1) == 0 && FUN_002b6b04() != 0) {
            infoWinStartTimer(1);
        }
        asdMemFree(btlListRemove(DAT_00435d78, node));
        node = next;
    }
}

} /* extern "C" */
