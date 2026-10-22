/* NON_MATCHING: same instructions, but the return-1/2/3 blocks and the tab-13 path are laid out in a different order */
#include "shard/GameGlobals.h"

extern "C" {

/* Picks the status display's layout (1-4) from the current mode, tab and the 0x12F1 flag. */
s32 FUN_00293ac0(void)
{
    GameData *data = g_gameGlobals.data;
    u8 mode = data->unk1E67;
    u8 tab;

    if (mode == 3 || mode == 5 || (mode == 6 || mode == 8 || mode == 9)) {
        return 1;
    }
    tab = data->unk1E66;
    if (tab == 0) {
        if (g_gameGlobals.data->unk12F1 != 0) {
            return 2;
        }
        return 3;
    }
    if (tab == 6 || tab == 8 || (tab == 9 || tab == 10) || (tab == 11 || tab == 7)) {
        return 3;
    }
    if (tab == 14) {
        return 1;
    }
    if (tab == 13) {
        if (g_gameGlobals.data->unk12F1 != 0) {
            return 2;
        }
        return 4;
    }
    if (g_gameGlobals.data->unk12F1 != 0) {
        return 2;
    }
    return 4;
}

} /* extern "C" */
