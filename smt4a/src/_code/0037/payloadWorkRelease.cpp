#include "shard/Shard0037.h"

extern "C" {

typedef struct PayloadWork {
    /* 0x00 */ u32 first;
    /* 0x04 */ u32 second;
    /* 0x08 */ u8 kind;
} PayloadWork;

extern PayloadWork *jobGetWork(u32 job);
extern void FUN_00418960(u32 payload);
extern void FUN_00408c3c(u32 payload);

/* Releases the job's payload according to its kind (1: first word, 2: second word). */
u32 payloadWorkRelease(u32 job)
{
    PayloadWork *work = jobGetWork(job);

    if (work->kind != 0) {
        if (work->kind != 1) {
            if (work->kind == 2) {
                FUN_00418960(work->second);
            }
        } else {
            FUN_00408c3c(work->first);
        }
    }
    return 0;
}

} /* extern "C" */
