#include "common.h"
#include "shard/JobWork.h"

extern "C" {

extern u32 scrGetArg(u32 index);
extern int jobIsValid(u32 job);

typedef struct QuotientJobWork {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ int value;
    /* 0x14 */ u8 unk14[0x4C];
    /* 0x60 */ int result;
} QuotientJobWork;


u32 scrJobStoreNegatedQuotient(void)
{
    u32 job = scrGetArg(0);
    u32 divisor = scrGetArg(1);
    QuotientJobWork *work;

    if (jobIsValid(job) != 0) {
        work = (QuotientJobWork *)jobGetWork(job);
        work->result = -(work->value / (int)divisor);
    }
    return 1;
}

} /* extern "C" */
