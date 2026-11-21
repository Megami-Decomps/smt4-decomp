#pragma once
#include "common.h"

extern "C" {

/* Creates the window status operation object of the given kind (IV). */
void *windowCreateStatusOperation(void *unused, u32 kind);

} /* extern "C" */
