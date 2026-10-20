#include "common.h"

extern "C" {

typedef struct HakaiEntry {
    /* 0x00 */ char name[0x50];   /* empty when the slot is unused */
    /* 0x50 */ s16 value;
    /* 0x52 */ u8 unk52[2];
} HakaiEntry;  /* 0x54 */

typedef struct MapHakai {
    /* 0x00 */ u8 unk00[0x5c];
    /* 0x5c */ HakaiEntry entries[16];
} MapHakai;

extern MapHakai *g_mapHakai;

void FUN_0033c9f0(const char *name, s32 value);

/* Passes every used hakai entry to FUN_0033c9f0. */
void hakaiEntriesNotify(void)
{
    s32 i;

    for (i = 0; i < 16; i++) {
        MapHakai *hakai = g_mapHakai;
        HakaiEntry *entry = &hakai->entries[i];

        if (entry->name[0] != '\0') {
            FUN_0033c9f0(entry->name, entry->value);
        }
    }
}

} /* extern "C" */
