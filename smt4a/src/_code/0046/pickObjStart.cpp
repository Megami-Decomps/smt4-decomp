#include "classes/Obj5333c0.h"
#include "script/scrScriptProcess.h"
#include "script/ScriptEntry.h"

struct TableGroupHeader;

extern "C" {
s32 tableGroupFindEntryIndex(TableGroupHeader *table, const char *name);

// Try the secondary script's entry map first, then fall back to the primary script.
s32 pickObjStart(Obj5333c0 *scene, const char *entry)
{
    s32 index = tableGroupFindEntryIndex(static_cast<TableGroupHeader *>(scene->secondaryData), entry);
    ScriptProcess **script;
    if (index != -1) {
        script = &scene->secondary;
    } else {
        index = tableGroupFindEntryIndex(static_cast<TableGroupHeader *>(scene->primaryData), entry);
        script = &scene->primary;
    }
    scene->script = script;
    scrScriptProcessStartEntry(*script, index);
    return index;
}
}
