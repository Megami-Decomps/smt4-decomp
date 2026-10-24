/* NON_MATCHING: compiler duplicates the success epilogue and aligns the shared result call differently from retail. */
#include "common.h"

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
s32 scrGetArg(void);
void scrSetResult(s32);
CecSavedEntry *FUN_00262f94(void);

// Return either the current StreetPass count or the selected saved entry's count.
u32 FUN_0030bc90(void)
{
    s32 current = scrGetArg();
    u16 count;
    if (g_campCec == NULL) {
        count = 0;
    } else {
        if (current != 0) {
            scrSetResult(g_campCec->count);
            return 1;
        }
        count = FUN_00262f94()->count;
    }
    scrSetResult(count);
    return 1;
}
}
