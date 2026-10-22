/* NON_MATCHING: fixed payload constants are rematerialized after allocation and adjacent stores are merged. */
#include "AsdSDK/Source/Gfx/Effect/effMenu.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern const char DAT_00544a98[];
extern EffMenuLists g_effMenuHandles;
void *memAlloc(u32 pool, u32 allocatorFlags, u32 flags, u32 bytes, u32 alignment, u32 clear);

void FUN_002b3fd8(u32 first, u32 second, u32 third, u32 fourth)
{
    asdDebugTrace(DAT_00544a98, 0x283);
    EffMenuRenderNode *node = static_cast<EffMenuRenderNode *>(
        memAlloc(0x10000, 0x100, 0, sizeof(EffMenuRenderNode), 0x10, 1));
    node->render.flags = 0xc0000000;
    node->unk04 = 5;
    node->unk08 = first;
    node->unk0c = second;
    node->unk10 = third;
    node->unk14 = fourth;
    node->unk18 = 0xffffc040;
    if (g_effMenuHandles.head[3] == 0) {
        g_effMenuHandles.head[3] = node;
    } else {
        g_effMenuHandles.tail[3]->next = node;
    }
    g_effMenuHandles.tail[3] = node;
    node->next = 0;
}
}
