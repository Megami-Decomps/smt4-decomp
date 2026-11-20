#include "shard/Shard0032.h"
#include "gamedata/GamePlayerData.h"
#include "script/scrScriptProcess.h"

extern "C" {

extern StateAtF4 *g_campCecEdit;
extern void __aeabi_memcpy4(void *dst, const void *src, u32 size);
extern void asdMemFree(void *ptr);
extern void asdMemFreeSlot(u32 handle);
extern void resSetFree(u32 *p);
extern void jobStop(u32 job, u16 arg);

/* Tears down the global state: saves its record into the player, frees its buffers and job. */
void stateAtF4Destroy(void)
{
    StateAtF4 *state = g_campCecEdit;

    __aeabi_memcpy4(gameGetPlayerData(), state->unk16C, 0xE);
    asdMemFree(state->buf50);
    asdMemFree(state->buf54);
    asdMemFree(state->messages);
    asdMemFreeSlot(state->unk5C);
    scrScriptProcessDestroy(state->scriptProcess);
    resSetFree(state->infoPanel);
    jobStop(state->job, 0);
    asdMemFree(state);
    g_campCecEdit = NULL;
}

} /* extern "C" */
