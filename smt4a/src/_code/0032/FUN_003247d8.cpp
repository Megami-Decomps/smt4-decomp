#include "common.h"

extern "C" {

typedef struct Task Task;

typedef struct TaskVtable {
    /* 0x00 */ void (*unk00)(Task *task);
    /* 0x04 */ void (*release)(Task *task);
} TaskVtable;

struct Task {
    /* 0x0 */ TaskVtable *vtable;
    /* 0x4 */ u32 job;
};

extern Task *DAT_0057f658;

s32 jobIsValid(u32 job);

/* Returns 1 while the global task's job is valid; once it is not, releases and clears the task. */
u32 FUN_003247d8(void)
{
    if (DAT_0057f658 != NULL) {
        if (jobIsValid(DAT_0057f658->job) != 0) {
            return 1;
        }
        if (DAT_0057f658 != NULL) {
            DAT_0057f658->vtable->release(DAT_0057f658);
            DAT_0057f658 = NULL;
        }
        return 0;
    }
    return 0;
}

} /* extern "C" */
