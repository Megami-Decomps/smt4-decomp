/* NON_MATCHING: all control flow and operations match; four saved-register assignments differ. */
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "gfx/TextureBindingBuckets.h"
#include "shard/W6_W6Match7_DefaultTextureWork.h"
#include "shard/W6_W6Match7_TextureBinding.h"

extern "C" {
extern DriverTextureRelease *g_gfxReleaseCallback;
extern TextureBindingState *g_textureBindingState;
extern TextureBindingBuckets *DAT_004655f0;

/* Releases the cached bindings and their owned resources, then clears the hash table. */
void FUN_0011235c()
{
    if (DAT_004655f0 == NULL)
        return;
    TextureBindingState *state = g_textureBindingState;
    for (s32 bucket = 0; bucket < 512; ++bucket) {
        TextureBindingNode *node = DAT_004655f0->buckets[bucket];
        while (node != NULL) {
            TextureBindingNode *next = node->next;
            switch (node->kind) {
            case 0:
                if (node->resource != NULL) {
                    gfxReleaseEntryBlocks(node);
                    if (g_gfxReleaseCallback == NULL)
                        break;
                    g_gfxReleaseCallback(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, node->resource);
                }
                if (g_gfxReleaseCallback != NULL)
                    g_gfxReleaseCallback(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, node);
                break;
            case 1:
                if (node->resource != NULL) {
                    if (g_gfxReleaseCallback == NULL)
                        break;
                    g_gfxReleaseCallback(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, node->resource);
                }
                if (g_gfxReleaseCallback != NULL)
                    g_gfxReleaseCallback(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, node);
                break;
            }
            node = next;
        }
    }
    if (g_gfxReleaseCallback != NULL)
        g_gfxReleaseCallback(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, DAT_004655f0->storage);
    state->unk5dc = 0;
    state->unk5d8 = 0;
    DAT_004655f0 = NULL;
}
} /* extern "C" */
