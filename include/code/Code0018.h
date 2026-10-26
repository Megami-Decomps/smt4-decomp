#pragma once
#include "common.h"

/* Functions in the 0x00180000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

/* Whether bit 0 of the flags word at 0x130 of `state` is set; a missing state counts as clear. */
u32 FUN_00187168(const void *state);

} /* extern "C" */
