#include "common.h"

extern "C" {

typedef struct Node {
    /* 0x000 */ u8 unk000[2];
    /* 0x002 */ u8 flag;
    /* 0x003 */ u8 unk003[0x21];
    /* 0x024 */ void *unk24;
    /* 0x028 */ void *unk28;
    /* 0x02C */ void *unk2C;
    /* 0x030 */ void *unk30;
    /* 0x034 */ u8 unk034[0x1F4];
    /* 0x228 */ u32 *owner;
    /* 0x22C */ u8 unk22C[0xC];
    /* 0x238 */ struct Node *children[0x32];
    /* 0x300 */ u8 unk300[0x84];
    /* 0x384 */ u32 *owner2;
} Node;

void nodeTreeReleaseItem(Node *node);

void nodeTreeReleaseItemClearOwner(Node *node);

/* Releases the node's 0x32 children, clears its four pointers and its owner slot, then releases the node. */
void nodeGroupReleaseAlt(Node *node)
{
    u32 *owner;
    s32 i;

    i = 0;
    if (node != NULL) {
        do {
            nodeTreeReleaseItemClearOwner(node->children[i]);
            i = i + 1;
        } while (i < 0x32);
        owner = node->owner;
        node->unk24 = NULL;
        node->unk28 = NULL;
        node->unk2C = NULL;
        node->unk30 = NULL;
        if (owner != NULL) {
            *owner = 0;
        }
        nodeTreeReleaseItem(node);
        return;
    }
}

} /* extern "C" */
