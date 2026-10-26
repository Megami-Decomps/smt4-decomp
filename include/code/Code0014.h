#pragma once
#include "common.h"

/* Functions in the 0x00140000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

void FUN_0014375c(void *work, f32 left, f32 right);

void effectRestoreSavedRenderPairs(void *owner, void *resource);

u8 FUN_0014af98(void);

} /* extern "C" */
