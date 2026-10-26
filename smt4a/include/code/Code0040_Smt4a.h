#pragma once
#include "common.h"

/* Functions in the 0x00400000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct Object;
struct ChainOwner;
struct LinkAt1C;
struct VtblHolder;
struct ObjectOwner3;
extern "C" {

s32 FUN_004038e0(u32 unused, s32 level);

void FUN_0040a3c8(s32 amount);

void FUN_0040ba38(Object *obj);

s32 chainCountIdUnflagged(ChainOwner *owner, s32 id);

void FUN_00400d68(LinkAt1C *obj);

void vtblHolderInit557bbc(VtblHolder *obj);

void objectOwner3Release(ObjectOwner3 *owner);

} /* extern "C" */
