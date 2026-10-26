#pragma once
#include "common.h"

/* Functions in the 0x00140000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct Triple;
extern "C" {

void FUN_0014685c(u32 a, u32 b, u32 c, u32 d, u32 e);

u8 FUN_00146650(void);

void FUN_0014e314(u32 a, u32 b, u32 c, u32 d, f32 f0, f32 f1, f32 f2, f32 f3, f32 f4);

void tripleClear(Triple *object);

} /* extern "C" */
