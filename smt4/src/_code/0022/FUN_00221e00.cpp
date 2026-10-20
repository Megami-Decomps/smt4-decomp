#include "common.h"

extern "C" {

typedef struct JobWork {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s32 unk0C;
} JobWork;

extern JobWork *jobGetWork(void);

u8 FUN_00221e00(void)
{
    JobWork *work = jobGetWork();

    return work->unk0C == 0;
}

} /* extern "C" */
