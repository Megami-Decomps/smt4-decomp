#include "shard/Shard0038.h"

extern "C" {

typedef struct ModelWork {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ void *manager;
    /* 0x1C */ u8 active;
} ModelWork;

extern ModelWork *jobGetWork(u32 job);
extern void FUN_001f42b0(s32 value);
extern void asdMdlManagerDestroy(void *manager);
extern void FUN_001ad6d8(void);
extern void asdMemFree(void *ptr);

/* Destroys the job's work area. */
void modelWorkDestroy(u32 job)
{
    ModelWork *work = jobGetWork(job);

    if (work->active != 0) {
        FUN_001f42b0(0);
        work->active = 0;
    }
    if (work->manager != NULL) {
        asdMdlManagerDestroy(work->manager);
        work->manager = NULL;
    }
    FUN_001ad6d8();
    asdMemFree(work);
}

} /* extern "C" */
