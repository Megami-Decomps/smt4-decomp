#include "common.h"

extern "C" {

typedef struct Tracker {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s8 active;
    /* 0x19 */ s8 value;
} Tracker;

typedef struct Entry {
    /* 0x00 */ u8 unk00[0xE];
    /* 0x0E */ s8 forced;
    /* 0x0F */ s8 value;
} Entry;

extern Tracker DAT_006446d0;

/* Returns 1 when the entry is forced, or the tracker is active and its value is at most 2 above the entry's; else 0. */
u32 FUN_001b5b8c(Entry *entry)
{
    if (entry->forced == 0 && (DAT_006446d0.active == 0 || (s8)(DAT_006446d0.value - entry->value) > 2)) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
