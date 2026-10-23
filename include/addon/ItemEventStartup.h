#ifndef ADDON_ITEM_EVENT_STARTUP_H
#define ADDON_ITEM_EVENT_STARTUP_H
#include "common.h"
#include "script/scrScriptProcess.h"
#include <stddef.h>
struct ItemEventStartup {
    u32 state;
    u8 unk04[8];
    void *script;
    void *messages;
    ScriptRunState *process;
};
typedef char ItemEventStartupLayoutCheck[offsetof(ItemEventStartup, script) == 0xC &&
    offsetof(ItemEventStartup, process) == 0x14 && sizeof(ItemEventStartup) == 0x18 ? 1 : -1];
#endif
