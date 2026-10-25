/* NON_MATCHING: switch return blocks merge differently, process-mode constant is saved, and argument loads are rescheduled. */
#include "addon/ItemEventStartup.h"
#include "addon/aocMain.h"
#include "shard/W5_W5Match7_DataRecord.h"

extern "C" {
extern AocSystemA *g_aocSystem;
u32 FUN_004186e0(void);
void textFormatBuffer(char *, const char *, ...);
s32 aocPackageGrantsItem(AocSystemA *, u16, u32);
void aocQueueType07(AocSystemA *, u32, void **, u32);
void aocQueueType08(AocSystemA *, u32, void **, u32);
void sysPlaySe(u32);
ScriptRunState *FUN_00275bc8(void *, void *);
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
        ItemDataRecord *item = FUN_001ad9b4(FUN_004186e0());
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
        ItemDataRecord *item = FUN_001ad9b4(FUN_004186e0());
        if (!item)
            work->state = 3;
        sysPlaySe(0x92);
        ScriptRunState *process = FUN_00275bc8(work->script, work->messages);
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
