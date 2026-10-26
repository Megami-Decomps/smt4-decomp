#pragma once
#include "common.h"
#include "shard/W8Match1_EntryDispatch.h"

/* Runtime object, job and event helpers. */
extern "C" {

u32 entryDispatchUpdate(DispatchEntrySet* entries, s32 kind);

} /* extern "C" */
