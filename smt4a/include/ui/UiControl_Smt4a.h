#pragma once
#include "common.h"

/* UiControl (declarations migrated from callers). */
struct FlagHolder;
struct Dialog;
extern "C" {

u32 categoryGetThresholdIndex(u32 value);

u8 ifTouchGetSelectionMode(void);

void msgBoxFlagsClearBit7(FlagHolder *object);

void dialogEnterState(Dialog *dialog, u32 state, u32 arg);

} /* extern "C" */
