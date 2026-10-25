/* Returns the display name of character `id` from the terminal's name table (the player's name for ids above 200),
 * or NULL when the id is not in the table. */
#include "common.h"

extern "C" {
struct NameEntry {
    /* 0x00 */ s16 id;
    /* 0x02 */ u8 unk02[4];
    /* 0x06 */ char name[0x1E];
};

extern NameEntry DAT_00432cf8[20];
char *gameDataGetPlayerName(void);

char *terminalGetCharacterDisplayName(s32 id)
{
    if (id > 200) {
        return gameDataGetPlayerName();
    }
    NameEntry *names = DAT_00432cf8;
    for (s32 i = 0; i < 20; i++) {
        if (names[i].id == id) {
            return names[i].name;
        }
    }
    return NULL;
}
}
