#pragma once
#include "common.h"

/* Functions in the 0x00230000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

void FUN_00230df0(u8 value);

void FUN_00232848(void);

void *FUN_00233fcc(void *unused, u32 kind);

void FUN_00234624(int *out, void *owner, u32 index);

void *FUN_00239218(u32 index);

u32 FUN_0023b3b8(void);

void FUN_0023b45c(s32 flag);

void FUN_0023dcb8(void);

void FUN_0023fad8(void *object);

u32 FUN_0023fae0(void *owner, s32 group);

} /* extern "C" */
