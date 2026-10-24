/* NON_MATCHING: register allocation and float copies: retail copies x into s1 for each comparison and advances the table pointer with a writeback; built compares against x directly. */
#include "common.h"

struct FloatEntry003f8bd8 {
    /* 0x0 */ f32 key;
    /* 0x4 */ s32 value;
};

/* A sorted table of float keys with the factor that estimates where a key sits. */
struct FloatTable003f8bd8 {
    /* 0x00 */ u16 count;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ f32 scale;
    /* 0x08 */ FloatEntry003f8bd8 entries[1];
};

extern "C" {

/* Looks the value of the largest key not above x up in the table: estimates the entry from the factor, then walks to it. */
s32 FUN_003f8bd8(const FloatTable003f8bd8 *table, f32 x)
{
    const FloatEntry003f8bd8 *entry = table->entries;
    if (!(entry->key > x)) {
        entry = &table->entries[table->count - 1];
        if (entry->key > x) {
            entry = &table->entries[(u32)(table->scale * ((f32)(table->count - 1) * x))];
            if (entry->key > x) {
                do {
                    entry--;
                } while (entry->key > x);
            } else {
                do {
                    entry++;
                } while (!(entry->key > x));
                entry--;
            }
        }
    }
    return entry->value;
}

} /* extern "C" */
