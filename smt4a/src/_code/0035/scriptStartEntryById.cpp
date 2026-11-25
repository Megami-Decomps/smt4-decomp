#include "common.h"
#include "script/scrScriptProcess.h"
#include "script/ScriptEntry.h"

struct ScriptTable;
struct LazyScriptState {
    ScriptTable* table;      // 0x00
    void* parameter;         // 0x04
    ScriptProcess* process;  // 0x08
};

extern "C" {
extern LazyScriptState g_lazyScriptState;
u32 tableGroupFindEntryIndex(ScriptTable* table, u32 id);

// Lazily creates the script process, then starts the entry selected by ID.
void scriptStartEntryById(u32 id)
{
    if (g_lazyScriptState.process == NULL) {
        ScriptProcess* process = scrScriptProcessCreate(g_lazyScriptState.table, g_lazyScriptState.parameter);
        g_lazyScriptState.process = process;
        process->mode = 2;
    }
    u32 index = tableGroupFindEntryIndex(g_lazyScriptState.table, id);
    scrScriptProcessStartEntry(g_lazyScriptState.process, index);
}
}
