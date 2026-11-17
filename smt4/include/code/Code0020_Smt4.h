#pragma once
#include "common.h"

/* Functions in the 0x00200000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct OuterFUN_0020ffe8;
extern "C" {

u32 FUN_00203610(void);

/* Plays `animation` on a model holder from frame `start`, blending over `blend` (the body is a removed debug hook). */
void FUN_0020ffe8(OuterFUN_0020ffe8 *outer, u32 animation, f32 start, f32 blend);

} /* extern "C" */
