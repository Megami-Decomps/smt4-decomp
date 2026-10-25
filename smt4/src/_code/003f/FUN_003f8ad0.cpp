/* NON_MATCHING: the lookup is now an inlined helper (the table pointer advances with the retail writeback load); armcc numbers the table copy and key r1/r2 where retail uses r2/r1. */
#include "common.h"

struct ByteEntry003f8ad0 {
    /* 0x0 */ u8 key;
    /* 0x1 */ s8 value;
};

/* A sorted table of byte keys with the factor that estimates where a key sits. */
struct ByteTable003f8ad0 {
    /* 0x00 */ u16 count;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ f32 scale;
    /* 0x08 */ ByteEntry003f8ad0 entries[1];
};

extern "C" {

/* Looks the value of the largest key not above x up in the table: estimates the entry from the factor, then walks to it. */
static __inline s32 byteCurveLookup(const ByteTable003f8ad0 *curve, f32 x)
{
    u32 key = (u32)x;
    const ByteEntry003f8ad0 *entry = curve->entries;
    if (entry->key <= key) {
        entry = &curve->entries[curve->count - 1];
        if (key < entry->key) {
            entry = &curve->entries[(u32)(curve->scale * ((f32)(curve->count - 1) * x))];
            if (key >= entry->key) {
                do {
                    entry++;
                } while (key >= entry->key);
                entry--;
            } else {
                do {
                    entry--;
                } while (entry->key > key);
            }
        }
    }
    return entry->value;
}

s32 FUN_003f8ad0(const ByteTable003f8ad0 *table, f32 x)
{
    return byteCurveLookup(table, x);
}

} /* extern "C" */
