/* NON_MATCHING: retail reloads list->tail for node->prev and bumps count/tail through one writeback store; built reuses the loaded tail and uses separate stores. */
#include "common.h"

struct EffBlock;

struct EffNode {
    u8 unk00[0x90];
    EffBlock *block;  // 0x90
    u8 unk94[0x18];
    EffNode *next;    // 0xac
    EffNode *prev;    // 0xb0
};

struct EffList {
    u8 unk00[0x80];
    s32 count;        // 0x80
    u8 unk84[4];
    EffNode *tail;    // 0x88
    EffNode *head;    // 0x8c
};

extern "C" {

void *FUN_001642e4(const void *path, u32 *size, u32 align, u32 flags);
EffBlock *FUN_00290edc(void *data);
void asdMemFree(void *ptr);
EffNode *FUN_003007a0(void);

// Load a block from a file, clone it into a new node and append the node to the list.
void FUN_0037667c(EffList *list, const void *path)
{
    u32 size;
    void *data = FUN_001642e4(path, &size, 1, 0x80);
    EffBlock *block = FUN_00290edc(data);
    asdMemFree(data);
    EffNode *node = FUN_003007a0();
    node->next = NULL;
    node->block = block;
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
