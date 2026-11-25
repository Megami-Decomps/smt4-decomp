/* NON_MATCHING: the unused event/e%03d/e%03d.bf/.mbm path buffers are restored and the script mode goes through the linker-inlined scriptProcessSetMode; the package value and the record's event base trade r5/r6, the state-4 store shares the state-1 store (retail: the state-2 one), and the second sprintf loads the entry before the package. */
#include <stdio.h>
#include "addon/AocMain.h"
#include "quest_center/QuestRecord.h"
#include "quest_center/QuestRuntime.h"
#include "script/scrScriptProcess.h"
#include <stddef.h>
#include "shard/W6_W6Match1_BgmRequestChannel.h"
#include "addon/AocSystem.h"
#include "script/ScriptEntry.h"

struct QuestAddonScriptWork {
    u32 state;
    u8 unk04[8];
    void *commands;
    void *messages;
    ScriptProcess *script;
};
typedef char QuestAddonScriptWorkOffsets[offsetof(QuestAddonScriptWork, commands) == 0xc &&
    offsetof(QuestAddonScriptWork, messages) == 0x10 &&
    offsetof(QuestAddonScriptWork, script) == 0x14 ? 1 : -1];

extern "C" {
s32 aocPackageGrantsItem(AocSystem *system, u16 id, u32 kind);
void aocQueueType07(AocSystem *system, u32 id, void **output, u32 flags);
void aocQueueType08(AocSystem *system, u32 id, void **output, u32 flags);
void buttonHelpSetPreset(u32 preset);
u32 tableGroupFindEntryIndex(void *commands, const char *entry);

u32 itemEventStartupUpdate(QuestAddonScriptWork *work)
{
    char commandPath[128];
    char messagePath[128];
    switch (work->state) {
    case 0: {
        const QuestRecord *definition = questDataGetRecord(rosterGetLeaderId());
        if (definition && definition->event.package != 0) {
            /* The resource paths were formatted for a debug trace and never used. */
            u16 package = definition->event.package;
            sprintf(commandPath, "event/e%03d/e%03d.bf", package, package);
            sprintf(messagePath, "event/e%03d/e%03d.mbm", package, package);
            if (aocPackageGrantsItem(g_aocSystem, definition->event.package, 1)) {
                aocQueueType07(g_aocSystem, package, &work->commands, 0);
                aocQueueType08(g_aocSystem, package, &work->messages, 0);
                work->state = 1;
            } else {
                work->state = 4;
            }
        } else {
            work->state = 3;
        }
        break;
    }
    case 1: {
        if (!work->commands || !work->messages) {
            break;
        }
        const QuestRecord *definition = questDataGetRecord(rosterGetLeaderId());
        if (!definition) {
            work->state = 3;
        }
        buttonHelpSetPreset(0x90);
        work->script = scrScriptProcessCreate(work->commands, work->messages);
        scriptProcessSetMode(work->script, 2);
        sprintf(commandPath, "e%03d_%02d", definition->event.package, definition->event.entry);
        u32 entry = tableGroupFindEntryIndex(work->commands, commandPath);
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
