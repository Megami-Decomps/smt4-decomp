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
} BtlNode;

typedef struct BtlList {
    /* 0x0 */ BtlNode *first;
} BtlList;

extern BtlList *DAT_00435d78;
extern s32 FUN_002b6b04(void);

/* Whether any node in the list has a valid index, kind 1, flag 0 clear and passes FUN_002b6b04. */
u32 btlNodeListAnyReady(void)
{
    BtlNode *node = DAT_00435d78->first;

    while (node != NULL) {
        BtlNode *next = node->next;

        if (node->index >= 0 && node->kind == 1 && (node->flags & 1) == 0 && FUN_002b6b04() != 0) {
            return 1;
        }
        node = next;
    }
    return 0;
}

} /* extern "C" */
