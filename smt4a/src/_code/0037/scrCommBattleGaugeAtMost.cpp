#include "common.h"
#include "battle/BtlMainAccess.h"

extern "C" {

typedef struct Gauge {
    /* 0x0 */ s32 current;
    /* 0x4 */ s32 maximum;
} Gauge;

typedef struct GaugeOwner {
    /* 0x000 */ u8 unk000[0x258];
    /* 0x258 */ Gauge gauge;
} GaugeOwner;

s32 scrSetResult(s32 value);
GaugeOwner *FUN_003eaf20(void);
s32 scrGetArg(s32 index);

static s32 gaugePercent(Gauge *gauge)
{
    s32 current = gauge->current;
    s32 maximum = gauge->maximum;
    return current * 100 / maximum;
}

/* Script command: sets the result to 1 when the gauge's percentage is at most the argument. */
u32 scrCommBattleGaugeAtMost(void)
{
    s32 limit = scrGetArg(0);
    GaugeOwner *owner;

    btlGetMainState();
    owner = FUN_003eaf20();
    if (owner != NULL && gaugePercent(&owner->gauge) <= limit) {
        scrSetResult(1);
        return 1;
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
