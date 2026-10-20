/* NON_MATCHING: retail materialises the constant 100 in r0 (the dead gauge pointer's register); the build uses r3 */
#include "common.h"

extern "C" {

typedef struct Gauge0039d35c {
    /* 0x0 */ s32 value;
    /* 0x4 */ s32 maxValue;
} Gauge0039d35c;

typedef struct BattleGaugeOwner0039d35c {
    /* 0x000 */ u8 unk000[600];
    /* 0x258 */ Gauge0039d35c gauge;
} BattleGaugeOwner0039d35c;

/* Fill of a gauge in percent. */
static __inline s32 gaugePercent(Gauge0039d35c *gauge)
{
    return gauge->value * 100 / gauge->maxValue;
}

s32 scrGetArg(void);
void *btlGetMainState(void);
BattleGaugeOwner0039d35c *FUN_003eaf20(void *state);
void scrSetResult(s32 value);

/* Script command: true when the battle gauge is filled to at least arg0 percent. */
s32 scrCommBattleGaugeAtLeast(void)
{
    s32 percent = scrGetArg();
    BattleGaugeOwner0039d35c *owner = FUN_003eaf20(btlGetMainState());

    if (owner != NULL && percent <= gaugePercent(&owner->gauge)) {
        scrSetResult(1);
        return 1;
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
