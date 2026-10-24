/* NON_MATCHING: register allocation: retail advances the table pointer with a writeback load (ldrb r3, [r0, #8]!) and keeps the table in r2; built keeps the table in r0 and the entry in r1. */
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
s32 FUN_003f8ad0(const ByteTable003f8ad0 *table, f32 x)
{
    u32 key = (u32)x;
    const ByteEntry003f8ad0 *entry = table->entries;
    if (entry->key <= key) {
        entry = &table->entries[table->count - 1];
        if (key < entry->key) {
            entry = &table->entries[(u32)(table->scale * ((f32)(table->count - 1) * x))];
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

} /* extern "C" */
