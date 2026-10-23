/* NON_MATCHING: pointer-to-link insertion merges retail's separate head, middle and tail insertion paths. */
#include "gfx/HandleRegistry.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
extern "C" {
extern AsdGfxContext g_asdGfxContext;
extern GfxHandleAllocator g_gfxAllocateCallback;

// Allocate fresh handle records, keeping each hash bucket sorted by id.
void FUN_002c2728(s32 count, u32 *handles)
{
    // Buckets occupy the graphics context's opaque region after its active buffer.
    struct RegistryView { u8 prefix[0xA4]; GfxHandleNode *buckets[32]; };
    typedef char RegistryViewOffset[offsetof(RegistryView, buckets) == 0xA4 ? 1 : -1];
    RegistryView *registry = (RegistryView *)&g_asdGfxContext;
    for (s32 index = 0; index < count; ++index) {
        GfxHandleNode *node = NULL;
        if (g_gfxAllocateCallback.allocate != NULL)
            node = (GfxHandleNode *)g_gfxAllocateCallback.allocate(0x10000, 256, 0, sizeof(GfxHandleNode));
        node->id = 0;
        node->data[0] = 0;
        node->data[1] = 0;
        node->data[2] = 0;
        node->data[3] = 0;
        node->data[4] = 0;
        node->next = NULL;
        u32 id = g_gfxAllocateCallback.nextId;
        GfxHandleNode **link;
        for (;;) {
            link = &registry->buckets[id & 31];
            while (*link != NULL && (*link)->id < id)
                link = &(*link)->next;
            if (*link == NULL || (*link)->id != id)
                break;
            ++id;
        }
        handles[index] = id;
        node->id = id;
        node->next = *link;
        *link = node;
        g_gfxAllocateCallback.nextId = id + 1;
    }
}
}
