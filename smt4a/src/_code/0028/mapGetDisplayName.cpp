/* NON_MATCHING: only the bsearch comparator literal load/store uses r1 instead of retail r0, changing its literal displacement by four bytes. */
#include "shard/W5_W5Match7_SceneState.h"

struct MapNameRecord {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[0x16];
    /* 0x18 */ char name[0x50];
};

extern "C" {
extern const char DAT_0052e044[], DAT_0052e0ac[], DAT_0052e114[], DAT_0052e17c[];
extern const char DAT_0052e1e4[], DAT_0052e24c[], DAT_0052e2b4[], DAT_0052e31c[];
extern const char DAT_0052e384[], DAT_0052e3ec[], DAT_0052e454[], DAT_0052e4bc[];
extern const char DAT_0052e524[], DAT_0052e58c[], DAT_0052e5f4[], DAT_0052e65c[];
extern const char DAT_0052e6c4[], DAT_0052e72c[], DAT_0052e794[];
void *dataTableGet(u32 table, u32 index);
void *dataTableGetEntries(void *table);
u32 dataTableGetCount(void *table);
s32 arrayCompareSignedHalfword(const void *, const void *);
void *libc_bsearch(const void *key, const void *base, u32 count, u32 size,
                   s32 (*compare)(const void *, const void *));

static __inline const char *lookupMapName(u32 id)
{
    void *table = dataTableGet(0x38, 0);
    void *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    MapNameRecord key;
    key.id = id;
    MapNameRecord *record = static_cast<MapNameRecord *>(
        libc_bsearch(&key, entries, count, sizeof(MapNameRecord), arrayCompareSignedHalfword));
    return record->name;
}

// Resolve a map label, including fixed labels and the current custom-area override.
const char *mapGetDisplayName(u32 id)
{
    if (id >= 0x6a)
        return NULL;
    if (g_gameState.overrideMapName && g_gameState.mapNameId == id)
        return "\x82\x62\x82\x95\x82\x92\x82\x92\x82\x85\x82\x8e"
               "\x82\x94\x81\x40\x82\x81\x82\x92\x82\x85\x82\x81";
    if (id == 0x55)
        return DAT_0052e044;
    if (id == 0x56)
        return DAT_0052e0ac;
    if (id == 0x57)
        return DAT_0052e114;
    if (id == 0x58)
        return DAT_0052e17c;
    if (id == 0x5a)
        return DAT_0052e1e4;
    if (id == 0x5b)
        return DAT_0052e24c;
    if (id == 0x5c)
        return DAT_0052e2b4;
    if (id == 0x5d)
        return DAT_0052e31c;
    if (id == 0x5e)
        return DAT_0052e384;
    if (id == 0x5f)
        return DAT_0052e3ec;
    if (id == 0x60)
        return DAT_0052e454;
    if (id == 0x61)
        return DAT_0052e4bc;
    if (id == 0x62)
        return DAT_0052e524;
    if (id == 0x63)
        return DAT_0052e58c;
    if (id == 0x64)
        return DAT_0052e5f4;
    if (id == 0x65)
        return DAT_0052e65c;
    if (id == 0x66)
        return DAT_0052e6c4;
    if (id == 0x67)
        return DAT_0052e72c;
    if (id == 0x68)
        return DAT_0052e794;
    return lookupMapName(id);
}
}
