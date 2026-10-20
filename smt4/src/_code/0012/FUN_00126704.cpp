#include "common.h"

extern "C" {

typedef struct JobWork {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 unk38;
} JobWork;

JobWork *jobGetWork(void);

u32 FUN_00126704(void)
{
    JobWork *work = jobGetWork();

    return work->unk38;
}

} /* extern "C" */
