#pragma once
#include "common.h"
#include "nn/Result.h"

/* Functions in the 0x003d0000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct Owner;
struct NameOwner;
struct Obj;
struct OwnerState;
extern "C" {

void ownerTableEntryGet(int *out, Owner *owner, u32 index);

u32 FUN_003dbe68(NameOwner *owner);

void btlEffectModelJobStart(Obj *obj, u32 value);

void FUN_003d9d74(OwnerState *owner);

/* Reads the value of the token's registry entry. */
nn::Result tokenRegistryGetValue(const u32 *key, u32 *value);

} /* extern "C" */
