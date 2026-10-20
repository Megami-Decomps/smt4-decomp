#include "common.h"

extern "C" {

typedef struct ScriptHolderReset {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 state;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ void *buf0C;
    /* 0x10 */ void *buf10;
    /* 0x14 */ u32 proc14;
} ScriptHolderReset;

extern void asdMemFree(void *ptr);
extern void scrScriptProcessDestroy(u32 process);

/* Resets the holder to state 0x10, freeing its two buffers and its script process. */
void scriptHolderReset(ScriptHolderReset *holder)
{
    holder->state = 0x10;
    holder->unk00 = 0;
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
}

} /* extern "C" */
