#include "shard/NaviMain.h"
/* Applies a signed setting to the global manager's sub-system and, when requested, re-applies its state. */
#include "common.h"

extern "C" {
extern NaviMain *g_naviMain;

void NaviMain_EnterState1(u32 *state);
void backgroundConsumeReset(u32 *state);
void FUN_003c28a8(u8 *settings, s8 value);

void naviMainApplySetting(s32 reapply, s32 value)
{
    NaviMain *manager = g_naviMain;

    if (manager != NULL) {
        FUN_003c28a8(manager->settings, value);
        NaviMain_EnterState1(manager->state);
        if (reapply != 0) {
            backgroundConsumeReset(manager->state);
        }
    }
}

} /* extern "C" */
