/* NON_MATCHING: retail calls scrSetResult separately for the current-count arm and branches to the shared epilogue; armcc predicates that arm into the shared call instead. */
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

// Return either the current StreetPass count or the selected saved entry's count.
u32 FUN_0030bc90(void)
{
    s32 current = scrGetArg(0);
    u16 count;
    if (g_campCec == NULL) {
        count = 0;
    } else if (current != 0) {
        count = g_campCec->count;
    } else {
        count = FUN_00262f94()->count;
    }
    scrSetResult(count);
    return 1;
}
}
