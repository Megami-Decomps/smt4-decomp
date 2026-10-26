/* NON_MATCHING: slot-condition lowering, transition-store scheduling and constant register lifetimes differ. */
#include "saveLoadUI/SaveLoadControllerA.h"
#include "sys/RuntimeObjects.h"
#include "shard/Shard0050.h"

struct SaveLoadScriptEntryViewA {
    u8 unk00[0x40];
    void *process;
    u8 started;
    u8 unk45[7];
    u32 entry;
    u8 entryStarted;
};
struct SaveLoadResultFlagsViewA {
    SaveLoadUIBaseA prefix;
    u8 load;
    u8 save;
};
extern "C" {
extern SaveLoadResultFlagsViewA g_saveLoadUIBase;
void ifTouchRegionRemove();
void buttonHelpSetText(s32, u32);
void scrScriptProcessStartEntry(void *, u32);

void FUN_0041e9d4(SaveLoadControllerA *work)
{
    for (s32 i = 0; i < work->touch.count; ++i)
        ifTouchRegionRemove();
    work->touch.count = 0;
    fillThreeWordsWithByte(work->touch.handles, -1);
    work->pending = 0;
    work->confirmed = 0;
    work->canceled = 0;
    if ((!work->slotFlags[work->selectedSlot] && work->colorIndex == 0) ||
        (work->colorIndex == 1 && work->selectedSlot > 0 && !work->unk013[0])) {
        work->busy = 0;
        eventQueueAddUnique(0x100020F);
        return;
    }
    buttonHelpSetText(0, 0xF4F4F4FF);
    eventQueueAddUnique(0x100020E);
    work->busy = 1;
    SaveLoadScriptEntryViewA *script = reinterpret_cast<SaveLoadScriptEntryViewA *>(work);
    if (!script->entryStarted && work->selectedSlot > 0) {
        scrScriptProcessStartEntry(script->process, script->entry);
        script->entryStarted = 1;
        s8 mode = work->colorIndex;
        if (mode == 0)
            g_saveLoadUIBase.save = 1;
        else if (mode == 1)
            g_saveLoadUIBase.load = 1;
        script->started = 1;
        if (mode == 0) {
            u8 previous = work->state;
            work->frame = 0;
            work->state = 0x15;
            work->previousState = previous;
            work->nextState = 7;
        } else if (mode == 1) {
            u8 previous = work->state;
            work->frame = 0;
            work->state = 0x15;
            work->previousState = previous;
            work->nextState = 10;
        }
    } else if (work->colorIndex == 0) {
        u8 previous = work->state;
        work->state = 7;
        work->previousState = previous;
        work->frame = 0;
        work->nextState = 0;
    } else if (work->colorIndex == 1) {
        u8 previous = work->state;
        work->state = 10;
        work->previousState = previous;
        work->frame = 0;
        work->nextState = 0;
    }
}
}
