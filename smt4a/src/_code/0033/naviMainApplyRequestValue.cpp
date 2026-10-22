/* NON_MATCHING: retail uses `ldr r2, [r2]` where armcc emits `ldr r0, [r0]`. */
#include "shard/NaviMain.h"

#include "common.h"

extern "C" {
extern NaviMainA *g_naviMain;

void FUN_0048d418(u32 *request, s32 value);

void naviMainApplyRequestValue(s32 value)
{
    FUN_0048d418(g_naviMain->request, value);
}

} /* extern "C" */
