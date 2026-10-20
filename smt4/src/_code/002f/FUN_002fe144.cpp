#include "common.h"

extern "C" {

int asdWorkAreaReset(void);
int asdModelSlotRelease(int arg);
int asdMdlManagerDestroy(int handle);
int asdMemFree(void *ptr);

typedef struct JobWork {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ int model;
    /* 0x1C */ u8 active;
} JobWork;

extern JobWork *jobGetWork(void);

void FUN_002fe144(void)
{
    JobWork *work = jobGetWork();

    if (work->active != 0) {
        asdModelSlotRelease(0);
        work->active = 0;
    }
    if (work->model != 0) {
        asdMdlManagerDestroy(work->model);
        work->model = 0;
    }
    asdWorkAreaReset();
    asdMemFree(work);
}

} /* extern "C" */
