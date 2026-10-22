#include "battle/btlUI.h"
#include "common.h"

extern "C" {

void sysPlayVoice(u32 id);
void FUN_004a99bc(BtlUiA *arg);

extern BtlUiA *g_btlUiBlock;

void FUN_003f220c(void)
{
    FUN_004a99bc(g_btlUiBlock);
    sysPlayVoice(0x100026A);
}

} /* extern "C" */
