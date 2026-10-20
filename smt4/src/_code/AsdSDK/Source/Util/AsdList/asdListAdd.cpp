/* NON_MATCHING: retail has a stripped debug call (file/line setup + nop) before the node allocation. */
#include "AsdSDK/Source/Util/AsdList.h"

extern "C" {
void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void asdListInsert(void *list, AsdListNode *node, s32 index);

/* Adds an item (with its callback) to the end of a list; returns the new node. */
AsdListNode *asdListAdd(void *list, void *item, void *func)
{
    AsdListNode *node = (AsdListNode *)asdMemoryAlloc(0x100, 0x100, 0, sizeof(AsdListNode), 1);

    node->unk00 = 0;
    node->unk04 = 0;
    node->unk0c = 0;
    node->unk14 = 0;
    node->unk18 = 0;
    node->item = item;
    node->func = func;
    asdListInsert(list, node, ASD_LIST_APPEND);
    return node;
}

} /* extern "C" */
