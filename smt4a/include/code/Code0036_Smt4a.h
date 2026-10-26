#pragma once
#include "common.h"

/* Functions in the 0x00360000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct ColorSlot;
struct Entry;
extern "C" {

void colorSlotSet(ColorSlot *slot, u8 r, u8 g, u8 b, u8 a);

Entry * FUN_003689d0(u32 index);

} /* extern "C" */
