#pragma once
#include "common.h"
#include "gamedata/DevilRecord.h"

/* Game-data, flag and record accessors. */
extern "C" {

DevilSortRecord *devilGetRecord(u16 id);

} /* extern "C" */
