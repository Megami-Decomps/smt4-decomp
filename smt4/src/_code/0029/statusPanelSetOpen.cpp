#include "shard/GameGlobals.h"

extern "C" {

void FUN_00258a24(s32 value);
void statusDownRestoreTabForMode(void);
void timerStart(void *timer, s32 frames, s32 arg);

/* Opens (open != 0) or closes the status display unless state 2/3 is active, then reapplies its tab. */
void statusPanelSetOpen(s32 open)
{
    GameData *data = g_gameGlobals.data;

    if (data->activeState == 2 || data->activeState == 3) {
        return;
    }
    if (open) {
        s32 state;

        data->unk1E60 = 0;
        state = data->activeState;
        if (state == 4 || state == 5 || state == 6) {
            data->unk12E0 = 4;
        } else {
            data->activeState = 4;
            data->unk12E0 = 8;
        }
        timerStart(data->statusTimer, 4, 0);
    } else {
        u8 tab = data->unk1E66;

        if (tab == 8 || (tab == 9 || tab == 10) || (tab == 11 || tab == 7)) {
            data->restoreTabPending = 1;
            statusDownRestoreTabForMode();
        }
    }
    if (data->unk1E67 == 5 || data->unk1E67 == 6) {
        FUN_00258a24(0);
    } else {
        FUN_00258a24(data->unk1E62);
    }
}

} /* extern "C" */
