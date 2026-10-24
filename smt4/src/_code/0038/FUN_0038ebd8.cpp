/* NON_MATCHING: retail unpacks the pending event with an ldm/stm copy into a second 20-byte temp, keeps the state constants in r6/r7/r8 and orders the switch tests as a compare ladder (frame 72 bytes here 52); the state machine, calls and stored fields are the same. */
#include "classes/Obj422594.h"

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
/* A region record of the layout table (position at +8, size through the pointer at +0xc). */
struct RegionRecord {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0a */ s16 y;
    /* 0x0c */ s16 *size;
};

/* The art-of-contents record: only the word at +0x67c is read. */
struct AocBlock {
    /* 0x000 */ u8 unk000[0x67c];
    /* 0x67c */ s32 entry;
};

}

extern "C" {
extern AocBlock *g_aocMain;
void timeInitializeActiveState(InputEvent *event);
s32 strIsEmpty(InputEvent *event);
s32 byteIsAtLeast100(InputEvent *event);
void jobStopAndClearFlags(u32 *job);
void FUN_00233fcc(void *operation, s32 mode);
void FUN_00233db8(u32 *job, s32 mode);
void FUN_0023392c(u32 *job, s32 a, s32 b);
void FUN_00234124(u32 *job, InputEvent *event);
s32 FUN_0026b564(void);
void ifTouchRegionClearAll(u32 *regions);
void FUN_00233818(u32 *entries);
void FUN_00233e70(u32 *job, s32 a, s32 b);
void FUN_00233730(u32 *range, s32 a, s32 entry, s32 b, s32 c, s32 d);
RegionRecord *FUN_002bf4f8(u32 group, u32 id);
void touchRegisterFirstRegion(Obj422594 *object, s32 x, s32 y, s32 width, s32 height);
void touchRegisterSecondRegion(Obj422594 *object, s32 x, s32 y, s32 width, s32 height);
void FUN_002346ac(Obj422594 *object, s32 x, s32 y, s32 width, s32 height);
s32 rangeLimitMin(u32 *range);
void FUN_00233670(u32 *entries, u32 group, u32 id, s32 value);

/* Runs the job's window-operation state machine: starts the operation, waits for its event, and
   either completes (event 0x66/0x67 or an empty event) or stores the event and parks in state 9999. */
void FUN_0038ebd8(u32 *job)
{
    InputEvent event;
    timeInitializeActiveState(&event);
    AocBlock *aoc = g_aocMain;
    WindowOperation *operation = reinterpret_cast<WindowOperation *>(job[0x82]);
    switch (job[2]) {
    case 0:
        FUN_0023392c(job, 0xffffffff, 0);
        job[2] = 1;
        return;
    case 1:
        if (FUN_0026b564() != 0) {
            ifTouchRegionClearAll(job + 0xba);
            FUN_00233818(job + 0xad);
            FUN_00233db8(job, 0);
            FUN_00233fcc(job + 0x83, 0);
            job[2] = 2;
            job[0x82] = reinterpret_cast<u32>(job + 0x83);
        }
        return;
    case 2:
        if ((job[0] & 0x200) != 0) {
            event = operation->getEvent();
            if (strIsEmpty(&event) != 0) {
                job[2] = 3;
            } else if (byteIsAtLeast100(&event) != 0) {
                jobStopAndClearFlags(job);
                if (event.kind == 0x66) {
                    FUN_00234124(job, &event);
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
        FUN_00233fcc(job + 0x83, 1);
        job[2] = 4;
        job[0x82] = reinterpret_cast<u32>(job + 0x83);
        FUN_00233db8(job, 1);
        return;
    case 4:
        event = operation->getEvent();
        if (strIsEmpty(&event) != 0) {
            jobStopAndClearFlags(job);
            WindowOperation *current;
            if (aoc->entry != 0) {
                FUN_00233730(job + 0x90, 3, aoc->entry, 0, 1, 1);
                Obj422594 *object = reinterpret_cast<Obj422594 *>(job + 0xba);
                reinterpret_cast<u8 *>(job)[0x24d] = 1;
                object->initialize(job + 0x90);
                RegionRecord *record = FUN_002bf4f8(0x3a, 0x4f);
                touchRegisterFirstRegion(object, record->x, record->y, record->size[0], record->size[1]);
                record = FUN_002bf4f8(0x3a, 0x50);
                touchRegisterSecondRegion(object, record->x, record->y, record->size[0], record->size[1]);
                record = FUN_002bf4f8(0x3a, 0x4e);
                FUN_002346ac(object, record->x, record->y, record->size[0], record->size[1]);
                reinterpret_cast<u8 *>(job)[0x34c] = 1;
                reinterpret_cast<u16 *>(job)[0xbb * 2] = reinterpret_cast<u16 *>(job)[0xbb * 2] | 0x1000;
                s32 limit = rangeLimitMin(job + 0x90);
                FUN_00233670(job + 0xad, 0x3a, 0x88, limit);
                reinterpret_cast<u8 *>(job)[0x2c4] = 1;
                reinterpret_cast<u8 *>(job)[0x2e6] = 0;
                FUN_0023392c(job, 2, 1);
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
            jobStopAndClearFlags(job);
            job[2] = 9999;
            job[0x84] = event.code;
            job[0x85] = event.data[0];
            job[0x86] = event.data[1];
            job[0x87] = event.data[2];
            job[0x88] = event.data[3];
        }
        return;
    case 9999:
        FUN_00233e70(job, 5, 3);
        return;
    }
}

} /* extern "C" */
