#pragma once
#include "common.h"

/* Functions in the 0x001a0000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct Holder;
struct BustupPlacement;
struct Record;
extern "C" {

void FUN_001a1244(Holder *object);

s32 FUN_001ad1ac(BustupPlacement *placement, s32 slot);

void FUN_001ab8e0(Record *record, u32 a, u32 b, u32 c, u32 d);

} /* extern "C" */
