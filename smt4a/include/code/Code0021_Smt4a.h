#pragma once
#include "common.h"

/* Functions in the 0x00210000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct HelpMenu;
extern "C" {

void FUN_00214da4(void);

void FUN_0021b1a8(HelpMenu *menu);

} /* extern "C" */
