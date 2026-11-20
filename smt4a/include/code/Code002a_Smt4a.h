#pragma once
#include "common.h"

/* Functions in the 0x002a0000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct Object;
struct Packed002a6a38;
extern "C" {

u8 FUN_002a6464(void);

u32 compendiumEntryIsRegistered(u32 index);

s32 resourceRunEmbeddedOperationIfUnblocked(Object *object);

u32 btlSlotHasReadyKind(Packed002a6a38 *object);

s32 resourceRunOperationIfUnblocked(Object *object);

} /* extern "C" */
