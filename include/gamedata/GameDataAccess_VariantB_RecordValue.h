#pragma once
#include "common.h"
#include "shard/W6_W6Match2_RecordValue.h"

/* Game-data, flag and record accessors. */
extern "C" {

bool gameRecordCopy(u32 recordIndex, RecordValue* destination);

} /* extern "C" */
