#ifndef ADDON_AOCSCRIPTHOLDER_H
#define ADDON_AOCSCRIPTHOLDER_H
#include "common.h"
#include <stddef.h>
struct ScriptProcess;
/* Owned quest-script loader embedded at AocMain + 0xA8. */
struct AocScriptHolder {
    u32 state;
    u32 entry;
    u8 showButtonHelp;
    u8 unk09[3];
    void *script;
    void *messages;
    ScriptProcess *process;
};
typedef char AocScriptHolderLayoutCheck[sizeof(AocScriptHolder) == 0x18 &&
    offsetof(AocScriptHolder, entry) == 4 &&
    offsetof(AocScriptHolder, showButtonHelp) == 8 &&
    offsetof(AocScriptHolder, script) == 0xC &&
    offsetof(AocScriptHolder, process) == 0x14 ? 1 : -1];
#endif
