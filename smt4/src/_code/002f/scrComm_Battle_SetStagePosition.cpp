#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

struct StagePosition {
    s32 x;
    s32 y;
};

typedef struct BattleUnit {
    /* 0x000 */ u8 unk000[0x13C];
    /* 0x13C */ StagePosition stagePosition;
} BattleUnit;

typedef struct BattleManager {
    /* 0x00 */ u8 unk00[0x80];
    /* 0x80 */ int phase;
} BattleManager;

extern BattleManager *DAT_004398d4;

void FUN_0027e760(BattleManager *battle);
int scrGetCommandFrame(void);
u32 scrGetArg(int index);
void FUN_003c7c84(BattleManager *battle, BattleUnit *unit);
void FUN_003c7f20(BattleManager *battle, BattleUnit *unit);

/* Script command: moves a battle unit to the stage position given by script arguments 0 and 1 (returns whether phase 4 is active while one is busy). */
bool scrComm_Battle_SetStagePosition(void)
{
    BattleUnit *unit = reinterpret_cast<BattleUnit *>(btlGetMainState());
    s32 x = scrGetArg(0);
    s32 y = scrGetArg(1);

    if (scrGetCommandFrame() != 0) {
        return DAT_004398d4->phase == 4;
    }
    FUN_003c7f20(DAT_004398d4, unit);
    unit->stagePosition.x = x;
    unit->stagePosition.y = y;
    FUN_003c7c84(DAT_004398d4, unit);
    FUN_0027e760(DAT_004398d4);
    return false;
}

} /* extern "C" */
