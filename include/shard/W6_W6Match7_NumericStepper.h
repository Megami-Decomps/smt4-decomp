#ifndef SHARD_W6_W6MATCH7_NUMERIC_STEPPER_H
#define SHARD_W6_W6MATCH7_NUMERIC_STEPPER_H

#include "common.h"
#include "shard/NaviMain.h"
#include "shard/W5_W5Match2_TouchRegions.h"

struct NumericStepper {
    /* 0x00 */ s32 value;
    /* 0x04 */ s32 maximum;
    /* 0x08 */ s32 minimum;
    /* 0x0c */ s32 row;            /* the list row the stepper is drawn on (its touch regions follow it) */
    /* 0x10 */ s8 incrementActive;
    /* 0x11 */ s8 decrementActive;
    /* 0x12 */ s16 incrementKey;
    /* 0x14 */ s16 decrementKey;
    /* 0x16 */ u8 unk16[2];
};

extern "C" {
void numericStepperHandleInput(NumericStepper* stepper);
void numericStepperHandleInput(NumericStepper* stepper);
}

/* Sets the stepper's range and the row it is drawn on; it starts at 1 unless nothing can be chosen
 * (both shops' quantity panels: IV's shopQuantityStep, Apocalypse's Obj536044::shopQuantityStep). */
static __inline void numericStepperSetup(NumericStepper *stepper, s32 maximum, s32 minimum, s32 row)
{
    stepper->value = maximum != 0;
    stepper->maximum = maximum;
    stepper->minimum = minimum;
    stepper->row = row;
}

extern "C" {
u32 FUN_003c2a84(int alt);
}

extern "C" {
u32 getMaskB6(s32 includeExtra);
}

#ifdef __cplusplus
extern "C" {
#endif

u32 naviMainConditionsHold(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 naviGetActiveStateValue(void *scene);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void naviMainSetValuePair(u32 unused, const NaviValuePair *value);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

unsigned int btlEffectNameHasPrefix(unsigned int param_1,int param_2);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

s32 contentGetUpgradedKindValue(u32 id);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

const char *dataLookupDisplayName(s32 unused, s32 id);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void touchRegisterFirstRegion(TouchRegions *regions,s32 x,s32 y,s32 width,s32 height);

#ifdef __cplusplus
}
#endif

#endif
