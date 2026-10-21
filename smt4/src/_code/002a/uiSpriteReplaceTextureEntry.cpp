/* NON_MATCHING: the initial entry/flag values swap r0/r1 and the AOC request's r2/r3 setup order differs; all remaining instructions match. */
#include "shard/W6_W6Match8_TextureSwap.h"
#include "addon/aocMain.h"

extern "C" {
extern AocSystem *g_aocSystem;
void asdTMTexTableReleaseNode(u32 node, s32 entry);
bool asdTMTexTableNodeIsLoaded(u32 node);
void *asdTMTexTableLoadEntryAsync(u32 node, s32 entry);
void FUN_002a60cc(AocSystem *system, u32 node, s32 entry);
bool aocRunByName(AocSystem *system, u32 node, s32 entry, u32 mode);
void *FUN_002a5ee4(AocSystem *system, u32 node, s32 entry, u32 size);
bool FUN_002c1d5c();
void FUN_002a880c(TextureSwap *work, s32 state, s32 arg);

void uiSpriteReplaceTextureEntry(TextureSwap *work, s32 entry, s32 transition)
{
    if (work->entry != entry) {
        if (work->deferred != 0) {
            if (work->previousEntry != -1) {
                asdTMTexTableReleaseNode(work->node, work->previousEntry);
                FUN_002a60cc(g_aocSystem, work->node, work->previousEntry);
                work->previousEntry = -1;
                work->previousTexture = NULL;
            }
            work->entry = entry;
        } else if (work->blocked == 0) {
            if (work->entry != -1 && !asdTMTexTableNodeIsLoaded(work->node)) {
                if (work->queuedEntry == -1) {
                    work->queuedEntry = entry;
                }
                return;
            }
            if ((work->transitionEnabled == 0 || work->transition == 0.0f) && work->texture != NULL) {
                asdTMTexTableReleaseNode(work->node, work->entry);
                FUN_002a60cc(g_aocSystem, work->node, work->entry);
                work->texture = NULL;
            }
            if (FUN_002c1d5c()) {
                work->deferred = 1;
            } else {
                if (work->texture != NULL) {
                    work->previousTexture = work->texture;
                    work->previousEntry = work->entry;
                }
                work->entry = entry;
                if (aocRunByName(g_aocSystem, work->node, entry, 1)) {
                    work->texture = FUN_002a5ee4(g_aocSystem, work->node, work->entry, 0x10000);
                } else {
                    work->texture = asdTMTexTableLoadEntryAsync(work->node, work->entry);
                }
                if (work->previousTexture != NULL) {
                    if (transition < 0) {
                        FUN_002a880c(work, 3, 0);
                    } else {
                        FUN_002a880c(work, 4, 0);
                    }
                }
            }
        }
    }
}
}
