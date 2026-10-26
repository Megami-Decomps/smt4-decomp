/* NON_MATCHING: inline collision-chain helper retains an extra candidate register and output pointer; registry base reload differs. */
#include "gfx/CommandBufferHandles.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {
extern AsdGfxContext g_asdGfxContext;
extern CommandBufferHandleAllocator g_gfxAllocateCallback;

// Allocate command-buffer handles and insert them into the sorted hash registry.
void FUN_001233d4(s32 count, u32 *handles)
{
    for (s32 index = 0; index < count; ++index) {
        CommandBufferHandleNode *node = g_gfxAllocateCallback.allocate
            ? (CommandBufferHandleNode *)g_gfxAllocateCallback.allocate(0x10000, 0x100, 0, sizeof(*node))
            : NULL;
        memClear(node, sizeof(*node));
        node->buffer.unk2c = 0x300;
        u32 id = g_gfxAllocateCallback.nextId;
        while (!commandBufferTryAssign(&g_asdGfxContext, node, id, &handles[index]))
            ++id;
        g_gfxAllocateCallback.nextId = id + 1;
    }
}
}
