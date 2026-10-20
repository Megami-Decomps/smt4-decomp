/* NON_MATCHING: the two position words are stored with stm through r1 (retail: through r0, with mov r1, r4 ahead of it). */
#include "common.h"

extern "C" {

typedef struct BattleUnit {
    /* 0x000 */ u8 unk000[0x13C];
    /* 0x13C */ u32 stageX;
    /* 0x140 */ u32 stageY;
} BattleUnit;

typedef struct BattleManager {
    /* 0x00 */ u8 unk00[0x80];
    /* 0x80 */ int phase;
} BattleManager;

extern BattleManager *DAT_004398d4;

int FUN_0027e760(BattleManager *battle);
BattleUnit *btlGetMainState(void);
int FUN_002893d8(void);
u32 scrGetArg(int index);
int FUN_003c7c84(BattleManager *battle, BattleUnit *unit);
int FUN_003c7f20(BattleManager *battle, BattleUnit *unit);

/* Script command: moves a battle unit to the stage position given by script arguments 0 and 1 (returns whether phase 4 is active while one is busy). */
bool scrComm_Battle_SetStagePosition(void)
{
    BattleUnit *unit = btlGetMainState();
    u32 x = scrGetArg(0);
    u32 y = scrGetArg(1);

    if (FUN_002893d8() != 0) {
        return DAT_004398d4->phase == 4;
    }
    FUN_003c7f20(DAT_004398d4, unit);
    unit->stageX = x;
    unit->stageY = y;
    FUN_003c7c84(DAT_004398d4, unit);
    FUN_0027e760(DAT_004398d4);
    return false;
}

} /* extern "C" */
