#pragma once
#include "common.h"

/* Functions in the 0x001a0000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct Object;
struct Obj;
extern "C" {

/* Draws one quest row of the quest list and returns its text colour. */
u32 FUN_001af84c(u16 quest, u32 x, u32 y, u32 flags, s32 full);

void FUN_001af670(void *owner, u32 entryId, s32 x, s32 y, s32 highlighted, f32 speed);

void FUN_001ab998(Object *object);

u32 FUN_001ad4c0(Obj *obj);

} /* extern "C" */
