#pragma once
#include "common.h"

/* Functions in the 0x00290000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

/* Reads or updates the state of an object (0 when its disabled flag at 0x62 is set). */
u32 FUN_0029ee54(const void *object);

} /* extern "C" */
