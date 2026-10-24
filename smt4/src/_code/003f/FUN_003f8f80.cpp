/* NON_MATCHING: same search; armcc keeps the table pointer in r0 and compares with unsigned branches, retail copies it to r1 and uses signed ones. */
#include "common.h"

struct CurvePoint {
    /* 0x00 */ f32 key;
    /* 0x04 */ f32 value;
    /* 0x08 */ u8 unk08[8];
};

struct CurveTable {
    /* 0x00 */ u16 count;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ f32 scale;     /* points per key unit, used to guess the starting point */
    /* 0x08 */ CurvePoint points[1];
};

extern "C" {

/* Looks up the value of the curve at the key: the point at or just below it (clamped to the ends),
 * starting from a guess of where the key falls and walking to it. */
f32 FUN_003f8f80(const CurveTable *table, f32 key)
{
    const CurvePoint *point = table->points;

    if (point->key <= key) {
        point = &table->points[table->count - 1];
        if (point->key > key) {
            point = &table->points[(u32)(table->scale * ((f32)(table->count - 1) * key))];
            if (point->key > key) {
                do {
                    point--;
                } while (point->key > key);
            } else {
                do {
                    point++;
                } while (point->key <= key);
                point--;
            }
        }
    }
    return point->value;
}

} /* extern "C" */
