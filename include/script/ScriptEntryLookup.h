#ifndef SCRIPT_SCRIPTENTRYLOOKUP_H
#define SCRIPT_SCRIPTENTRYLOOKUP_H

#include "script/ScriptVm.h"

extern "C" {
/* Returns a function-name entry from the loaded script, or NULL for an invalid index. */
ScriptVmLabel *scrScriptProcessGetEntry(ScriptProcess *process, s32 index);
}

#endif
