#include "common.h"

extern "C" {

struct CecProcess { u32 unk00; void *object; };
extern CecProcess *g_cecProcess;
s32 cecCardMessageBoxInit(void *object);

s32 cecProcessGetValue(void)
{
    CecProcess *process = g_cecProcess;
    s32 value = 0;

    if (process != NULL) {
        value = cecCardMessageBoxInit(process->object);
    }
    return value;
}

} /* extern "C" */
