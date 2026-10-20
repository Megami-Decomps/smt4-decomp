#include "common.h"

extern "C" {

void FUN_002e3328(void);
s32 jobStop(u32 job, s32 flag);

typedef struct Object Object;
typedef struct ObjectVtbl {
    /* 0x00 */ void *unk00;
    /* 0x04 */ void (*destroy)(Object *object);
    /* 0x08 */ void *unk08[2];
    /* 0x10 */ void (*stop)(Object *object);
} ObjectVtbl;
struct Object {
    /* 0x00 */ const ObjectVtbl *vtbl;
};

typedef struct Task {
    /* 0x00 */ u32 job;
    /* 0x04 */ u8 stopped;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ Object *object;
} Task;
extern Task *DAT_00588e2c;

/* Shuts down the global task: stops and destroys its object, stops its job and frees the task. */
void FUN_0020e6a0(void)
{
    Task *task;

    task = DAT_00588e2c;
    if (DAT_00588e2c != NULL) {
        if (DAT_00588e2c->object != NULL) {
            DAT_00588e2c->object->vtbl->stop(DAT_00588e2c->object);
            if (task->object != NULL) {
                task->object->vtbl->destroy(task->object);
            }
            task->object = NULL;
        }
        task->stopped = 1;
        jobStop(task->job, 0);
        if (DAT_00588e2c != NULL) {
            FUN_002e3328();
            DAT_00588e2c = NULL;
        }
    }
}

} /* extern "C" */
