/* NON_MATCHING: twin of IV's AocMenu::runWindowOperation. Retail inlines the panel's Obj4221a4::initialize
 * (the base initialize, the three table-47 touch regions and `ready = 1`) where this unit calls it: the two were
 * one translation unit. The rest is the `panel.state` base, the case-3 store order and the step-6 change sharing
 * its tail. */
#include "classes/AocMenu.h"
#include "addon/aocMain.h"
#include "classes/Obj422594.h"
#include "test/BustupViewer.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/AsdDebugHooks.h"

/* A window operation object: slot 1 releases it, slot 3 hands out its pending event. */
class WindowOperation {
public:
    virtual void slot0();
    virtual void release();
    virtual void slot2();
    virtual RequestParameters getEvent();
};

extern "C" {
s32 strIsEmpty(RequestParameters *event);
s32 byteIsAtLeast100(RequestParameters *event);
void jobFlagsWorkStop(u32 *job);
void *windowCreateStatusOperation(void *operation, s32 mode); // declcheck: local (the shared declaration does not compile here or changes this unit)
void aocLoadingTaskStart(u32 *job, s32 mode);
void aocMenuSetButtonHelp(u32 *job, s32 a, s32 b);
void FUN_0047bc90(u32 *job, RequestParameters *event);
void releaseEntriesB(u32 *regions);
void releaseEntriesA(u32 *entries);
void FUN_00476e58(u32 *job, s32 a, s32 b);
void listScrollerInitialize(u32 *range, s32 a, s32 entry, s32 b, s32 c, s32 d);
s32 rangeGetMinimumLimit(u32 *range);
void messageIdListSetRange(u32 *entries, u32 group, u32 id, s32 value);

/* Runs the job's window-operation state machine: starts the operation, waits for its event, and
   either completes (event 0x66/0x67 or an empty event) or stores the event and parks in state 9999. */
void AocMenu::runWindowOperation()
{
    u32 *job = reinterpret_cast<u32 *>(this);
    RequestParameters event;
    AocMain *aoc = g_aocMain;
    switch (substep) {
    case 0:
        aocMenuSetButtonHelp(job, 0xffffffff, 0);
        substep = 1;
        break;
    case 1:
        if (buttonHelpStateIsNot3() != 0) {
            releaseEntriesB(job + 0xba);
            releaseEntriesA(job + 0xad);
            aocLoadingTaskStart(job, 0);
            AocMenuWindow *created = (AocMenuWindow *)windowCreateStatusOperation(unk020C, 0);
            substep = 2;
            window = created;
        }
        break;
    case 2:
        if ((flags & 0x200) != 0) {
            RequestParameters polled = ((WindowOperation *)window)->getEvent();
            event = polled;
            if (strIsEmpty(&event) != 0) {
                substep = 3;
            } else if (byteIsAtLeast100(&event) != 0) {
                jobFlagsWorkStop(job);
                switch (event.kind) {
                case 0x67:
                    aocMenuChangeStep(this, 3);
                    break;
                case 0x66: {
                    RequestParameters copy = event;
                    FUN_0047bc90(job, &copy);
                    break;
                }
                default:
                    request = event;
                    substep = 9999;
                    break;
                }
            }
        }
        break;
    case 3: {
        if (window != NULL)
            delete window;
        AocMenuWindow *created = (AocMenuWindow *)windowCreateStatusOperation(unk020C, 1);
        substep = 4;
        window = created;
        aocLoadingTaskStart(job, 1);
        break;
    }
    case 4: {
        RequestParameters polled = ((WindowOperation *)window)->getEvent();
        event = polled;
        if (strIsEmpty(&event) != 0) {
            jobFlagsWorkStop(job);
            if (aoc->recordCount != 0) {
                listScrollerInitialize(job + 0x90, 3, aoc->recordCount, 0, 1, 1);
                asdDebugHookPtrInt(&selection, 1);
                selection.active = 1;
                panel.initialize(&selection);
                panel.state |= 0x1000;
                s32 limit = rangeGetMinimumLimit(job + 0x90);
                messageIdListSetRange(job + 0xad, 0x2f, 0x88, limit);
                touchRows.soundEnabled = 1;
                touchRows.movedByPress = 0;
                aocMenuSetButtonHelp(job, 2, 1);
                aocMenuChangeStep(this, 6);
            } else {
                aocMenuChangeStep(this, 11);
            }
        } else if (byteIsAtLeast100(&event) != 0) {
            jobFlagsWorkStop(job);
            request = event;
            substep = 9999;
        }
        break;
    }
    case 9999:
        FUN_00476e58(job, 5, 3);
        break;
    }
}

} /* extern "C" */
