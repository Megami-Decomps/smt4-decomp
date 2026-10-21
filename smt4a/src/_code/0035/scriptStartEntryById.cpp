#include "common.h"

struct ScriptTable;
struct ScriptProcess {
    u8 unk000[0x108]; // 0x000
    u32 mode;         // 0x108
};
struct LazyScriptState {
    ScriptTable* table;      // 0x00
    u32 parameter;           // 0x04
    ScriptProcess* process;  // 0x08
};

extern "C" {
extern LazyScriptState g_lazyScriptState;
ScriptProcess* FUN_00275bc8(ScriptTable* table, u32 parameter);
u32 tableGroupFindEntryIndex(ScriptTable* table, u32 id);
void scrScriptProcessStartEntry(ScriptProcess* process, u32 index);

// Lazily creates the script process, then starts the entry selected by ID.
void scriptStartEntryById(u32 id)
{
    if (g_lazyScriptState.process == NULL) {
        ScriptProcess* process = FUN_00275bc8(g_lazyScriptState.table, g_lazyScriptState.parameter);
        g_lazyScriptState.process = process;
        process->mode = 2;
    }
    u32 index = tableGroupFindEntryIndex(g_lazyScriptState.table, id);
    scrScriptProcessStartEntry(g_lazyScriptState.process, index);
}
}
