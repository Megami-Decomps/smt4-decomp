#pragma once
#include "common.h"

/* Functions in the 0x002a0000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct Obj;
struct ArchiveView;
struct Placement;
struct Owner;
extern "C" {

void FUN_002ae028(Obj *obj);

u32 FUN_002ac780(ArchiveView *archive);

u8 objGetFlagBit0(Obj *obj);

void FUN_002aea44(Obj *obj);

u32 FUN_002a4e18(Placement *placement, s32 mode);

void FUN_002a6d1c(Obj *obj, u32 a, u32 b, u32 c, u32 d);

void messageStatesSetFirst(u8 value);

void wordTripleClear(Obj *obj);

void FUN_002a8638(Owner *owner, u32 *a, u32 *b, u32 *c, u32 *d);

} /* extern "C" */
