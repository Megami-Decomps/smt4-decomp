#include "font/FontStringReader.h"
#include "shard/W6_W6Match3_NameFormState.h"
extern "C" {
extern FontRecordPool g_asdFontGlyphSets;
/* Gets an indexed record when the pool is allocated and the index is valid. */
void *recordTableGet(u32 index)
{
    if (g_asdFontGlyphSets.records != NULL && index < g_asdFontGlyphSets.count) {
        return &g_asdFontGlyphSets.records[index];
    }
    return NULL;
}
}
