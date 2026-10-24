/* NON_MATCHING: constant register only: retail multiplies with `mov r0, #100; mul r0, r2, r0`; built keeps 100 in r3 (`mov r3, #100; mul r0, r2, r3`). */
#include "common.h"

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
void *btlGetMainState(void);
GaugeOwner *FUN_003eaf20(void);
s32 scrGetArg(void);

static s32 gaugePercent(Gauge *gauge)
{
    return 100 * gauge->current / gauge->maximum;
}

/* Script command: sets the result to 1 when the gauge's percentage is at most the argument. */
u32 FUN_0037f6c4(void)
{
    s32 limit = scrGetArg();
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
