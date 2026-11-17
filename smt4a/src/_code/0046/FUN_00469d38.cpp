#include "common.h"
#include "quest_center/QuestRecordA.h"

extern "C" {

typedef struct StepWork {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 step;
    /* 0x0C */ s32 counter;
} StepWork;

void eventQueueAddUnique(u32 event);
void frameTexInitActive(void);
void frameTexRequestFade(s32 a);
void *rosterGetLeaderId(void);
s32 FUN_001bd118(void);
void qcMainSetMode(s32 mode);
void FUN_00270c58(u16 id);
void campButtonHelpRelease(void);

/* Steps a timed sequence: queues event 0x1000222 at frame 7, waits out a short delay, then hands over to the quest record once mode 6 is reached. */
void FUN_00469d38(StepWork *work)
{
    void *source;

    switch (work->step) {
    case 0:
        work->counter++;
        if (work->counter == 7) {
            eventQueueAddUnique(0x1000222);
            frameTexInitActive();
        }
        if (work->counter == 8) {
            work->step++;
            work->counter = 0;
        }
        break;
    case 1:
        if (work->counter == 0) {
            frameTexRequestFade(1);
        }
        if (++work->counter > 3) {
            work->counter++;
            work->step++;
        }
        break;
    case 2:
        source = rosterGetLeaderId();
        if (source != NULL && FUN_001bd118() == 6) {
            qcMainSetMode(1);
            FUN_00270c58(dataTable1bOr1cGetRecord(reinterpret_cast<u32>(source))->event.package);
            campButtonHelpRelease();
        }
        break;
    }
}

} /* extern "C" */
