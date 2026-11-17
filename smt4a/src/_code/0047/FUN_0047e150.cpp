/* NON_MATCHING: switch return blocks merge differently, process-mode constant is saved, and argument loads are rescheduled. */
#include "addon/ItemEventStartup.h"
#include "addon/aocMain.h"
#include "quest_center/QuestRecordA.h"
#include "addon/AocSystemA.h"

extern "C" {
u16 rosterGetLeaderId(void);
void textFormatBuffer(char *, const char *, ...);
void aocQueueType07(AocSystemA *, u32, void **, u32);
void aocQueueType08(AocSystemA *, u32, void **, u32);
void sysPlaySe(u32);
ScriptRunState *scrScriptProcessCreate(void *, void *);
u32 tableGroupFindEntryIndex(void *, const char *);
void scrScriptProcessStartEntry(ScriptRunState *, u32);
void scriptProcessSetMode(ScriptRunState *process, s32 mode);
u32 scrRunOpcodesStub(ScriptRunState *);

u32 FUN_0047e150(ItemEventStartup *work)
{
    char path[128];
    char messagesPath[128];
    switch (work->state) {
    case 0: {
        QuestRecordA *item = dataTable1bOr1cGetRecord(rosterGetLeaderId());
        if (!item || item->event.package == 0) {
            work->state = 3;
            return 0;
        }
        u32 package = item->event.package;
        textFormatBuffer(path, "event/e%03d/e%03d.bf", package, package);
        textFormatBuffer(messagesPath, "event/e%03d/e%03d.mbm", package, package);
        if (aocPackageGrantsItem(g_aocSystem, item->event.package, 1)) {
            aocQueueType07(g_aocSystem, package, &work->script, 0);
            aocQueueType08(g_aocSystem, package, &work->messages, 0);
            work->state = 1;
        } else {
            work->state = 4;
        }
        break;
    }
    case 1: {
        if (!work->script || !work->messages)
            return 0;
        QuestRecordA *item = dataTable1bOr1cGetRecord(rosterGetLeaderId());
        if (!item)
            work->state = 3;
        sysPlaySe(0x92);
        ScriptRunState *process = scrScriptProcessCreate(work->script, work->messages);
        work->process = process;
        scriptProcessSetMode(process, 2);
        textFormatBuffer(path, "e%03d_%02d", item->event.package, item->event.entry);
        u32 entry = tableGroupFindEntryIndex(work->script, path);
        scrScriptProcessStartEntry(work->process, entry);
        work->state = 2;
        break;
    }
    case 2:
        if (scrRunOpcodesStub(work->process) == 2)
            work->state = 3;
        break;
    case 3:
        return 1;
    case 4:
        return 2;
    }
    return 0;
}
}
