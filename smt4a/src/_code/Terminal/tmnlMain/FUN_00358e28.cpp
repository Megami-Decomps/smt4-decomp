#include "Terminal/tmnlMain.h"

extern "C" {

const char *gameDataGetPlayerName(s32 id);

/* Returns the name string for `id`: ids above 200 are the player's, the rest come from the table. */
const char *FUN_00358e28(s32 id)
{
    s32 i;

    if (id > 200) {
        return gameDataGetPlayerName(id);
    }
    TmnlEntryA *entries = g_tmnlEntries;
    for (i = 0; i < 22; i++) {
        if (entries[i].id == id) {
            return entries[i].name;
        }
    }
    return NULL;
}

} /* extern "C" */
