#include "shard/NaviMain.h"
#include "mapnavi/NaviMainGlobals.h"
/* Applies a signed setting to the global manager's sub-system and, when requested, re-applies its state. */
#include "common.h"

extern "C" {

void NaviMain_EnterState1(u32 *state);
void backgroundConsumeReset(u32 *state);
void naviSlotStart(u8 *settings, s8 value);

void naviMainApplySetting(s32 reapply, s32 value)
{
    NaviMain *manager = g_naviMain;

    if (manager != NULL) {
        naviSlotStart(manager->settings, value);
        NaviMain_EnterState1(manager->state);
        if (reapply != 0) {
            backgroundConsumeReset(manager->state);
        }
    }
}

} /* extern "C" */
