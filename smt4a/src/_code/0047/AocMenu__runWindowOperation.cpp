/* NON_MATCHING: twin of the IV FUN_0038ebd8 - retail unpacks the pending event with an ldm/stm copy into a second 20-byte temp, keeps the state constants in r6/r7/r8 and orders the switch tests as a compare ladder (frame 72 bytes here 52); the state machine, calls and stored fields are the same. */
#include "classes/AocMenu.h"
#include "classes/Obj422594.h"
#include "test/BustupViewer.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

/* What the window operation reports (five words; the first byte is the result code). */
struct InputEvent {
    union {
        u32 code;
        u8 kind;
    };
    u32 data[4];
};

/* A window operation object: slot 1 releases it, slot 3 hands out its pending event. */
class WindowOperation {
public:
    virtual void slot0();
    virtual void release();
    virtual void slot2();
    virtual InputEvent getEvent();
};

namespace {

/* The art-of-contents record: only the word at +0x67c is read. */
struct AocBlock {
    /* 0x000 */ u8 unk000[0x67c];
    /* 0x67c */ s32 entry;
};

}

extern "C" {
extern AocBlock *g_aocMain;
void timeInitializeActiveState(InputEvent *event);
s32 isEmptyString(InputEvent *event);
s32 byteIsAtLeast100(InputEvent *event);
void jobFlagsWorkStop(u32 *job);
void windowCreateStatusOperation(void *operation, s32 mode);
void FUN_0047bcdc(u32 *job, s32 mode);
void FUN_00477d10(u32 *job, s32 a, s32 b);
void FUN_0047bc90(u32 *job, InputEvent *event);
void releaseEntriesB(u32 *regions);
void releaseEntriesA(u32 *entries);
void FUN_00476e58(u32 *job, s32 a, s32 b);
void FUN_004cfeb0(u32 *range, s32 a, s32 entry, s32 b, s32 c, s32 d);
void touchRegisterFirstRegion(Obj422594 *object, s32 x, s32 y, s32 width, s32 height);
void touchRegisterSecondRegion(Obj422594 *object, s32 x, s32 y, s32 width, s32 height);
void FUN_004d091c(Obj422594 *object, s32 x, s32 y, s32 width, s32 height);
s32 rangeGetMinimumLimit(u32 *range);
void FUN_004d05c4(u32 *entries, u32 group, u32 id, s32 value);

/* Runs the job's window-operation state machine: starts the operation, waits for its event, and
   either completes (event 0x66/0x67 or an empty event) or stores the event and parks in state 9999. */
void AocMenu::runWindowOperation()
{
    u32 * job = reinterpret_cast<u32 *>(this);
    InputEvent event;
    timeInitializeActiveState(&event);
    WindowOperation *operation = reinterpret_cast<WindowOperation *>(job[0x82]);
    switch (job[2]) {
    case 0:
        FUN_00477d10(job, 0xffffffff, 0);
        job[2] = 1;
        return;
    case 1:
        if (FUN_002e19f8() != 0) {
            releaseEntriesB(job + 0xba);
            releaseEntriesA(job + 0xad);
            FUN_0047bcdc(job, 0);
            windowCreateStatusOperation(job + 0x83, 0);
            job[2] = 2;
            job[0x82] = reinterpret_cast<u32>(job + 0x83);
        }
        return;
    case 2:
        if ((job[0] & 0x200) != 0) {
            event = operation->getEvent();
            if (isEmptyString(&event) != 0) {
                job[2] = 3;
            } else if (byteIsAtLeast100(&event) != 0) {
                jobFlagsWorkStop(job);
                if (event.kind == 0x66) {
                    FUN_0047bc90(job, &event);
                    return;
                }
                if (event.kind != 0x67) {
                    job[2] = 9999;
                    job[0x84] = event.code;
                    job[0x85] = event.data[0];
                    job[0x86] = event.data[1];
                    job[0x87] = event.data[2];
                    job[0x88] = event.data[3];
                    return;
                }
                WindowOperation *current = reinterpret_cast<WindowOperation *>(job[0x82]);
                job[1] = 3;
                job[2] = 0;
                if (current != NULL) {
                    current->release();
                    job[0x82] = 0;
                }
            }
        }
        return;
    case 3:
        if (operation != NULL) {
            operation->release();
        }
        windowCreateStatusOperation(job + 0x83, 1);
        job[2] = 4;
        job[0x82] = reinterpret_cast<u32>(job + 0x83);
        FUN_0047bcdc(job, 1);
        return;
    case 4:
        event = operation->getEvent();
        if (isEmptyString(&event) != 0) {
            jobFlagsWorkStop(job);
            WindowOperation *current;
            if (g_aocMain->entry != 0) {
                FUN_004cfeb0(job + 0x90, 3, g_aocMain->entry, 0, 1, 1);
                Obj422594 *object = reinterpret_cast<Obj422594 *>(job + 0xba);
                reinterpret_cast<u8 *>(job)[0x24d] = 1;
                object->initialize(job + 0x90);
                TextureTableEntryIV *record = asdTMTexTableEntryAt(0x2f, 0x4f);
                touchRegisterFirstRegion(object, record->x, record->y, record->placement->width, record->placement->height);
                record = asdTMTexTableEntryAt(0x2f, 0x50);
                touchRegisterSecondRegion(object, record->x, record->y, record->placement->width, record->placement->height);
                record = asdTMTexTableEntryAt(0x2f, 0x4e);
                FUN_004d091c(object, record->x, record->y, record->placement->width, record->placement->height);
                reinterpret_cast<u8 *>(job)[0x34c] = 1;
                reinterpret_cast<u16 *>(job)[0xbb * 2] = reinterpret_cast<u16 *>(job)[0xbb * 2] | 0x1000;
                s32 limit = rangeGetMinimumLimit(job + 0x90);
                FUN_004d05c4(job + 0xad, 0x2f, 0x88, limit);
                reinterpret_cast<u8 *>(job)[0x2c4] = 1;
                reinterpret_cast<u8 *>(job)[0x2e6] = 0;
                FUN_00477d10(job, 2, 1);
                current = reinterpret_cast<WindowOperation *>(job[0x82]);
                job[1] = 6;
                job[2] = 0;
            } else {
                current = reinterpret_cast<WindowOperation *>(job[0x82]);
                job[1] = 0xb;
                job[2] = 0;
            }
            if (current != NULL) {
                current->release();
                job[0x82] = 0;
            }
            return;
        }
        if (byteIsAtLeast100(&event) != 0) {
            jobFlagsWorkStop(job);
            job[2] = 9999;
            job[0x84] = event.code;
            job[0x85] = event.data[0];
            job[0x86] = event.data[1];
            job[0x87] = event.data[2];
            job[0x88] = event.data[3];
        }
        return;
    case 9999:
        FUN_00476e58(job, 5, 3);
        return;
    }
}

} /* extern "C" */
