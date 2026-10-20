#include "common.h"

extern "C" {

s32 jobStop(u32 job, s32 flag);
s32 jobIsValid(u32 job);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x54];
    /* 0x54 */ u32 job;
} Holder;

/* Stops the held job if it is valid. */
void holderStopJob2(Holder *object)
{
    s32 valid;

    valid = jobIsValid(object->job);
    if (valid != 0) {
        jobStop(object->job, 0);
        return;
    }
}

} /* extern "C" */
