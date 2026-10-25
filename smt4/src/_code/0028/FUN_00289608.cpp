/* NON_MATCHING: built hoists the load of bufferA above the first stores; retail keeps the stores first. */
#include "common.h"
#include "util/CalleeContracts.h"

extern "C" {

/* Task state: state word, phase, a flag byte and three owned resources. */
typedef struct {
    u32 unk00;          /* 0x00 */
    u32 phase;          /* 0x04 */
    u8 flag;            /* 0x08 */
    u8 unk09[3];
    void *bufferA;      /* 0x0c */
    void *bufferB;      /* 0x10 */
    void *resource;     /* 0x14 */
} Task;

int buttonHelpCreate(void);
int FUN_002a03d8(int index, int value);
int scrScriptProcessDestroy(void *resource);
int asdMemFree(void *buffer);

/* Resets the task: frees its buffers and resource, then sets phase 12 and updates indices 0/1 whose state is 3. */
void FUN_00289608(Task *task, u8 flag)
{
    task->flag = flag;
    task->phase = 11;
    task->unk00 = 0;
    if (task->bufferA != NULL) {
        asdMemFree(task->bufferA);
        task->bufferA = NULL;
    }
    if (task->bufferB != NULL) {
        asdMemFree(task->bufferB);
        task->bufferB = NULL;
    }
    if (task->resource != NULL) {
        scrScriptProcessDestroy(task->resource);
        task->resource = NULL;
    }
    if (task->flag != 0) {
        buttonHelpCreate();
    }
    task->phase = 12;
    if (FUN_002c2a04(0) == 3) {
        FUN_002a03d8(0, 5);
    }
    if (FUN_002c2a04(1) == 3) {
        FUN_002a03d8(1, 5);
    }
}

} /* extern "C" */
