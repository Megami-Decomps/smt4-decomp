#include "script/scrScriptProcess.h"
#include "script/ScriptEntryLookup.h"

extern "C" {

/* The first section describes the 0x20-byte function-name entries. */
ScriptVmLabel *scrScriptProcessGetEntry(ScriptProcess *process, s32 index)
{
    ScriptVmLabel *entry;

    if ((index >= 0) && (process->sections->size > index)) {
        entry = process->functions + index;
    } else {
        entry = NULL;
    }
    return entry;
}

}
