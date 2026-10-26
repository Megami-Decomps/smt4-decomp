#pragma once
#include "common.h"

/* BattleHelpers (declarations migrated from callers). */
struct BtlEntry;
struct SlotManager;
struct BattleUnitSnapshot;
struct SnapshotUnitSource;
extern "C" {

void btlUiInvalidateIndexedEntries(void);

BtlEntry * btlMainFindEntryByListedId(SlotManager *manager, s32 id);

void btlBuildUnitSnapshot(BattleUnitSnapshot *snapshot, const SnapshotUnitSource *unit);

} /* extern "C" */
