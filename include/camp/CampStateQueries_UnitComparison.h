#pragma once
#include "common.h"
#include "camp/UnitComparison.h"

/* Camp state queries. */
extern "C" {

void campFillUnitComparison(CampUnitComparison *row, u32 id, s32 compareParty);

} /* extern "C" */
