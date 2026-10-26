#pragma once
#include "common.h"

/* Functions in the 0x001c0000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

/* Starts loading the file `name` into the resource list `model` (its slot at +0x10). */
void FUN_001cd3ec(void *model, const char *name);

} /* extern "C" */
