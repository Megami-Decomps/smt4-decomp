/* NON_MATCHING: retail's literal pool holds an extra unreferenced address word (0x0044dc20) before the 0xcf78 offset */
#include "common.h"

extern "C" {

typedef struct Entry003284d0 {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ u16 value;
    /* 0x00a */ u8 unk00a[0x616];
} Entry003284d0;  /* 0x620 */

typedef struct Game003284d0 {
    /* 0x0000 */ u8 unk0000[0x3c54];
    /* 0x3c54 */ Entry003284d0 entries[16];
    /* 0xcf74 */ u8 unkcf74[4];
    /* 0xcf78 */ s32 current;      /* index of the current entry */
} Game003284d0;

typedef struct Holder003284d0 {
    /* 0x00 */ Game003284d0 *game;
} Holder003284d0;

void scrSetResult(s32 value);

/* Script command: reports the value of the current entry (when there is a game). Returns 1. */
u32 FUN_003284d0(Holder003284d0 *holder)
{
    Game003284d0 *game = holder->game;

    if (game != NULL) {
        Entry003284d0 *entry = &game->entries[game->current];

        scrSetResult(entry->value);
    }
    return 1;
}

} /* extern "C" */
