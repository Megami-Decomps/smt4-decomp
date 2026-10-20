#include "common.h"

extern "C" {

int FUN_002e1a00(void);

typedef struct CecProcess {
    /* 0x0 */ u8 unk0[1];
} CecProcess;

extern CecProcess *g_cecProcess; /* 0x43de68 */

void FUN_002e1b20(void)
{
    if (g_cecProcess != NULL) {
        FUN_002e1a00();
        return;
    }
}

} /* extern "C" */
