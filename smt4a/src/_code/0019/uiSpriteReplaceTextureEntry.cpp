#include "shard/W6_W6Match8_TextureSwap.h"
#include "addon/aocMain.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
extern AocSystemA *g_aocSystem;
void asdTMTexTableReleaseNode(u32 node, s32 entry);
void *asdTMTexLoadMainHeap(u32 node, s32 entry);
void FUN_001b2d54(AocSystemA *system, u32 node, s32 entry);
bool aocRunByName(AocSystemA *system, u32 node, u32 entry, s32 checked);
void *FUN_001a6568(AocSystemA *system, u32 node, s32 entry, u32 size);
bool FUN_00162ea4();
void FUN_0019d96c(TextureSwap *work, s32 state, s32 arg);

void uiSpriteReplaceTextureEntry(TextureSwap *work, s32 entry, s32 transition)
{
    if (work->entry != entry) {
        if (work->deferred != 0) {
            if (work->previousEntry != -1) {
                asdTMTexTableReleaseNode(work->node, work->previousEntry);
                FUN_001b2d54(g_aocSystem, work->node, work->previousEntry);
                work->previousEntry = -1;
                work->previousTexture = NULL;
            }
            work->entry = entry;
        } else if (work->blocked == 0) {
            if (work->entry != -1 && !asdTMTexTableNodeIsLoaded(work->node, work->entry)) {
                if (work->queuedEntry == -1) {
                    work->queuedEntry = entry;
                }
                return;
            }
            if ((work->transitionEnabled == 0 || work->transition == 0.0f) && work->texture != NULL) {
                asdTMTexTableReleaseNode(work->node, work->entry);
                FUN_001b2d54(g_aocSystem, work->node, work->entry);
                work->texture = NULL;
            }
            if (FUN_00162ea4()) {
                work->deferred = 1;
            } else {
                if (work->texture != NULL) {
                    work->previousTexture = work->texture;
                    work->previousEntry = work->entry;
                }
                work->entry = entry;
                if (aocRunByName(g_aocSystem, work->node, work->entry, 1)) {
                    work->texture = FUN_001a6568(g_aocSystem, work->node, work->entry, 0x10000);
                } else {
                    work->texture = asdTMTexLoadMainHeap(work->node, work->entry);
                }
                if (work->previousTexture != NULL) {
                    if (transition < 0) {
                        FUN_0019d96c(work, 3, 0);
                    } else {
                        FUN_0019d96c(work, 4, 0);
                    }
                }
            }
        }
    }
}
}
