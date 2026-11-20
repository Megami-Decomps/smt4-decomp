#include "common.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

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

typedef struct GlobalTask {
    /* 0x00 */ u32 job;
    /* 0x04 */ u8 stopped;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ Object *object;
} GlobalTask;
extern GlobalTask *g_saveLoadRunner;

/* Shuts down the global task: stops and destroys its object, stops its job and frees the task. */
void taskShutdownGlobal(void)
{
    GlobalTask *task;

    task = g_saveLoadRunner;
    if (g_saveLoadRunner != NULL) {
        if (g_saveLoadRunner->object != NULL) {
            g_saveLoadRunner->object->vtbl->stop(g_saveLoadRunner->object);
            if (task->object != NULL) {
                task->object->vtbl->destroy(task->object);
            }
            task->object = NULL;
        }
        task->stopped = 1;
        jobStop(task->job, 0);
        if (g_saveLoadRunner != NULL) {
            asdOperatorDelete(g_saveLoadRunner);
            g_saveLoadRunner = NULL;
        }
    }
}

} /* extern "C" */
