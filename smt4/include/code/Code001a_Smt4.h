#pragma once
#include "common.h"

/* Functions in the 0x001a0000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct Object;
struct Obj;
extern "C" {

void FUN_001af670(void *owner, u32 entryId, s32 x, s32 y, s32 highlighted, f32 speed);

void FUN_001ab998(Object *object);

u32 FUN_001ad4c0(Obj *obj);

} /* extern "C" */
