#include "battle/BtlUiGlobal.h"

extern "C" {
void uiSceneSetSelection(void *section, s32 state);

/* Resets the battle UI's section state. */
void btlUiSectionReset()
{
    uiSceneSetSelection(&g_btlUi.ui->objC, -1);
}
}
