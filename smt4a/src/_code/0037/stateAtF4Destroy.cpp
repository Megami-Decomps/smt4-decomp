#include "shard/Shard0032.h"

extern "C" {

extern StateAtF4 *DAT_0057f118;
extern void *FUN_001801a4(void);
extern void rt_memcpy_w(void *dst, const void *src, u32 size);
extern void asdMemFree(void *ptr);
extern void FUN_00237210(u32 handle);
extern void scrScriptProcessDestroy(u32 process);
extern void FUN_003b5fc8(u32 *p);
extern void jobStop(u32 job, u16 arg);

/* Tears down the global state: saves its record into the player, frees its buffers and job. */
void stateAtF4Destroy(void)
{
    StateAtF4 *state = DAT_0057f118;

    rt_memcpy_w(FUN_001801a4(), state->unk16C, 0xE);
    asdMemFree(state->buf50);
    asdMemFree(state->buf54);
    asdMemFree(state->unk58);
    FUN_00237210(state->unk5C);
    scrScriptProcessDestroy(state->scriptProcess);
    FUN_003b5fc8(state->unk0C);
    jobStop(state->job, 0);
    asdMemFree(state);
    DAT_0057f118 = NULL;
}

} /* extern "C" */
