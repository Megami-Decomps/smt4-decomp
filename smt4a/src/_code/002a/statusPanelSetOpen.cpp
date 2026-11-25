#include "status/StatusMenuMode.h"
#include "shard/Shard0033.h"
#include "game/GameGlobalsRef.h"

extern "C" {

void statusScreenRefreshForSelection(s32 value);

/* Opens (open != 0) or closes the status display unless state 3/4 is active, then reapplies its tab. */
void statusPanelSetOpen(s32 open)
{
    ObjB *data = g_gameGlobals.instance;

    if (data->activeState == 3 || data->activeState == 4) {
        return;
    }
    if (open) {
        s32 state;

        data->unk2011 = 0;
        state = data->activeState;
        if (state == 5 || state == 6 || state == 7) {
            data->unk136C = 5;
        } else {
            data->activeState = 5;
            data->unk136C = 9;
        }
    } else {
        u8 tab = g_gameGlobals.instance->unk2017;

        if (tab == 9 || (tab == 10 || tab == 11) || (tab == 12 || tab == 8)) {
            data->unk1378 = 1;
            gameTransitionStartStep();
        }
    }
    if (data->unk2018 == 5 || data->unk2018 == 6 || (data->unk2018 == 7 || data->unk2018 == 12)) {
        statusScreenRefreshForSelection(0);
    } else {
        statusScreenRefreshForSelection((s8)data->unk2013);
    }
}

} /* extern "C" */
