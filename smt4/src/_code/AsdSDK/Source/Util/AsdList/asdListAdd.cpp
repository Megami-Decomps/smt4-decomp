/* NON_MATCHING: register allocation only: retail keeps item/func/list in r4/r5/r6, the build in r5/r6/r7 */
#include "AsdSDK/Source/Util/AsdList.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern const char DAT_00410690[];
void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void asdListInsert(void *list, AsdListNode *node, s32 index);

/* Adds an item (with its callback) to the end of a list; returns the new node. */
AsdListNode *asdListAdd(void *list, void *item, void *func)
{
    AsdListNode *node;

    asdDebugTrace(DAT_00410690, 53);
    node = (AsdListNode *)asdMemoryAlloc(0x100, 0x100, 0, sizeof(AsdListNode), 1);

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
