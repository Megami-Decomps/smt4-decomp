/* NON_MATCHING: float register copies: retail copies x into s1 before each comparison and computes the entry estimate through s3; built compares and multiplies against x directly. */
#include "common.h"

struct FloatEntry003f91b0 {
    /* 0x0 */ f32 key;
    /* 0x4 */ f32 value;
};

/* A sorted table of float keys with the factor that estimates where a key sits. */
struct FloatTable003f91b0 {
    /* 0x00 */ u16 count;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ f32 scale;
    /* 0x08 */ FloatEntry003f91b0 entries[1];
};

extern "C" {

/* Interpolates the table's values linearly at x: estimates the entry from the factor, walks to the last key not above x and blends it with the next. */
f32 FUN_003f91b0(const FloatTable003f91b0 *table, f32 x)
{
    const FloatEntry003f91b0 *last = &table->entries[table->count - 1];
    const FloatEntry003f91b0 *entry = table->entries;
    if (!(entry->key > x)) {
        entry = last;
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
    if (entry->key == x || entry == last)
        return entry->value;
    f32 t = (x - entry->key) / (entry[1].key - entry->key);
    return entry->value * (1.0f - t) + entry[1].value * t;
}

} /* extern "C" */
