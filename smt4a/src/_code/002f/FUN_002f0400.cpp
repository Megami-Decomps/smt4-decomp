#include "common.h"

extern "C" {

typedef struct ListenerTable {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ void *listener;
} ListenerTable;

extern ListenerTable g_listenerTable;

s32 FUN_0012350c(void *listener, u32 arg0, u32 arg1);

/* Forwards the arguments to the registered listener; returns 1 when there is none. */
s32 FUN_002f0400(u32 arg0, u32 arg1)
{
    void *listener = g_listenerTable.listener;

    if (listener == NULL) {
        return 1;
    }
    return FUN_0012350c(listener, arg0, arg1);
}

} /* extern "C" */
