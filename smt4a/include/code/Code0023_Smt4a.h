#pragma once
#include "common.h"

/* Functions in the 0x00230000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct Holder;
struct Object;
extern "C" {

/* Forwards to the effect submission's default parameter setup. */
void effectSubmitDefaultDrawParameters(void);

void FUN_00239b08(void);

u32 FUN_0023b4a4(s32 index);

u32 FUN_0023ad2c(Holder *object);

void objDestroyIfSet(Object *object);

} /* extern "C" */
