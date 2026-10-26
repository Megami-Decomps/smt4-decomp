/* NON_MATCHING: retail keeps the first argument in r7 (stored alone, then stm of three) and copies the stack floats before the argument moves; tail-array addressing matches. */
#include "AsdSDK/Source/Gfx/Effect/effMenu.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
void *memAlloc(u32, u32, u32, u32, u32, u32);
extern const char DAT_00544a98[];
extern EffMenuLists g_effMenuHandles;

// Append a render effect with caller-supplied horizontal and vertical parameters.
__softfp void FUN_002cf28c(u32 first, u32 second, u32 third, u32 fourth,
                          f32 horizontal, f32 vertical)
{
    asdDebugTrace(DAT_00544a98, 0x283);
    EffMenuRenderNode *node = (EffMenuRenderNode *)memAlloc(0x10000, 0x100, 0,
        sizeof(EffMenuRenderNode), 0x10, 1);
    node->unk08 = first;
    node->unk0c = second;
    node->unk10 = third;
    node->unk14 = fourth;
    node->horizontal = horizontal;
    node->vertical = vertical;
    node->unk04 = 5;
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
