#ifndef SHARD_W6_W6MATCH5_ENTRYSORTPRIMARYKEY_H
#define SHARD_W6_W6MATCH5_ENTRYSORTPRIMARYKEY_H

#include "shard/W5_W5Match7_EntrySort.h"
#include "gamedata/EquipmentRecordA.h"

/* The type-specific sort value of an equipment record. */
static __inline u16 entrySortGetPrimaryKey(const EquipmentRecordA *entry)
{
    return entry->priority;
}

#endif
