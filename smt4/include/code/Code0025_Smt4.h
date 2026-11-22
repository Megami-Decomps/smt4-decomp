#pragma once
#include "common.h"

/* Functions in the 0x00250000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct BtlEntry;
struct BtlMainState;
struct MapSoundOwner;
extern "C" {

BtlEntry * FUN_002561d8(BtlMainState *state, s32 index, s32 wantUsed);

void FUN_002597c0(void);

/* The colour of an element at a ramp phase. */
s32 FUN_0025765c(s32 element, s32 phase);

u32 cecQueryOptionalProcess(void);

void FUN_00253860(MapSoundOwner *owner, s32 variant);

} /* extern "C" */
