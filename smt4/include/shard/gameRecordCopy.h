#ifndef SHARD_GAMERECORDCOPY_H
#define SHARD_GAMERECORDCOPY_H

#include "common.h"
#include "shard/W6_W6Match2_RecordValue.h"

#ifdef __cplusplus
extern "C" {
#endif

bool gameRecordCopy(u32 recordIndex, RecordValue* destination);

#ifdef __cplusplus
}
#endif

#endif
