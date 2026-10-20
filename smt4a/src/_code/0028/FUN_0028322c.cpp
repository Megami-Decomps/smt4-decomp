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

void FUN_00285834(Node *node);

void FUN_0028322c(Node *node);

/* Clears the owner slot of `node` (if it has one) and releases it. */
void FUN_0028322c(Node *node)
{
    if (node == NULL) {
        return;
    }
    if (node->owner2 != NULL) {
        *node->owner2 = 0;
    }
    FUN_00285834(node);
}

} /* extern "C" */
