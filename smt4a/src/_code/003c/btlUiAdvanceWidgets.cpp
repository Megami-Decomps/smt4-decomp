#include "battle/btlUI.h"

extern "C" {

extern BtlUiA *g_btlUiBlock; /* 0x57a9c8 */

extern int FUN_004aaa4c(BtlUiA *ui);
extern int FUN_004abac8(BtlUiA *ui);
extern int FUN_004abb30(BtlUiA *ui);
extern int FUN_004aaf94(BtlUiA *ui);
extern int FUN_003aa068(BtlUiObjAA *obj);
extern int uiWorkEndState1(BtlUiObjAA *obj);
extern int FUN_0034efe0(BtlUiObjBA *obj);
extern int FUN_002b24dc(BtlUiObjBA *obj);

/* Advances the battle UI when all four readiness checks pass: updates the first widget, then the second, and reports 1. */
u32 btlUiAdvanceWidgets(void)
{
    if (FUN_004aaa4c(g_btlUiBlock) != 0 && FUN_004abac8(g_btlUiBlock) != 0 && FUN_004abb30(g_btlUiBlock) != 0) {
        if (FUN_004aaf94(g_btlUiBlock) != 0 && FUN_003aa068(&g_btlUiBlock->objA) != 0) {
            uiWorkEndState1(&g_btlUiBlock->objA);
        }
        if (FUN_0034efe0(&g_btlUiBlock->objB) != 0) {
            FUN_002b24dc(&g_btlUiBlock->objB);
        }
        return 1;
    }
    return 0;
}

} /* extern "C" */
