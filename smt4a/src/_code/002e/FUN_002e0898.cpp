#include "common.h"

extern "C" {

typedef struct Task {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ u32 first;
    /* 0x5C */ u32 second;
} Task;
Task *jobGetWork(void);

/* Stores the two values in the job's work area at 0x58 and 0x5C. */
void FUN_002e0898(u32 unused, u32 first, u32 second)
{
    Task *task;

    task = jobGetWork();
    task->first = first;
    task->second = second;
}

} /* extern "C" */
