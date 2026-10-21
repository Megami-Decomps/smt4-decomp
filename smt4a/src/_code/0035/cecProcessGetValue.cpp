/* NON_MATCHING: retail uses `ldr r1, [r0]` where armcc emits `ldr r0, [r0]`. */
#include "common.h"

extern "C" {

struct CecProcess { u32 unk00; void *object; };
extern CecProcess *g_cecProcess;
s32 FUN_004bb35c(void *object);

s32 cecProcessGetValue(void)
{
    CecProcess *process = g_cecProcess;
    return process != NULL ? FUN_004bb35c(process->object) : 0;
}

} /* extern "C" */
