#include "code/Code0023.h"
#include "addon/aocMain.h"
/* NON_MATCHING: retail inlines the panel's Obj4221a4::initialize (the base initialize, the three table-58
 * touch regions and `ready = 1`) where this unit calls it: the two were one translation unit (56 lines off
 * with that definition in this file, 91 without). The rest is the touch-call argument scheduling
 * Obj4221a4::initialize itself still misses, the `panel.state` base and the step-6 change sharing its tail. */
#include "classes/AocMenu.h"
#include "classes/Obj422594.h"
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
void jobStopAndClearFlags(u32 *job);
void aocLoadingTaskStart(u32 *job, s32 mode);
void aocMenuSetButtonHelp(u32 *job, s32 a, s32 b);
s32 buttonHelpStateIsNot3(void);
void ifTouchRegionClearAll(u32 *regions);
void releaseEntriesA(u32 *entries); // declcheck: local (the shared declaration in code/Code0023_Smt4.h does not compile here: argument of type "u32 *" is incompatible with parameter of type "Obj *")
void FUN_00233e70(u32 *job, s32 a, s32 b);
void listScrollerInitialize(u32 *range, s32 a, s32 entry, s32 b, s32 c, s32 d);
s32 rangeLimitMin(u32 *range);
void messageIdListInit(u32 *entries, u32 group, u32 id, s32 value);

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
            ifTouchRegionClearAll(job + 0xba);
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
                jobStopAndClearFlags(job);
                switch (event.kind) {
                case 0x67:
                    aocMenuChangeStep(this, 3);
                    break;
                case 0x66: {
                    RequestParameters copy = event;
                    FUN_00234124(this, &copy);
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
            jobStopAndClearFlags(job);
            if (aoc->recordCount != 0) {
                listScrollerInitialize(job + 0x90, 3, aoc->recordCount, 0, 1, 1);
                asdDebugHookPtrInt(&selection, 1);
                selection.active = 1;
                panel.initialize(&selection);
                panel.state |= 0x1000;
                s32 limit = rangeLimitMin(job + 0x90);
                messageIdListInit(job + 0xad, 0x3a, 0x88, limit);
                touchRows.soundEnabled = 1;
                touchRows.movedByPress = 0;
                aocMenuSetButtonHelp(job, 2, 1);
                aocMenuChangeStep(this, 6);
            } else {
                aocMenuChangeStep(this, 11);
            }
        } else if (byteIsAtLeast100(&event) != 0) {
            jobStopAndClearFlags(job);
            request = event;
            substep = 9999;
        }
        break;
    }
    case 9999:
        FUN_00233e70(job, 5, 3);
        break;
    }
}

} /* extern "C" */
