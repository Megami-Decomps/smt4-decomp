#include "common.h"

extern "C" {

int FUN_002e0dac(u32 object);

typedef struct CecProcess {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u32 object;
} CecProcess;

extern CecProcess *g_cecProcess; /* 0x43de68 */

void FUN_00220ffc(void)
{
    if (g_cecProcess != NULL) {
        FUN_002e0dac(g_cecProcess->object);
    }
}

} /* extern "C" */
