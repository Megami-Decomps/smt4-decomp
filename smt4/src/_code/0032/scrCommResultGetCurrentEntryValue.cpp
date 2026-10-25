#include "common.h"
#include <stddef.h>
#include "script/ScriptArgs.h"

extern "C" {

typedef struct Entry003284d0 {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ u16 value;
    /* 0x00a */ u8 unk00a[0x616];
} Entry003284d0;  /* 0x620 */

typedef struct Game003284d0 {
    /* 0x0000 */ u8 unk0000[0x3c54];
    /* 0x3c54 */ Entry003284d0 entries[16];
    /* 0x9E54 */ u8 unk9E54[0xCF78 - 0x9E54];
    /* 0xcf78 */ s32 current;      /* index of the current entry */
} Game003284d0;

extern Game003284d0 *g_result;
typedef char ResultValueOffsetsCheck[
    offsetof(Game003284d0, entries) == 0x3C54 &&
    offsetof(Game003284d0, current) == 0xCF78 &&
    sizeof(Entry003284d0) == 0x620 ? 1 : -1];


/* Script command: reports the value of the current entry (when there is a game). Returns 1. */
u32 scrCommResultGetCurrentEntryValue(void)
{
    Game003284d0 *game = g_result;

    if (game != NULL) {
        Entry003284d0 *entry = &game->entries[game->current];

        scrSetResult(entry->value);
    }
    return 1;
}

} /* extern "C" */
