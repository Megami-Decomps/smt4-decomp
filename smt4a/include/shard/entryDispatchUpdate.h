#ifndef SHARD_ENTRYDISPATCHUPDATE_H
#define SHARD_ENTRYDISPATCHUPDATE_H

#include "common.h"
#include "shard/W8Match1_EntryDispatch.h"

#ifdef __cplusplus
extern "C" {
#endif

u32 entryDispatchUpdate(DispatchEntrySet* entries, s32 kind);

#ifdef __cplusplus
}
#endif

#endif
