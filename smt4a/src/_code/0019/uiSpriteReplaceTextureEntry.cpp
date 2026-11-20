#include "shard/W6_W6Match8_TextureSwap.h"
#include "addon/aocMain.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "addon/AocSystemA.h"

extern "C" {
void asdTMTexTableReleaseNode(u32 node, s32 entry);
void *asdTMTexLoadMainHeap(u32 node, s32 entry);
void packageFileDisableByKindName(AocSystemA *system, u32 node, s32 entry);
bool aocRunByName(AocSystemA *system, u32 node, u32 entry, s32 checked);
void *texTableRequestNamedTextureLoad(AocSystemA *system, u32 node, s32 entry, u32 size);
bool eventIsSkipping();
void bustupSpriteStartTransition(TextureSwap *work, s32 state, s32 arg);

void uiSpriteReplaceTextureEntry(TextureSwap *work, s32 entry, s32 transition)
{
    if (work->entry != entry) {
        if (work->deferred != 0) {
            if (work->previousEntry != -1) {
                asdTMTexTableReleaseNode(work->node, work->previousEntry);
                packageFileDisableByKindName(g_aocSystem, work->node, work->previousEntry);
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
                packageFileDisableByKindName(g_aocSystem, work->node, work->entry);
                work->texture = NULL;
            }
            if (eventIsSkipping()) {
                work->deferred = 1;
            } else {
                if (work->texture != NULL) {
                    work->previousTexture = work->texture;
                    work->previousEntry = work->entry;
                }
                work->entry = entry;
                if (aocRunByName(g_aocSystem, work->node, work->entry, 1)) {
                    work->texture = texTableRequestNamedTextureLoad(g_aocSystem, work->node, work->entry, 0x10000);
                } else {
                    work->texture = asdTMTexLoadMainHeap(work->node, work->entry);
                }
                if (work->previousTexture != NULL) {
                    if (transition < 0) {
                        bustupSpriteStartTransition(work, 3, 0);
                    } else {
                        bustupSpriteStartTransition(work, 4, 0);
                    }
                }
            }
        }
    }
}
}
