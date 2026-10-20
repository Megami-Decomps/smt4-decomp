#include "shard/Shard0047.h"

extern "C" {

typedef struct ScriptHolderB {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 state;
    /* 0x08 */ u8 flag;
    /* 0x09 */ u8 unk09[3];
    /* 0x0C */ u32 buf0C;
    /* 0x10 */ u32 buf10;
    /* 0x14 */ u32 proc14;
} ScriptHolderB;

extern void asdMemFree(u32 ptr);
extern void scrScriptProcessDestroy(u32 process);
extern void FUN_00342010(void);

/* Resets the holder to state 0xC with the given flag, freeing its buffers and script process. */
void scriptHolderBReset(ScriptHolderB *holder, u8 flag)
{
    holder->flag = flag;
    holder->state = 0xC;
    holder->unk00 = 0;
    if (holder->buf0C != 0) {
        asdMemFree(holder->buf0C);
        holder->buf0C = 0;
    }
    if (holder->buf10 != 0) {
        asdMemFree(holder->buf10);
        holder->buf10 = 0;
    }
    if (holder->proc14 != 0) {
        scrScriptProcessDestroy(holder->proc14);
        holder->proc14 = 0;
    }
    if (holder->flag != 0) {
        FUN_00342010();
    }
}

} /* extern "C" */
