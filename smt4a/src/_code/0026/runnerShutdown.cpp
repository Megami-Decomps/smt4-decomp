#include "common.h"

extern "C" {

typedef struct ChildVtbl002681b0 {
    /* 0x00 */ void *unk00;
    /* 0x04 */ void (*release)(void *self);
    /* 0x08 */ void *unk08[2];
    /* 0x10 */ void (*stop)(void *self);
} ChildVtbl002681b0;

typedef struct Child002681b0 {
    /* 0x00 */ ChildVtbl002681b0 *vtbl;
} Child002681b0;

typedef struct Runner002681b0 {
    /* 0x00 */ u32 job;
    /* 0x04 */ u8 running;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ Child002681b0 *child;
} Runner002681b0;

void jobStop(u32 job, s32 flags);
void asdOperatorDelete(void);
void ownerUpdateChild(Runner002681b0 *runner);

extern Runner002681b0 *DAT_00588e2c; /* 0x588e2c */

/* Shuts the runner down once ownerUpdateChild has updated it: stops and releases its child, stops its job and frees it. Returns 0 while it is not running, -1 once shut down. */
u32 runnerShutdown(void)
{
    Runner002681b0 *runner = DAT_00588e2c;
    Runner002681b0 *current;

    if (runner != NULL) {
        ownerUpdateChild(runner);
        if (runner->running == 0) {
            return 0;
        }
        current = DAT_00588e2c;
        if (current != NULL) {
            if (current->child != NULL) {
                current->child->vtbl->stop(current->child);
                if (current->child != NULL) {
                    current->child->vtbl->release(current->child);
                }
                current->child = NULL;
            }
            current->running = 1;
            jobStop(current->job, 0);
            if (DAT_00588e2c != NULL) {
                asdOperatorDelete();
                DAT_00588e2c = NULL;
            }
        }
    }
    return 0xffffffff;
}

} /* extern "C" */
