#include "common.h"

extern "C" {

void FUN_0040afcc(u32 owner);
s32 jobStop(u32 job, s32 flag);
s32 jobIsValid(u32 job);
extern u32 DAT_0056fcc0;

typedef struct Task {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ u32 job;
} Task;
Task *jobGetWork(void);

typedef struct Object Object;
typedef struct ObjectVtbl {
    /* 0x00 */ void *unk00;
    /* 0x04 */ void (*destroy)(Object *object);
} ObjectVtbl;
struct Object {
    /* 0x00 */ const ObjectVtbl *vtbl;
};

typedef struct Global57aa00 {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Object *object;
} Global57aa00;
extern Global57aa00 DAT_0057aa00;

/* Stops the task's job if it is valid, runs FUN_0040afcc and destroys the global object at 0x57AA08. */
void FUN_002df6f0(void)
{
    Task *task;
    s32 valid;

    task = jobGetWork();
    valid = jobIsValid(task->job);
    if (valid != 0) {
        jobStop(task->job, 0);
    }
    FUN_0040afcc(DAT_0056fcc0);
    if (DAT_0057aa00.object != NULL) {
        DAT_0057aa00.object->vtbl->destroy(DAT_0057aa00.object);
        DAT_0057aa00.object = NULL;
    }
}

} /* extern "C" */
