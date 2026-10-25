#include "common.h"
#include "shard/JobWork.h"

extern "C" {

int asdMdlManagerMarkDestroy(u32 handle);
extern int scrGetCommandFrame(void);
extern u32 scrGetArg(u32 index);
extern int jobIsValid(u32 job);

typedef struct StopAndWaitWork {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 state;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u8 unk10[8];
    /* 0x18 */ u32 handle;
} StopAndWaitWork;


u32 scrComm_Job_StopAndWait(void)
{
    u32 job = scrGetArg(0);
    StopAndWaitWork *work;

    if (scrGetCommandFrame() != 0) {
        if (jobIsValid(job) == 0) {
            return 1;
        }
    } else {
        if (jobIsValid(job) == 0) {
            return 1;
        }
        work = (StopAndWaitWork *)jobGetWork(job);
        if (work->handle != 0) {
            asdMdlManagerMarkDestroy(work->handle);
        }
        work->unk0C = 0;
        work->state = 3;
    }
    return 0;
}

} /* extern "C" */
