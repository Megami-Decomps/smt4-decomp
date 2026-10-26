#include "common.h"
#include "code/Code0025_Smt4.h"

extern "C" {

int cecMaintainMessageBox(u32 object);

typedef struct CecProcess {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u32 object;
} CecProcess;

extern CecProcess *g_cecProcess; /* 0x43de68 */

void FUN_002597c0(void)
{
    if (g_cecProcess != NULL) {
        cecMaintainMessageBox(g_cecProcess->object);
    }
}

} /* extern "C" */
