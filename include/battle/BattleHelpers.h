#pragma once
#include "common.h"

/* Battle unit, entry and script helpers. */
extern "C" {

s32 btlFindNthActiveSpecialEntry(void *owner, s32 n);

void btlReflectInitKind9(s32 id, u32 flags, u32 value, u32 target, u32 option);

s32 btlResolveEntryChoice(s32 choice);

/* Resolves a script's group argument: 1-4 name a group, 0 and -1 use the selected group (0 also marks an active entry); 1 when none. */
s32 btlScriptResolveGroupArg(s32 group);

void btlSelectCandidateEntries(s32 limit);

s32 btlUiHasSelection(void *arg0);

void btlUnitClearRecordFields(void *units, s32 unitIndex);

int btlUnitGetSkillValue(void *unit);

} /* extern "C" */
