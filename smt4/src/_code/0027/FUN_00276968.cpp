/* Applies a signed setting to the global manager's sub-system and, when requested, re-applies its state. */
#include "common.h"

extern "C" {

typedef struct {
    u8 unk00000[0x40];    /* 0x00000 */
    u8 state[0x122f4];    /* 0x00040 */
    u8 settings[1];       /* 0x12334 */
} Manager;

extern Manager *g_naviMain;

void NaviMain_EnterState1(u8 *state);
void FUN_0039bbd4(u8 *state);
void FUN_003c28a8(u8 *settings, s8 value);

void FUN_00276968(s32 reapply, s32 value)
{
    Manager *manager = g_naviMain;

    if (manager != NULL) {
        FUN_003c28a8(manager->settings, value);
        NaviMain_EnterState1(manager->state);
        if (reapply != 0) {
            FUN_0039bbd4(manager->state);
        }
    }
}

} /* extern "C" */
