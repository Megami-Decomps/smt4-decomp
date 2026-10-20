#include "common.h"

extern "C" {

typedef struct CecProcess {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u32 handle;
} CecProcess;

extern CecProcess *g_cecProcess;

extern u32 FUN_003bbb98(u32 handle, s32 arg);

/* Forwards `arg` to FUN_003bbb98 with the CEC process handle; 0 when there is no process or no argument. */
u32 cecProcessForward(s32 arg)
{
    u32 result = 0;

    if (g_cecProcess != NULL && arg != 0) {
        result = FUN_003bbb98(g_cecProcess->handle, arg);
    }
    return result;
}

}
