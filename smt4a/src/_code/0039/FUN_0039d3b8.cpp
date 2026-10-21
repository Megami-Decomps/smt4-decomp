/* NON_MATCHING: compiler reverses the statistic comparison operands and uses ge/lt instead of le/gt. */
#include "common.h"

struct BattleMainState;
struct BattleEntity {
    u8 unk000[0x27a];
    u16 statistic; // 0x27a
};

extern "C" {
s32 scrGetArg(void);
BattleMainState *btlGetMainState(void);
BattleEntity *FUN_003eaf20(BattleMainState *);
void scrSetResult(s32);

// Compare the selected battle entity's statistic with the script threshold.
u32 FUN_0039d3b8(void)
{
    s32 threshold = scrGetArg();
    BattleEntity *entity = FUN_003eaf20(btlGetMainState());
    if (entity != NULL)
        scrSetResult(entity->statistic >= threshold);
    else
        scrSetResult(0);
    return 1;
}
}
