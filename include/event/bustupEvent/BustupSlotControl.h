#pragma once
#include "common.h"

/* Bust-up slot control. */
extern "C" {

void bustupConfigureSlotTransition(u32 job, u32 portrait, s32 mode, u32 first, u32 second, u32 third);

void bustupCutAnimRequestStopSlots(s32 arg0);

} /* extern "C" */
