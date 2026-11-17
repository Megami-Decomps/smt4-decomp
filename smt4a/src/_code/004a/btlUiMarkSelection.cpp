#include "battle/BtlUiGlobal.h"

extern "C" {
void uiSceneMarkSelection(void *section);

/* Opens the battle UI's section. */
void btlUiMarkSelection()
{
    uiSceneMarkSelection(&g_btlUi.ui->objC);
}
}
