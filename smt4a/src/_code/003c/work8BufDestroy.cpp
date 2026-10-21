#include "shard/Shard003C.h"

extern "C" {

typedef struct Work8Buf {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ void *buffer;
} Work8Buf;

extern void gameDataBlocksReleaseHold(s32 value);
extern void gameDataFlagsClearBits(s32 value);
extern void gameDataBlocksMaskClearBits(s32 value);
extern Work8Buf *jobGetWork(u32 job);
extern void asdMemFree(void *ptr);

/* Destroys the job's work area after running the three gameDataBlocksReleaseHold-style cleanups. */
void work8BufDestroy(u32 job)
{
    Work8Buf *work;

    gameDataBlocksReleaseHold(1);
    gameDataFlagsClearBits(1);
    gameDataBlocksMaskClearBits(1);
    work = jobGetWork(job);
    if (work->buffer != NULL) {
        asdMemFree(work->buffer);
    }
    asdMemFree(work);
}

} /* extern "C" */
