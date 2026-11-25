#ifndef SCRIPT_SCRIPTENTRY_H
#define SCRIPT_SCRIPTENTRY_H

#include "common.h"

struct ScriptProcess;

/* Selects a script entry and resets its execution state, returning 0 for an invalid index. */
extern "C" u32 scrScriptProcessStartEntry(ScriptProcess *process, s32 entryIndex);

#endif
