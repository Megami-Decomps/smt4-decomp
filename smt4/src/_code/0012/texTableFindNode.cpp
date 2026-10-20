#include "common.h"

extern "C" {

typedef struct TexNode TexNode;

struct TexNode {
    /* 0x00 */ s32 id;
    /* 0x04 */ u8 unk04[0xC];
    /* 0x10 */ TexNode *next;
};

typedef struct TexList {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ TexNode *head;
} TexList;

typedef struct TexSlot {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ TexList *list;
    /* 0x08 */ u8 unk08[0x10];
} TexSlot;

extern TexSlot *g_texTable;

/* Finds the node with the given id in the texture slot's list; NULL when absent. */
TexNode *texTableFindNode(s32 slot, s32 id)
{
    TexNode *found = NULL;
    TexNode *node = g_texTable[slot].list->head;

    while (node != NULL) {
        if (node->id == id) {
            found = node;
            break;
        }
        node = node->next;
    }
    return found;
}

} /* extern "C" */
