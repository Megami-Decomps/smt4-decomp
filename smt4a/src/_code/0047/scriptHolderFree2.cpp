#include "shard/Shard0047.h"

extern "C" {

extern void asdMemFree(void *ptr);
extern void scrScriptProcessDestroy(u32 process);
extern void campButtonHelpRelease(void);

/* Frees the two buffers and the script process held by the object. */
void scriptHolderFree2(ScriptHolder *holder)
{
    if (holder->buf0C != NULL) {
        asdMemFree(holder->buf0C);
        holder->buf0C = NULL;
    }
    if (holder->buf10 != NULL) {
        asdMemFree(holder->buf10);
        holder->buf10 = NULL;
    }
    if (holder->proc14 != 0) {
        scrScriptProcessDestroy(holder->proc14);
        holder->proc14 = 0;
    }
    if (holder->unk08 != 0) {
        campButtonHelpRelease();
    }
}

} /* extern "C" */
