#pragma once
#include "common.h"
#include "classes/WindowStatus.h"

/* Functions in the 0x00230000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

Obj42217c *windowCreateStatusOperation(u32 unused, u32 kind);

} /* extern "C" */
