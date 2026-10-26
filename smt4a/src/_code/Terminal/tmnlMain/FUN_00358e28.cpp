#include "common.h"

extern "C" {

struct NameEntry {
    /* 0x00 */ s16 id;
    /* 0x02 */ u8 unk02[5];
    /* 0x07 */ char name[0x3c - 7];
};

extern NameEntry g_tmnlEntries[22];

const char *gameDataGetPlayerName(s32 id);

/* Returns the name string for `id`: ids above 200 are the player's, the rest come from the table. */
const char *FUN_00358e28(s32 id)
{
    s32 i;

    if (id > 200) {
        return gameDataGetPlayerName(id);
    }
    NameEntry *entries = g_tmnlEntries;
    for (i = 0; i < 22; i++) {
        if (entries[i].id == id) {
            return entries[i].name;
        }
    }
    return NULL;
}

} /* extern "C" */
