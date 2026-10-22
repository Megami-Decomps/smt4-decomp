#include "common.h"

/* An entry of the 14-entry table: an id and two optional resources with their parameters. */
struct ResourcePairEntry {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[0xa];
    /* 0x0C */ void *first;
    /* 0x10 */ u16 firstParam;
    /* 0x12 */ u8 unk12[2];
    /* 0x14 */ void *second;
    /* 0x18 */ u16 secondParam;
    /* 0x1A */ u8 unk1a[2];
};

extern "C" {
extern ResourcePairEntry DAT_00435ea0[14];
s32 jyoucyuGetTableEntry(u32 index);
void FUN_002505c0(u32 param, u32 target, void *resource, s32 slot, s32 arg4, s32 arg5, s32 arg6);

static __inline ResourcePairEntry *findResourcePair(u32 id)
{
    s32 i;

    for (i = 0; i < 14; i++) {
        ResourcePairEntry *entry = &DAT_00435ea0[i];
        if (entry->id == id) {
            return entry;
        }
    }
    return NULL;
}

/* Applies both resources of the table entry `id` (slots 0 and 1) to `target`. */
u32 FUN_00394bbc(u32 id, u32 target)
{
    if (jyoucyuGetTableEntry(1) == 0) {
        ResourcePairEntry *entry = findResourcePair(id);
        if (entry != NULL) {
            if (entry->first != NULL) {
                FUN_002505c0(entry->firstParam, target, entry->first, 0, 1, 0, 0);
            }
            if (entry->second != NULL) {
                FUN_002505c0(entry->secondParam, target, entry->second, 1, 1, 0, 0);
            }
        }
    }
    return 0;
}

} /* extern "C" */
