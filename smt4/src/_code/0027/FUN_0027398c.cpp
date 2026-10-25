/* NON_MATCHING: retail constructs two unused pathname buffers; DLC quest script state machine is typed. */
#include "addon/AocMain.h"
#include "quest_center/QuestRuntime.h"
#include "script/scrScriptProcess.h"
#include <stddef.h>
#include "shard/FUN_002903f0.h"

struct QuestAddonScriptWork {
    u32 state;
    u8 unk04[8];
    void *commands;
    void *messages;
    ScriptRunState *script;
};
typedef char QuestAddonScriptWorkOffsets[offsetof(QuestAddonScriptWork, commands) == 0xc &&
    offsetof(QuestAddonScriptWork, messages) == 0x10 &&
    offsetof(QuestAddonScriptWork, script) == 0x14 ? 1 : -1];

extern "C" {
extern AocSystem *g_aocSystem;
const QuestRuntimeDefinition *dataTable1bOr1cGetRecord(u32 id);
s32 aocPackageGrantsItem(AocSystem *system, u16 id, u32 kind);
void aocQueueType07(AocSystem *system, u32 id, void **output, u32 flags);
void aocQueueType08(AocSystem *system, u32 id, void **output, u32 flags);
void buttonHelpSetPreset(u32 preset);
ScriptRunState *FUN_00297060(void *commands, void *messages);
void textFormatBuffer(char *output, const char *format, ...);
u32 tableGroupFindEntryIndex(void *commands, const char *entry);
void scrScriptProcessStartEntry(ScriptRunState *script, u32 entry);
s32 scrRunOpcodesStub(ScriptRunState *script);

u32 FUN_0027398c(QuestAddonScriptWork *work)
{
    // Script package and entry fields extend beyond the shared quest definition prefix.
    struct ScriptDefinitionView {
        u8 unk000[0x148];
        u16 package;
        u16 entry;
    };
    typedef char ScriptDefinitionOffsets[offsetof(ScriptDefinitionView, package) == 0x148 &&
        offsetof(ScriptDefinitionView, entry) == 0x14a ? 1 : -1];
    switch (work->state) {
    case 0: {
        const ScriptDefinitionView *definition = reinterpret_cast<const ScriptDefinitionView *>(
            dataTable1bOr1cGetRecord(FUN_002903f0()));
        if (!definition || !definition->package) {
            work->state = 3;
            return 0;
        }
        u16 package = definition->package;
        if (aocPackageGrantsItem(g_aocSystem, package, 1)) {
            aocQueueType07(g_aocSystem, package, &work->commands, 0);
            aocQueueType08(g_aocSystem, package, &work->messages, 0);
            work->state = 1;
        } else {
            work->state = 4;
        }
        break;
    }
    case 1: {
        if (!work->commands || !work->messages) {
            return 0;
        }
        const ScriptDefinitionView *definition = reinterpret_cast<const ScriptDefinitionView *>(
            dataTable1bOr1cGetRecord(FUN_002903f0()));
        if (!definition) {
            work->state = 3;
        }
        buttonHelpSetPreset(0x90);
        work->script = FUN_00297060(work->commands, work->messages);
        work->script->mode = 2;
        char entryName[128];
        textFormatBuffer(entryName, "e%03d_%02d", definition->package, definition->entry);
        u32 entry = tableGroupFindEntryIndex(work->commands, entryName);
        scrScriptProcessStartEntry(work->script, entry);
        work->state = 2;
        break;
    }
    case 2:
        if (scrRunOpcodesStub(work->script) == 2) {
            work->state = 3;
        }
        break;
    case 3:
        return 1;
    case 4:
        return 2;
    }
    return 0;
}
}
