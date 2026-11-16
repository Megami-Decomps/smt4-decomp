/* NON_MATCHING: the separate scrSetResult call of the current-count arm and the shared epilogue now match; armcc still places a `nop {0}` before the final scrSetResult call where retail has none. */
#include "common.h"
#include "script/ScriptArgs.h"

struct CampCecCountState {
    u8 unk000[0x126];
    u16 count; // 0x126
};
struct CecSavedEntry {
    u8 unk00[0x46];
    u16 count; // 0x46
};

extern "C" {
extern CampCecCountState *g_campCec;
CecSavedEntry *FUN_00262f94(void);

// Sets the script result to the current StreetPass count or the selected saved entry's count.
static __inline void cecCountResult(s32 current)
{
    u16 count;
    if (g_campCec == NULL) {
        count = 0;
    } else if (current != 0) {
        scrSetResult(g_campCec->count);
        return;
    } else {
        count = FUN_00262f94()->count;
    }
    scrSetResult(count);
}

// Return either the current StreetPass count or the selected saved entry's count.
u32 FUN_0030bc90(void)
{
    cecCountResult(scrGetArg(0));
    return 1;
}
}
