#pragma once
#include "common.h"

/* Functions in the 0x004f0000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct Obj4FSlots28;
struct HandleOwner;
struct NameOwner;
struct Obj1F54;
struct SourceOwner;
struct SourceTable;
struct ObjectOwner;
extern "C" {

bool FUN_004f8264(void);

void obj4FSlots28Reset(Obj4FSlots28 *obj);

void handleSlotRelease(HandleOwner *owner, s32 index);

u32 FUN_004f89e8(NameOwner *owner);

void obj4FQueryPair(Obj1F54 *obj, u32 a, u32 b, s32 c);

void FUN_004f7fe8(SourceTable *table, SourceOwner *owner, u32 id);

void FUN_004f5f90(ObjectOwner *owner);

} /* extern "C" */
