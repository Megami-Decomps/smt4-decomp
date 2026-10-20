#include "common.h"

extern "C" {

int jobStop(u32 job, int mode);
extern int jobIsValid(u32 job);

typedef struct Obj {
    /* 0x0000 */ u32 flags;
    /* 0x0004 */ u8 unk0004[0x1790];
    /* 0x1794 */ u32 job;
} Obj;

void FUN_00233d78(Obj *obj)
{
    if (jobIsValid(obj->job) != 0) {
        obj->flags = obj->flags & 0xfffffcff;
        jobStop(obj->job, 0);
    }
}

} /* extern "C" */
