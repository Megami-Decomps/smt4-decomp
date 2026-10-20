#include "common.h"

extern "C" {

s32 jobFind(u32 job);

typedef struct Task {
    /* 0x00 */ u32 job;
} Task;
extern Task *DAT_00588e2c;

/* Returns whether the task at 0x588E2C exists and its job is found. */
u8 FUN_002ef9f0(void)
{
    s32 found;

    if (DAT_00588e2c == NULL) {
        return 0;
    }
    found = jobFind(DAT_00588e2c->job);
    return found != 0;
}

} /* extern "C" */
