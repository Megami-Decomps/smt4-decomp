/* NON_MATCHING: allocation argument registers, grouped payload stores, and separate tail-array addressing differ. */
#include "AsdSDK/Source/Gfx/Effect/effMenu.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
void *memAlloc(u32, u32, u32, u32, u32, u32);
extern const char DAT_004102c8[];
extern EffMenuLists g_effMenuHandles;

// Append a render effect with caller-supplied horizontal and vertical parameters.
__softfp void FUN_002826d4(u32 first, u32 second, u32 third, u32 fourth,
                          f32 horizontal, f32 vertical)
{
    asdDebugTrace(DAT_004102c8, 641);
    EffMenuRenderNode *node = (EffMenuRenderNode *)memAlloc(0x10000, 0x100, 0,
        sizeof(EffMenuRenderNode), 0x10, 1);
    node->unk08 = first;
    node->unk0c = second;
    node->unk10 = third;
    node->unk14 = fourth;
    node->horizontal = horizontal;
    node->vertical = vertical;
    node->unk04 = 5;
    if (g_effMenuHandles.head[3] == NULL) {
        g_effMenuHandles.head[3] = node;
    } else {
        g_effMenuHandles.tail[3]->next = node;
    }
    g_effMenuHandles.tail[3] = node;
    node->next = NULL;
}
}
