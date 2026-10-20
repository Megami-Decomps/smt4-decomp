#include "common.h"

extern "C" {

s32 resourceLookupWithFallback(u32 handle, s32 key);
s32 FUN_004bb308(u32 handle);

typedef struct CecProcess {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 handle;
} CecProcess;
extern CecProcess *g_cecProcess;

/* Looks `key` up through the CEC process's handle when there is a process, a key and a valid handle; returns whether it did. */
u32 FUN_002c0b10(s32 key)
{
    CecProcess *process;
    s32 valid;
    u32 done;

    process = g_cecProcess;
    done = 0;
    if ((g_cecProcess != NULL && key != 0) && (valid = FUN_004bb308(g_cecProcess->handle), valid != 0)) {
        resourceLookupWithFallback(process->handle, key);
        done = 1;
    }
    return done;
}

} /* extern "C" */
