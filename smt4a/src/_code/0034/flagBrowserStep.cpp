#include "shard/Shard0034.h"

extern "C" {

extern s32 DAT_0057f6dc;
extern u32 padButtonRepeat(u32 button);
extern u32 padButtonIsPressed(u32 button);
extern u32 gameFlagIsSet(s32 index);
extern void gameFlagSetValue(s32 index, u32 value, s32 flag);

/* Moves the 0x1500-entry flag browser cursor with the D-pad / shoulder buttons and toggles the flag under it. */
u32 flagBrowserStep(void)
{
    u32 result;
    s32 page;
    s32 row;
    s32 col;

    if (padButtonRepeat(3) != 0 || padButtonRepeat(0xC) != 0) {
        DAT_0057f6dc += 1;
    }
    if (padButtonRepeat(6) != 0 || padButtonRepeat(0xF) != 0) {
        DAT_0057f6dc += 0x10;
    }
    if (padButtonRepeat(4) != 0 || padButtonRepeat(0xD) != 0) {
        DAT_0057f6dc -= 1;
    }
    if (padButtonRepeat(5) != 0 || padButtonRepeat(0xE) != 0) {
        DAT_0057f6dc -= 0x10;
    }
    if (padButtonRepeat(8) != 0) {
        DAT_0057f6dc -= 0x100;
    }
    if (padButtonRepeat(7) != 0) {
        DAT_0057f6dc += 0x100;
    }
    if (DAT_0057f6dc >= 0x1500) {
        DAT_0057f6dc -= 0x1500;
    }
    if (DAT_0057f6dc < 0) {
        DAT_0057f6dc += 0x1500;
    }
    if (padButtonIsPressed(0) != 0) {
        gameFlagSetValue(DAT_0057f6dc, gameFlagIsSet(DAT_0057f6dc) ^ 1, 1);
    }
    if (padButtonIsPressed(1) != 0) {
        result = 1;
    } else {
        page = DAT_0057f6dc / 0x100;
        for (row = 0; row < 0x10; row++) {
            for (col = 0; col < 0x10; col++) {
                gameFlagIsSet(col + row * 0x10 + page * 0x100);
            }
        }
        result = 0;
    }
    return result;
}

} /* extern "C" */
