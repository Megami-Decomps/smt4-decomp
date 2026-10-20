#include "common.h"

extern "C" {

typedef struct JobWork {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ u32 unk3C;
} JobWork;

JobWork *jobGetWork(void);

u32 FUN_00126714(void)
{
    JobWork *work = jobGetWork();

    return work->unk3C;
}

} /* extern "C" */
