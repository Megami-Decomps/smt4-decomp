#pragma once
#include "common.h"

/* BattleHelpers (declarations migrated from callers). */
struct BtlEntry;
struct BattleUnitSnapshot;
struct SnapshotUnitSource;
extern "C" {

void btlUiInvalidateIndexedEntries(void);

void btlBuildUnitSnapshot(BattleUnitSnapshot *snapshot, const SnapshotUnitSource *unit);

} /* extern "C" */
