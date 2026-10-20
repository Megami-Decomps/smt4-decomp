#include "common.h"

extern "C" {

int jobStop(u32 job, int mode);
extern int jobIsValid(u32 job);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ u32 job;
} Obj;

void jobStopIfValidB(Obj *obj)
{
    if (jobIsValid(obj->job) != 0) {
        jobStop(obj->job, 0);
    }
}

} /* extern "C" */
