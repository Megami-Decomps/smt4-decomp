#include "shard/NaviMain.h"

#include "common.h"

extern "C" {
extern NaviMainA *g_naviMain;

void FUN_0048d418(u32 *request, s32 value);

void naviMainApplyRequestValue(s32 value)
{
    NaviMainA *main = g_naviMain;
    FUN_0048d418(main->request, value);
}

} /* extern "C" */
