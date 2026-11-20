#include "common.h"

namespace { struct Record { u8 padding[0x28]; f32 value; }; struct Pool { Record *records; u32 count; }; }

extern "C" {
static __inline void recordSetValue(Record *record, f32 value)
{
    if (record != NULL) {
        record->value = value;
    }
}

/* Reads or updates the requested object state. */
extern Pool g_asdFontGlyphSets;
void fontSetBaselineOffset(u32 index, f32 value)
{
    Pool *pool = &g_asdFontGlyphSets;
    if (pool->records != NULL && index < pool->count) {
        recordSetValue(&pool->records[index], value);
    }
}
}
