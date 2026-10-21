#include "common.h"
extern "C" {
s32 gameFlagIsSet(u32 flag);
extern struct {
    /* 0x00 */ u8 unk00[0x44];
    /* 0x44 */ s8 value;
} g_battleViewState;
/* Reads the navigation setting only while its feature flag is enabled. */
s32 naviGetEnabledSetting(void)
{
    if (gameFlagIsSet(0x4D0))
        return g_battleViewState.value;
    return 0;
}
}
