#pragma once
#include "common.h"
#include "shard/Shard0050.h"

/* Game-data, flag and record accessors. */
extern "C" {

void table30GetEntry(u8 **out, Table30 *table, u32 index);

void table30GetEntryB(u8 **out, Table30 *table, u32 index);

} /* extern "C" */
