#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern WorkRange g_asdFontGlyphSets;

/* Updates the bound when it lies within the configured range. */
bool workRangeSetLowerBound(u32 value)
{
    u32 limit = g_asdFontGlyphSets.limit;
    if (value >= limit) {
        return false;
    }
    g_asdFontGlyphSets.lower = value;
    return true;
}

} /* extern "C" */
