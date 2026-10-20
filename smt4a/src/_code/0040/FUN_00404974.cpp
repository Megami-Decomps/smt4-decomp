/* NON_MATCHING: the info-pointer address (obj + 0x664) is kept in r6 and the texture id in r5; retail has them swapped. */
#include "common.h"

extern "C" {

/* Record the object points at (+0x664): its id and the texture it uses. */
typedef struct EntryInfo {
    /* 0x0 */ u16 id;
    /* 0x2 */ u16 unk2[2];
    /* 0x6 */ u16 texId;
    /* 0x8 */ u16 texSub;
} EntryInfo;

typedef struct Entry {
    /* 0x000 */ u8 unk000[0x1C];
    /* 0x01C */ u32 texId;
    /* 0x020 */ u32 texSub;
    /* 0x024 */ u8 texLoaded;       /* the texture was loaded here and must be freed */
    /* 0x025 */ u8 unk025[3];
    /* 0x028 */ u8 sprite[0x64];
    /* 0x08C */ s32 unk08c;
    /* 0x090 */ u8 unk090[0x74];
    /* 0x104 */ u8 hasTexture;
    /* 0x105 */ u8 unk105[3];
    /* 0x108 */ s32 unk108;
    /* 0x10C */ u8 unk10c[0x558];
    /* 0x664 */ EntryInfo *info;
    /* 0x668 */ u8 unk668[0x1C];
    /* 0x684 */ u32 resource;
} Entry;

s32 FUN_00341940(u32 texId);
s32 asdTMTexTableLoadTmx(u32 texId, s32 arg);
s32 FUN_001acf98(u32 texId, u32 texSub);
s32 FUN_00403a34(Entry *entry, u32 id);
s32 FUN_00203b40(void *sprite, u32 resource, s32 a, s32 b, s32 c, s32 d);
s32 FUN_002e08b0(void *sprite, s32 arg);
s32 tableFlagBit1(u16 id);
s32 tableFlagBit2(u16 id);
s32 FUN_0040a864(u16 id, s32 arg);
s32 FUN_0040a844(u16 id, s32 arg);

/* Resets the entry and sets it up from its info record: loads the texture if it isn't loaded yet,
 * builds the sprite, and applies the table flags for the info's id. */
void FUN_00404974(Entry *entry)
{
    u32 texId;
    u32 texSub;

    entry->unk08c = 0;
    entry->hasTexture = 0;
    entry->texId = 0;
    entry->texSub = 0;
    texId = entry->info->texId;
    if (texId != 0) {
        entry->texId = texId;
        texSub = entry->info->texSub;
        entry->texSub = texSub;
        entry->hasTexture = 1;
        entry->texLoaded = 0;
        if (FUN_00341940(texId) == 0) {
            asdTMTexTableLoadTmx(texId, 0);
            entry->texLoaded = 1;
        }
        FUN_001acf98(texId, texSub);
    }
    FUN_00403a34(entry, entry->info->id);
    FUN_00203b40(entry->sprite, entry->resource, 8, 1, 0, 1);
    FUN_002e08b0(entry->sprite, 0);
    entry->unk108 = 0;
    entry->unk08c = 0;
    if (tableFlagBit1(entry->info->id) != 0 || tableFlagBit2(entry->info->id) != 0) {
        FUN_0040a864(entry->info->id, 0);
        FUN_0040a844(entry->info->id, 0);
    }
}

}
