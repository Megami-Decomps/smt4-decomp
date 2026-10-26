/* NON_MATCHING: callers pass six words (four payload words, colour word, flags word); retail allocates the first argument to r7 so it is stored alone (str; stm of three) where the build stores four words with one stm. */
#include "AsdSDK/Source/Gfx/Effect/effMenu.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
void* memAlloc(u32 size, u32 flags, u32 unkArg2, u32 unkArg3,
               u32 alignment, u32 unkArg5);
extern const char DAT_00544a98[];
extern EffMenuLists g_effMenuHandles;

// Allocate a type-5 menu node, fill its six parameter words, and append it to menu list 3.
void FUN_002cf28c(u32 first, u32 second, u32 third, u32 fourth, u32 fifth, u32 sixth)
{
    asdDebugTrace(DAT_00544a98, 0x283);

    EffMenuRenderNode* node = static_cast<EffMenuRenderNode*>(
        memAlloc(0x10000, 0x100, 0, sizeof(EffMenuRenderNode), 0x10, 1));
    node->unk08 = first;
    node->unk0c = second;
    node->unk10 = third;
    node->unk14 = fourth;
    node->unk18 = fifth;
    node->render.flags = sixth;
    node->unk04 = 5;

    if (g_effMenuHandles.head[3] == 0) {
        g_effMenuHandles.head[3] = node;
    } else {
        g_effMenuHandles.tail[3]->next = node;
    }
    g_effMenuHandles.tail[3] = node;
    node->next = 0;
}
}
