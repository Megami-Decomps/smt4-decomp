#include "common.h"

extern "C" {

int FUN_0034291c(u32 value);
int FUN_00349214(u32 value);

typedef struct JobWork {
    /* 0x0 */ u32 unk0;
    /* 0x4 */ u32 unk4;
    /* 0x8 */ u8 mode;
} JobWork;

extern JobWork *jobGetWork(void);

u32 FUN_002f4aec(void)
{
    JobWork *work = jobGetWork();
    u8 mode = work->mode;

    if (mode != 0) {
        if (mode != 1) {
            if (mode == 2) {
                FUN_00349214(work->unk4);
            }
        } else {
            FUN_0034291c(work->unk0);
        }
    }
    return 0;
}

} /* extern "C" */
