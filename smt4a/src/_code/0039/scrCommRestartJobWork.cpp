#include "shard/Shard0039.h"

extern "C" {

typedef struct Work64 {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u8 unk14[0x50];
    /* 0x64 */ u32 unk64;
    /* 0x68 */ u32 unk68;
    /* 0x6C */ u32 unk6C;
} Work64;

extern u32 scrGetArg(s32 index);
extern s32 jobIsValid(u32 job);
extern Work64 *jobGetWork(u32 job);

/* Script command: restarts the job work area's counter with argument 1. */
u32 scrCommRestartJobWork(void)
{
    u32 job = scrGetArg(0);
    u32 value = scrGetArg(1);
    Work64 *work;

    if (jobIsValid(job) != 0) {
        work = jobGetWork(job);
        work->unk6C = work->unk10;
        work->unk64 = 0;
        work->unk68 = value;
    }
    return 1;
}

} /* extern "C" */
