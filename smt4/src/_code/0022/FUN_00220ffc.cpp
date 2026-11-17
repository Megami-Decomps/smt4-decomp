#include "cec/CecProcessGlobal.h"
#include "shard/W6_W6Match2_EntrySequence.h"

extern "C" {

int FUN_002e0dac(Obj420a1c *messageBox);


void FUN_00220ffc(void)
{
    if (g_cecProcess != NULL) {
        FUN_002e0dac(g_cecProcess->messageBox);
    }
}

} /* extern "C" */
