#include "shard/Shard0032.h"

extern "C" {

extern StateAtF4 *g_campCecEdit;
extern void *gameGetPlayerData(void);
extern void rt_memcpy_w(void *dst, const void *src, u32 size);
extern void asdMemFree(void *ptr);
extern void asdMemFreeSlot(u32 handle);
extern void scrScriptProcessDestroy(u32 process);
extern void resSetFree(u32 *p);
extern void jobStop(u32 job, u16 arg);

/* Tears down the global state: saves its record into the player, frees its buffers and job. */
void stateAtF4Destroy(void)
{
    StateAtF4 *state = g_campCecEdit;

    rt_memcpy_w(gameGetPlayerData(), state->unk16C, 0xE);
    asdMemFree(state->buf50);
    asdMemFree(state->buf54);
    asdMemFree(state->unk58);
    asdMemFreeSlot(state->unk5C);
    scrScriptProcessDestroy(state->scriptProcess);
    resSetFree(state->unk0C);
    jobStop(state->job, 0);
    asdMemFree(state);
    g_campCecEdit = NULL;
}

} /* extern "C" */
