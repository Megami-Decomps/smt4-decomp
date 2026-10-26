#pragma once
#include "common.h"

/* Add-on content (AOC) system calls. */
extern "C" {

/* Clears the add-on display operation flag; the system argument is ignored. */
void aocClearDisplayFlag(void *system);

} /* extern "C" */
