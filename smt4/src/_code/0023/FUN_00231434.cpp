#include "common.h"
#include "AsdSDK/TexTableEntryRange.h"

extern "C" {

extern u8 *asdTMTexTableEntryAt(u32 file, s32 index);

typedef struct Range {
    /* 0x0 */ s16 first;
    /* 0x2 */ s16 second;
} Range;

typedef struct Entry {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 defaultFirst;
    /* 0x06 */ u16 defaultSecond;
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
    /* 0x0C */ Range *range;
} Entry;

/* Reads the current entry's position and range (its own range, or the defaults with bit 15 masked off). */
void FUN_00231434(u32 file, s32 index, int *x, int *y, int *first, int *second)
{
    Entry *entry = (Entry *)asdTMTexTableEntryAt(file, index);
    u32 value;

    *x = entry->x;
    *y = entry->y;
    if (entry->range != NULL) {
        *first = entry->range->first;
        value = entry->range->second;
    } else {
        *first = entry->defaultFirst & 0xffff7fff;
        value = entry->defaultSecond & 0xffff7fff;
    }
    *second = value;
}

} /* extern "C" */
