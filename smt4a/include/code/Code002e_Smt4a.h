#pragma once
#include "common.h"
#include "runtime/String.h"

/* Functions in the 0x002e0000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct LinkedTarget;
extern "C" {

u8 campCecEditHasConfirmFlag(void);

void FUN_002e1208(u32 unused, s32 id, u32 *outA, u32 *outB);

u32 linkedTargetRunHolderLinks(LinkedTarget *target);

void asdOperatorDeleteC(void *memory);

} /* extern "C" */
