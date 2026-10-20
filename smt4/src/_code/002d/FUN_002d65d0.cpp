#include "common.h"

extern "C" {

extern int jobIsValid(void);
extern void *jobGetWork(int slot);
extern int bustupCutAnimGetSlot(int index);

typedef struct JobWork {
    /* 0x00 */ u8 unk00[0x8C];
    /* 0x8C */ u8 unk8C;
} JobWork;

/* Clears the 0x8C flag of the cut animation jobs in slots 1-3. */
void FUN_002d65d0(void)
{
    int slot;
    int index = 1;
    JobWork *work;

    do {
        slot = bustupCutAnimGetSlot(index);
        if ((slot != -1) && (jobIsValid() != 0)) {
            work = (JobWork *)jobGetWork(slot);
            work->unk8C = 0;
        }
        index = index + 1;
    } while (index < 4);
}

} /* extern "C" */
