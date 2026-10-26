#pragma once
#include "common.h"

/* Functions in the 0x003d0000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct Owner;
struct NameOwner;
struct Obj;
struct OwnerState;
extern "C" {

void ownerTableEntryGet(int *out, Owner *owner, u32 index);

u32 FUN_003dbe68(NameOwner *owner);

void FUN_003dcaac(Obj *obj, u32 value);

void FUN_003d9d74(OwnerState *owner);

} /* extern "C" */
