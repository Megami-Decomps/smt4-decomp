#include "battle/BtlMainAccess.h"
#include "common.h"
#include "battle/btlHelp.h"

extern "C" {


/* Starts the battle message btlHelpEntryCreate for `id` unless battle flags 0x40 or 0x100 are set; returns 0 when skipped. */
s32 btlMessageStartUnlessFlagged(s32 id, s32 arg)
{
    BtlMainState *battle = btlGetMainState();
    u32 flags = battle->battleFlags;
    s32 mode;

    if ((flags & 0x40) != 0) {
        return 0;
    }
    if ((flags & 0x100) != 0) {
        return 0;
    }
    mode = -1;
    if (arg != 0) {
        mode = 13;
    }
    return (s32)btlHelpEntryCreate(2, (s16)id, 0, 0, (const void *)arg, 0, mode);
}

} /* extern "C" */
