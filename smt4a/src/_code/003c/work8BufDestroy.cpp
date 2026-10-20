#include "shard/Shard003C.h"

extern "C" {

typedef struct Work8Buf {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ void *buffer;
} Work8Buf;

extern void FUN_001386e8(s32 value);
extern void FUN_00137ea0(s32 value);
extern void FUN_00138cf8(s32 value);
extern Work8Buf *jobGetWork(u32 job);
extern void asdMemFree(void *ptr);

/* Destroys the job's work area after running the three FUN_001386e8-style cleanups. */
void work8BufDestroy(u32 job)
{
    Work8Buf *work;

    FUN_001386e8(1);
    FUN_00137ea0(1);
    FUN_00138cf8(1);
    work = jobGetWork(job);
    if (work->buffer != NULL) {
        asdMemFree(work->buffer);
    }
    asdMemFree(work);
}

} /* extern "C" */
