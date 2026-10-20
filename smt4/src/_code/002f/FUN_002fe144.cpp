#include "common.h"

extern "C" {

int FUN_002a4d14(void);
int FUN_002a72c0(int arg);
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
        FUN_002a72c0(0);
        work->active = 0;
    }
    if (work->model != 0) {
        asdMdlManagerDestroy(work->model);
        work->model = 0;
    }
    FUN_002a4d14();
    asdMemFree(work);
}

} /* extern "C" */
