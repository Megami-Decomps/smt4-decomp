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
extern CampCecCountState *g_campCec; // declcheck: local (count view of the StreetPass object; kept from FUN_0030bc90)
CecSavedEntry *FUN_00262f94(void);

// Returns to the script the current StreetPass count when the argument asks for it, else the selected saved
// entry's count (0 when there is no StreetPass menu).
u32 scrCommCecGetCount(void)
{
    s32 current = scrGetArg(0);
    if (g_campCec != NULL && current != 0) {
        scrSetResult(g_campCec->count);
    } else if (g_campCec == NULL) {
        scrSetResult(0);
    } else {
        scrSetResult(FUN_00262f94()->count);
    }
    return 1;
}
}
