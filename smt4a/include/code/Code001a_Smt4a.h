#pragma once
#include "common.h"
#include "gfx/TextureDrawRequest.h"

/* Functions in the 0x001a0000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct Holder;
struct BustupPlacement;
struct Record;
extern "C" {

void FUN_001a1244(Holder *object);

s32 bustupPlaceActiveSlot(BustupPlacement *placement, s32 slot);


} /* extern "C" */
