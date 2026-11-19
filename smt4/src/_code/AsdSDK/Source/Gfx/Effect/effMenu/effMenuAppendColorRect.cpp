/* NON_MATCHING: argument registers (r7 first, r4-r6 for the stm) now match; retail still moves the arguments around the stack-word copy in another order and uses ip/r1/r2 where the build uses r3/r2/r1. */
#include "AsdSDK/Source/Gfx/Effect/effMenu.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
void *memAlloc(u32, u32, u32, u32, u32, u32);
extern const char DAT_004102c8[];
extern EffMenuLists g_effMenuHandles;

// Append a render effect for the rectangle (first..fourth) with two colour words (callers pass 0x80808080, 0xff000000).
void effMenuAppendColorRect(u32 first, u32 second, u32 third, u32 fourth, u32 topColor, u32 bottomColor)
{
    asdDebugTrace(DAT_004102c8, 641);
    EffMenuRenderNode *node = (EffMenuRenderNode *)memAlloc(0x10000, 0x100, 0,
        sizeof(EffMenuRenderNode), 0x10, 1);
    node->unk0c = second;
    node->unk10 = third;
    node->unk14 = fourth;
    node->unk08 = first;
    node->unk18 = topColor;
    node->render.flags = bottomColor;
    node->unk04 = 5;
    EffMenuNode **tail = g_effMenuHandles.tail;
    if (g_effMenuHandles.head[3] == NULL) {
        g_effMenuHandles.head[3] = node;
    } else {
        tail[3]->next = node;
    }
    tail[3] = node;
    node->next = NULL;
}
}
