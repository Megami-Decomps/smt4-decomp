/* NON_MATCHING: retail keeps the cache base in r4 and increments the hit's count through the loaded slot; the
 * build reloads the slot and allocates the callee-saved registers differently. */
#include "common.h"
#include "runtime/Stdio.h"
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "shard/W6_W6Match3_BattleQueue.h"
#include "classes/Obj4206f8.h"
struct AocSystem;

// The 16-slot cache of loaded resources.
struct ResourceCache {
    u32 unk00;                   // 0x00
    Obj4206f8 *slots[16];  // 0x04
};

extern "C" {
extern ResourceCache g_resourceCache;
extern const char DAT_003ff7c8[];
extern const char DAT_003ff7e4[];
extern u32 g_aocSystem;

s32 asdLoadFileAsyncSimple(const char *name, void **output, u32 flags);
void nkdwLoadWorldData(Obj4206f8 *content, s32 id);
void FUN_0033f2b8(Obj4206f8 *content, s32 id);
void aocQueueType0c(AocSystem *system, s32 id, void **output, const char *name);
void aocDisplayQueueFormattedEntry(u32 system, s32 id, void **output, const char *name);

// Returns the cached resource for `id`, or creates one in a free slot; with `queueLoad` set its file starts loading
// (from the AOC data when present, else from the base game).
Obj4206f8 *eventResourceCacheAcquire(s32 id, s32 queueLoad, u32 unused, u32 heap)
{
    for (s32 i = 0; i < 16; i++) {
        if (g_resourceCache.slots[i] != NULL && g_resourceCache.slots[i]->id == id) {
            g_resourceCache.slots[i]->refCount++;
            return g_resourceCache.slots[i];
        }
    }

    s32 slot;
    for (slot = 0; slot < 16; slot++) {
        if (g_resourceCache.slots[slot] == NULL)
            break;
    }

    Obj4206f8 *content = new (heap) Obj4206f8;
    g_resourceCache.slots[slot] = content;
    content->refCount = 1;

    if (queueLoad != 0) {
        char name[0x44];
        if (id < 0) {
            s32 npcId = -id;
            content->id = -npcId;
            __2sprintf(name, DAT_003ff7c8, npcId);
            content->file = NULL;
            content->kind = 4;
            content->index = npcId;
            if (aocPackageHasVoiceContent(g_aocSystem, npcId, 1) != 0) {
                aocQueueType0c(reinterpret_cast<AocSystem *>(g_aocSystem), npcId, &content->file, name);
            } else {
                asdLoadFileAsyncSimple(name, &content->file, 0);
            }
        } else {
            content->id = id;
            __2sprintf(name, DAT_003ff7e4, id);
            content->file = NULL;
            content->kind = 12;
            content->index = id - 1;
            if (aocPackageHasTextureContent(g_aocSystem, id, 1) != 0) {
                aocDisplayQueueFormattedEntry(g_aocSystem, id, &content->file, name);
            } else {
                asdLoadFileAsyncSimple(name, &content->file, 0);
            }
        }
    } else if (id < 0) {
        FUN_0033f2b8(content, -id);
    } else {
        nkdwLoadWorldData(content, id);
    }
    return content;
}
}
