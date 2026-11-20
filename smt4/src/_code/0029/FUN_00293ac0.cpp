#include "shard/GameGlobals.h"

extern "C" {

/* Picks the status display's layout (1-4) from the current mode, tab and the 0x12F1 flag. */
s32 FUN_00293ac0(void)
{
    GameData *data = g_gameGlobals.data;
    u8 mode = data->unk1E67;
    u8 tab;
    s32 layout;

    if (mode == 3 || mode == 5 || (mode == 6 || mode == 8 || mode == 9)) {
        layout = 1;
    } else {
        tab = data->unk1E66;
        if (tab == 0) {
            layout = g_gameGlobals.data->unk12F1 != 0 ? 2 : 3;
        } else if (tab == 6 || tab == 8 || (tab == 9 || tab == 10) || (tab == 11 || tab == 7)) {
            layout = 3;
        } else if (tab == 14) {
            layout = 1;
        } else if (tab == 13) {
            layout = g_gameGlobals.data->unk12F1 != 0 ? 2 : 4;
        } else {
            layout = g_gameGlobals.data->unk12F1 != 0 ? 2 : 4;
        }
    }
    return layout;
}

} /* extern "C" */
