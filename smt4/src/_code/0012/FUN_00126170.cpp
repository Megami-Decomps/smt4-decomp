#include "common.h"

extern "C" {

typedef struct JobWork {
    /* 0x00 */ u8 unk00[0x8C];
    /* 0x8C */ u8 unk8C;
} JobWork;

JobWork *jobGetWork(void);

void FUN_00126170(u32 handle, u8 value)
{
    JobWork *work = jobGetWork();

    work->unk8C = value;
}

} /* extern "C" */
