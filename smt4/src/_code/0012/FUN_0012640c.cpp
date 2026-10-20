#include "common.h"

extern "C" {

typedef struct JobWork {
    /* 0x00 */ u8 unk00[0x94];
    /* 0x94 */ u8 unk94;
} JobWork;

JobWork *jobGetWork(void);

void FUN_0012640c(u32 handle, u8 value)
{
    JobWork *work = jobGetWork();

    work->unk94 = value;
}

} /* extern "C" */
