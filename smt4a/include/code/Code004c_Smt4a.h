#pragma once
#include "common.h"
#include "shard/W6_W6Match8_StatGrowth.h"

/* Functions in the 0x004c0000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct Flags4C;
extern "C" {

/* The hero's growth parameters from data table 9 (IV's takes an output pointer instead). The caller passes a
 * zero the body never reads (retail's `mov r1, #0` before the call, in IV's caller too). */
StatGrowthParameters playerGetGrowthParameters(s32 unused);

s32 mapCategoryToDestinationGroup(u32 category);

void NaviMain_ResetFlags(Flags4C *obj, u8 mode);

u32 getMaskType3(s32 includeExtra);

} /* extern "C" */
