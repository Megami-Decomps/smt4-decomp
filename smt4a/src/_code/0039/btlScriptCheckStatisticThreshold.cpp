#include "common.h"

struct BattleMainState;
struct BattleEntity {
    u8 unk000[0x27a];
    u16 statistic; // 0x27a
};

extern "C" {
s32 scrGetArg(u32 index);
BattleMainState *btlGetMainState(void);
BattleEntity *FUN_003eaf20(BattleMainState *);
void scrSetResult(s32);

// Compare the selected battle entity's statistic with the script threshold.
u32 btlScriptCheckStatisticThreshold(void)
{
    s32 threshold = scrGetArg(0);
    BattleEntity *entity = FUN_003eaf20(btlGetMainState());
    if (entity != NULL) {
        s32 statistic = entity->statistic;
        scrSetResult(threshold <= statistic);
    } else {
        scrSetResult(0);
    }
    return 1;
}
}
