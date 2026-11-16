#include "AsdSDK/Source/Util/AsdList.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Util/AsdListHelpers.h"

extern "C" {

extern const char g_asdListSourceFileName[];
void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);

/* Allocates a cleared list node holding an item and its callback. */
static __inline AsdListNode *asdListNodeCreate(void *item, void *func)
{
    AsdListNode *node;

    asdDebugTrace(g_asdListSourceFileName, 53);
    node = (AsdListNode *)asdMemoryAlloc(0x100, 0x100, 0, sizeof(AsdListNode), 1);

    node->unk00 = 0;
    node->unk04 = 0;
    node->unk0c = 0;
    node->unk14 = 0;
    node->unk18 = 0;
    node->item = item;
    node->func = func;
    return node;
}

/* Adds an item (with its callback) to the end of a list; returns the new node. */
AsdListNode *asdListAdd(void *list, void *item, void *func)
{
    AsdListNode *node = asdListNodeCreate(item, func);

    asdListInsert(list, node, ASD_LIST_APPEND);
    return node;
}

} /* extern "C" */
