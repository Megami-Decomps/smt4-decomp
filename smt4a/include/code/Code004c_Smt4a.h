#pragma once
#include "common.h"

/* Functions in the 0x004c0000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct Flags4C;
extern "C" {

s32 mapCategoryToDestinationGroup(u32 category);

void NaviMain_ResetFlags(Flags4C *obj, u8 mode);

u32 getMaskType3(s32 includeExtra);

} /* extern "C" */
