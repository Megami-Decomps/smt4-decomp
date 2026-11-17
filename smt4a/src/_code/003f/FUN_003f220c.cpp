#include "battle/btlUI.h"
#include "common.h"
#include "battle/BtlUiGlobal.h"

extern "C" {

void sysPlayVoice(u32 id);
void FUN_004a99bc(BtlUiA *arg, u16 id, s32 amount);


void FUN_003f220c(void *unused, u16 id, s32 amount)
{
    FUN_004a99bc(g_btlUiBlock, id, amount);
    sysPlayVoice(0x100026A);
}

} /* extern "C" */
