#include "common.h"

extern "C" {

extern u32 scrGetArg(u32 index);
extern int jobIsValid(u32 job);

typedef struct JobWork {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ int value;
    /* 0x14 */ u8 unk14[0x4C];
    /* 0x60 */ int result;
} JobWork;

extern JobWork *jobGetWork(u32 job);

u32 scrJobStoreNegatedQuotient(void)
{
    u32 job = scrGetArg(0);
    u32 divisor = scrGetArg(1);
    JobWork *work;

    if (jobIsValid(job) != 0) {
        work = jobGetWork(job);
        work->result = -(work->value / (int)divisor);
    }
    return 1;
}

} /* extern "C" */
