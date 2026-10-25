/* NON_MATCHING: retail keeps the cache base in r4 from the prologue and builds the entry through the allocation result (r0) in a placement-new style constructor, then copies it to r6; the build allocates r4/r8/r9 differently and lays out the NPC/devil branches in a different order. */
#include "common.h"
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "shard/FUN_0023e3a4.h"
struct AocSystem;

// A cached texture/model resource (0x48 bytes, vtable _ZTV9Obj4206f8): which file it comes from, the file buffer being
// loaded and a reference count.
struct ResourceContent {
    const u32 *vtable;  // 0x00
    s32 id;             // 0x04 id as requested (negative: NPC texture)
    u32 kind;           // 0x08 4: NPC texture, 12: devil model
    s32 index;          // 0x0c
    u32 unk10[6];       // 0x10
    void *file;         // 0x28 file buffer, filled in by the loader
    u32 unk2c[2];       // 0x2c
    u32 unk34[2];       // 0x34
    u8 unk3c;           // 0x3c
    u8 unk3d;           // 0x3d
    u8 unk3e[2];
    s32 refCount;       // 0x40
    u32 unk44;          // 0x44
};

// The 16-slot cache of loaded resources.
struct ResourceCache {
    u32 unk00;                   // 0x00
    ResourceContent *slots[16];  // 0x04
};

extern "C" {
extern ResourceCache DAT_0047e508;
extern const u32 _ZTV9Obj4206f8[];
extern const char DAT_003ff7c8[];
extern const char DAT_003ff7e4[];
extern u32 g_aocSystem;

s32 textFormatBuffer(char *output, const char *format, ...);
void *asdOperatorNew(u32 size, u32 heap);
s32 asdLoadFileAsyncSimple(const char *name, void **output, u32 flags);
void FUN_0033e7c4(ResourceContent *content, s32 id);
void FUN_0033f2b8(ResourceContent *content);
void aocQueueType0c(AocSystem *system, s32 id, void **output, const char *name);
void aocDisplayQueueFormattedEntry(u32 system, s32 id, void **output, const char *name);

// Returns the cached resource for `id`, or creates one in a free slot; with `queueLoad` set its file starts loading
// (from the AOC data when present, else from the base game).
ResourceContent *FUN_00294090(s32 id, s32 queueLoad, u32 unused, u32 heap)
{
    for (s32 i = 0; i < 16; i++) {
        ResourceContent *cached = DAT_0047e508.slots[i];
        if (cached != NULL && cached->id == id) {
            cached->refCount++;
            return DAT_0047e508.slots[i];
        }
    }

    s32 slot = 0;
    while (slot < 16) {
        if (DAT_0047e508.slots[slot] == NULL)
            break;
        if (DAT_0047e508.slots[slot + 1] == NULL) {
            slot++;
            break;
        }
        slot += 2;
    }

    ResourceContent *content = static_cast<ResourceContent *>(asdOperatorNew(sizeof(ResourceContent), heap));
    if (content != NULL) {
        content->vtable = _ZTV9Obj4206f8 + 2;
        content->id = 0;
        content->unk10[0] = 0;
        content->unk10[1] = 0;
        content->unk10[2] = 0;
        content->unk10[3] = 0;
        content->unk10[4] = 0;
        content->unk10[5] = 0;
        content->file = NULL;
        content->unk2c[0] = 0;
        content->unk2c[1] = 0;
        content->unk3c = 0;
        content->unk3d = 0;
        content->unk44 = 0;
    }
    DAT_0047e508.slots[slot] = content;
    content->refCount = 1;

    if (queueLoad != 0) {
        char name[0x44];
        if (id < 0) {
            s32 npcId = -id;
            content->id = -npcId;
            textFormatBuffer(name, DAT_003ff7c8, npcId);
            content->file = NULL;
            content->kind = 4;
            content->index = npcId;
            if (FUN_0023e330(g_aocSystem, npcId, 1) != 0) {
                aocQueueType0c(reinterpret_cast<AocSystem *>(g_aocSystem), npcId, &content->file, name);
            } else {
                asdLoadFileAsyncSimple(name, &content->file, 0);
            }
        } else {
            content->id = id;
            textFormatBuffer(name, DAT_003ff7e4, id);
            content->file = NULL;
            content->kind = 12;
            content->index = id - 1;
            if (FUN_0023e3a4(g_aocSystem, id, 1) != 0) {
                aocDisplayQueueFormattedEntry(g_aocSystem, id, &content->file, name);
            } else {
                asdLoadFileAsyncSimple(name, &content->file, 0);
            }
        }
    } else if (id < 0) {
        FUN_0033f2b8(content);
    } else {
        FUN_0033e7c4(content, id);
    }
    return content;
}
}
