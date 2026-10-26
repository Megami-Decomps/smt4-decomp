#pragma once
#include "common.h"
#include "gamedata/GroupedFileTables.h"

/* Add-on content (AOC) system calls. */
extern "C" {

void aocActivateFileGroupFlags(GroupedFileTables *owner);

} /* extern "C" */
