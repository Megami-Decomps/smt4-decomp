#pragma once
#include "common.h"
#include "gfx/ColoredQuad.h"

/* Functions in the 0x00140000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct Triple;
extern "C" {

u8 FUN_00146650(void);

void tripleClear(Triple *object);

} /* extern "C" */
