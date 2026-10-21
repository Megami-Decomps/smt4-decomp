#ifndef SHARD_W6_W6MATCH3_UNITSTATUSREQUEST_H
#define SHARD_W6_W6MATCH3_UNITSTATUSREQUEST_H

#include "common.h"

struct UnitCategoryRecord;

extern "C" void statusRequestUnitDetails(const UnitCategoryRecord* unit, u8 option, const void* extra);

#endif
