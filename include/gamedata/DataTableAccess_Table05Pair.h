#pragma once
#include "common.h"
#include "gamedata/Table05Pair.h"

/* Data-table accessors. */
extern "C" {

Table05Pair *dataFindSymmetricPair(u8 first, u8 second);

} /* extern "C" */
