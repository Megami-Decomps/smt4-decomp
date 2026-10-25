/* NON_MATCHING: retail addresses g_gameState through `add r0, r5, #0`, keeps the flag in r4/record in r5, and shares one `return 0` tail; register allocation and block order differ. */
#include "map/mapDepart.h"
#include "gamedata/FlagBitTests.h"

struct AreaEventRecord {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u16 threshold;
};

extern "C" {

extern GameStateA g_gameState;

s32 gameFlagsTestThirdBank(void);
AreaEventRecord *FUN_0015fa74(s32 mode, s32 submode);
f32 partyGetAverageLevel(s32 kind);
void gameFlagsWriteBit(s32 flag, s32 value);
s32 randRange(u32 max);

/* Returns the one-time event flag of the current area in modes 28-31, or 0. */
static __inline s32 areaEventFlag(void)
{
    s32 flag = g_gameState.submode;

    switch (g_gameState.mode) {
    case 28:
        return flag;
    case 29:
        return flag + 20;
    case 30:
        return flag + 40;
    case 31:
        return flag + 60;
    }
    return 0;
}

/* In modes 28-31, fires the current area's one-time event when its threshold exceeds the current
 * value: sets its flag and returns 1 or 2; returns 0 otherwise. */
s32 FUN_00272d44(void)
{
    s32 id = areaEventFlag();
    s16 flag;
    AreaEventRecord *record;

    if (id == 0) {
        return 0;
    }
    flag = id;
    if (gameFlagsTestThirdBank() != 0) {
        return 0;
    }
    if (flagsBit7Get(g_gameState.mode, g_gameState.submode) == 0) {
        return 0;
    }
    record = FUN_0015fa74(g_gameState.mode, g_gameState.submode);
    if ((s32)partyGetAverageLevel(2) >= record->threshold) {
        return 0;
    }
    gameFlagsWriteBit(flag, 1);
    return randRange(1) + 1;
}

} /* extern "C" */
