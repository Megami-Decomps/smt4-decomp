/* Returns 1 if the entry is flagged, or while the global tracker is on and the entry's counter is within 2 of its own. */
#include "common.h"

extern "C" {

struct Entry001b5b40 {
    /* 0x00 */ u8 unk00[14];
    /* 0x0e */ u8 flagged;
    /* 0x0f */ u8 counter;
};

struct Tracker001b5b40 {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u8 active;
    /* 0x19 */ u8 counter;
};

extern Tracker001b5b40 DAT_006446d0;

s32 entryIsAllowed(Entry001b5b40 *entry)
{
    if (entry->flagged != 0) {
        return 1;
    }
    if (DAT_006446d0.active == 0) {
        return 0;
    }
    if ((s8)(DAT_006446d0.counter - entry->counter) > 2) {
        return 0;
    }
    return 1;
}

}
