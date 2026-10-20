#include "common.h"

extern "C" {

typedef struct Task {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 state;        /* 1 = finished */
    /* 0x11 */ u8 unk11[0xF];
    /* 0x20 */ u8 queue[4];
} Task;

int FUN_001af148(void *queue);
int FUN_004257e4(Task *task);

/* Pumps the task's queue until it reports finished. */
void FUN_004241a8(Task *task)
{
    for (;;) {
        if (task->state == 1) {
            break;
        }
        FUN_001af148(task->queue);
        FUN_004257e4(task);
    }
}

} /* extern "C" */
