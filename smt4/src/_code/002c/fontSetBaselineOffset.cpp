#include "common.h"

namespace { struct Record { u8 padding[0x28]; f32 value; }; struct Pool { Record *records; u32 count; }; }

extern "C" {
extern Pool g_asdFontGlyphSets;

/* The record at `index`, or NULL when the pool is empty or the index is out of range. */
static __inline Record *poolGetRecord(Pool *pool, u32 index)
{
    if (pool->records != NULL && index < pool->count) {
        return &pool->records[index];
    }
    return NULL;
}

/* Sets the value of the requested record. */
void fontSetBaselineOffset(u32 index, f32 value)
{
    Record *record = poolGetRecord(&g_asdFontGlyphSets, index);
    if (record != NULL) {
        record->value = value;
    }
}
}
