#include "battle/BtlUiGlobal.h"

extern "C" {

void uiSceneSetSelection(void *scene, s32 selection);

/* Sets the selection of the battle UI's scene state. */
void FUN_004aba6c(void *self, s32 selection)
{
    uiSceneSetSelection(&g_btlUi.ui->objC, selection);
}

} /* extern "C" */
