/* NON_MATCHING: typed global access removes a reload and identical mode-13/default tab tails merge; -O2 candidate. */
#include "shard/GameGlobals.h"

struct StatusTabReset {
    u8 unk00[0x14];
    u32 pending;
};
extern "C" {
void statusDownSwitchTab(s32);

void statusDownRestoreTabForMode()
{
    GameData *state = g_gameGlobals.data;
    ((StatusTabReset *)g_gameGlobals.data)->pending = 0;
    state->unk1E63 = 1;
    GameData *tabs = g_gameGlobals.data;
    u8 mode = state->unk1E66;
    if (mode == 0) {
        if (tabs->unk12E4 == 0)
            statusDownSwitchTab(0);
        if (tabs->unk12E4 == 1)
            statusDownSwitchTab(1);
        if (!state->unk12F1 && tabs->unk12E4 == 2)
            statusDownSwitchTab(2);
    } else if (mode == 6) {
        if (tabs->unk12E4 == 0)
            statusDownSwitchTab(0);
        if (tabs->unk12E4 == 1)
            statusDownSwitchTab(1);
        if (tabs->unk12E4 == 2)
            statusDownSwitchTab(5);
    } else if ((mode == 8 || mode == 9) || (mode == 10 || mode == 11 || mode == 7)) {
        if (tabs->unk12E4 == 0)
            statusDownSwitchTab(1);
        if (tabs->unk12E4 == 1)
            statusDownSwitchTab(4);
        if (tabs->unk12E4 == 2)
            statusDownSwitchTab(5);
    } else if (mode == 14) {
        if (tabs->unk12E4 == 0)
            statusDownSwitchTab(0);
    } else if (mode != 13 && state->unk1E67 == 6) {
        if (tabs->unk12E4 == 0)
            statusDownSwitchTab(1);
    } else {
        if (tabs->unk12E4 == 0)
            statusDownSwitchTab(0);
        if (tabs->unk12E4 == 1)
            statusDownSwitchTab(1);
        if (!state->unk12F1) {
            if (tabs->unk12E4 == 2)
                statusDownSwitchTab(4);
            if (tabs->unk12E4 == 3)
                statusDownSwitchTab(5);
        }
    }
}
}
