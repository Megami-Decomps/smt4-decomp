#include "common.h"

extern "C" {

struct CecProcess { u32 unk00; void *object; };
extern CecProcess *g_cecProcess;
s32 FUN_004bb35c(void *object);

s32 cecProcessGetValue(void)
{
    CecProcess *process = g_cecProcess;
    s32 value = 0;

    if (process != NULL) {
        value = FUN_004bb35c(process->object);
    }
    return value;
}

} /* extern "C" */
