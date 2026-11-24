#pragma once
#include "common.h"

/* Functions in the 0x00320000 code block (Apocalypse) whose subsystem is not known yet; each declaration matches its
 * definition. */
extern "C" {

/* The twin of IV's mapDepartSpawnPlayerEffect. */
void mapDepartSpawnPlayerEffect(s32 variant);

} /* extern "C" */
