#pragma once
#include "common.h"

/* Functions in the 0x00400000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

/* Loads the resource file `name` into `owner` (its resource slot at +0x10). */
void FUN_0040aa6c(void *owner, const char *name);

} /* extern "C" */
