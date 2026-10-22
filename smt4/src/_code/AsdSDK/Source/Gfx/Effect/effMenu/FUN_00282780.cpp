/* NON_MATCHING: Allocation constants and linked-list tails use different saved registers and store grouping. */
#include "AsdSDK/Source/Gfx/Effect/effMenu.h"
#include "AsdSDK/AsdDebug.h"
extern "C" {
void* memAlloc(u32, u32, u32, u32, u32, u32);
extern const char DAT_004102c8[];
extern EffMenuLists g_effMenuHandles;

void FUN_00282780(u32 first, u32 second, u32 third, u32 fourth)
{
    asdDebugTrace(DAT_004102c8, 641);
    EffMenuRenderNode* node = (EffMenuRenderNode*)memAlloc(0x10000, 0x100, 0,
        sizeof(EffMenuRenderNode), 0x10, 1);
    node->unk04 = 5;
    node->unk08 = first;
    node->unk0c = second;
    node->unk10 = third;
    node->unk14 = fourth;
    node->unk18 = 0xFFFFC040;
    node->render.flags = 0xC0000000;
    if (g_effMenuHandles.head[3] == NULL) {
        g_effMenuHandles.head[3] = node;
    } else {
        g_effMenuHandles.tail[3]->next = node;
    }
    g_effMenuHandles.tail[3] = node;
    node->next = NULL;
}
}
