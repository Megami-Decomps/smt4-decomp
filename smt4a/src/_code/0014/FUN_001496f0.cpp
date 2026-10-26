/* NON_MATCHING: all control flow and operations match; four saved-register assignments differ. */
#include "gfx/TextureBindingBuckets.h"
#include "shard/W6_W6Match7_TextureBinding.h"

extern "C" {
extern void (*g_gfxReleaseCallback)(u32 heap, u32 alignment, u32 flags, void *block);
extern TextureBindingState *g_textureBindingState;
extern TextureBindingBuckets *DAT_005b4430;
void gfxReleaseEntryBlocks(TextureBindingNode *node);

// Release every cached binding and its owned resource before clearing the hash table.
void FUN_001496f0()
{
    if (DAT_005b4430 == NULL)
        return;
    TextureBindingState *state = g_textureBindingState;
    for (s32 bucket = 0; bucket < 512; ++bucket) {
        TextureBindingNode *node = DAT_005b4430->buckets[bucket];
        while (node != NULL) {
            TextureBindingNode *next = node->next;
            switch (node->kind) {
            case 0:
                if (node->resource != NULL) {
                    gfxReleaseEntryBlocks(node);
                    if (g_gfxReleaseCallback == NULL)
                        break;
                    g_gfxReleaseCallback(0x10000, 0x100, 0, node->resource);
                }
                if (g_gfxReleaseCallback != NULL)
                    g_gfxReleaseCallback(0x10000, 0x100, 0, node);
                break;
            case 1:
                if (node->resource != NULL) {
                    if (g_gfxReleaseCallback == NULL)
                        break;
                    g_gfxReleaseCallback(0x10000, 0x100, 0, node->resource);
                }
                if (g_gfxReleaseCallback != NULL)
                    g_gfxReleaseCallback(0x10000, 0x100, 0, node);
                break;
            }
            node = next;
        }
    }
    if (g_gfxReleaseCallback != NULL)
        g_gfxReleaseCallback(0x10000, 0x100, 0, DAT_005b4430->storage);
    // The two cache bookkeeping words are inside the shared binding state's padding.
    struct CleanupStateView {
        u8 prefix[0x5D8];
        u32 count;
        u32 capacity;
    };
    CleanupStateView *cleanup = reinterpret_cast<CleanupStateView *>(state);
    cleanup->capacity = 0;
    cleanup->count = 0;
    DAT_005b4430 = NULL;
}
}
