#ifndef SHARD_W6_W6MATCH7_NUMERIC_STEPPER_H
#define SHARD_W6_W6MATCH7_NUMERIC_STEPPER_H

#include "common.h"
#include "shard/NaviMain.h"
#include "shard/W5_W5Match2_TouchRegions.h"

struct NumericStepper {
    /* 0x00 */ s32 value;
    /* 0x04 */ s32 maximum;
    /* 0x08 */ s32 minimum;
    /* 0x0c */ u8 unk0c[4];
    /* 0x10 */ u8 incrementActive;
    /* 0x11 */ u8 decrementActive;
    /* 0x12 */ s16 incrementKey;
    /* 0x14 */ s16 decrementKey;
    /* 0x16 */ u8 unk16[2];
};

extern "C" {
void numericStepperHandleInput(NumericStepper* stepper);
void numericStepperHandleInput(NumericStepper* stepper);
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

u32 FUN_0048e40c(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 naviGetActiveStateValue();

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

unsigned int FUN_003d98a0(unsigned int param_1,int param_2);

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
