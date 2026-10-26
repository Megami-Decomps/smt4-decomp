/* NON_MATCHING: only scheduling differs: retail loads the 0xc0000000 flags constant before the r2/r3 argument moves and addresses the payload stm through lr. */
#include "AsdSDK/Source/Gfx/Effect/effMenu.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern const char DAT_004102c8[];
extern EffMenuLists g_effMenuHandles;
void *memAlloc(u32 pool, u32 allocatorFlags, u32 flags, u32 bytes, u32 alignment, u32 clear);

static __inline EffMenuRenderNode *createMenuRenderNode(u32 first, u32 second, u32 third, u32 fourth, u32 flags, u32 fifth)
{
    asdDebugTrace(DAT_004102c8, 641);
    EffMenuRenderNode *node = static_cast<EffMenuRenderNode *>(
        memAlloc(0x10000, 0x100, 0, sizeof(EffMenuRenderNode), 0x10, 1));
    node->unk08 = first;
    node->unk0c = second;
    node->unk10 = third;
    node->unk14 = fourth;
    node->unk18 = fifth;
    node->unk04 = 5;
    node->render.flags = flags;
    return node;
}

void FUN_00282780(u32 first, u32 second, u32 third, u32 fourth)
{
    EffMenuRenderNode *node = createMenuRenderNode(first, second, third, fourth, 0xc0000000, 0xffffc040);
    EffMenuNode **tail = g_effMenuHandles.tail;
    if (g_effMenuHandles.head[3] == 0) {
        g_effMenuHandles.head[3] = node;
    } else {
        tail[3]->next = node;
    }
    tail[3] = node;
    node->next = 0;
}
}
