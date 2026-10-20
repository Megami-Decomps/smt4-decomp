#include "common.h"

extern "C" {

extern int jobIsValid(void);
extern void *jobGetWork(int slot);
extern int eventTexGetCurrentOrInvalid(void);

typedef struct JobWork {
    /* 0x00 */ u8 unk00[0x94];
    /* 0x94 */ u8 unk94;
} JobWork;

void FUN_002e20b4(void)
{
    int slot = eventTexGetCurrentOrInvalid();
    JobWork *work;

    if ((slot != -1) && (jobIsValid() != 0)) {
        work = (JobWork *)jobGetWork(slot);
        work->unk94 = 0;
    }
}

} /* extern "C" */
