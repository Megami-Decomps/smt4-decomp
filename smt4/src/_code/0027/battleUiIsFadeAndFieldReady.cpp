#include "battle/BtlUiGlobal.h"
extern "C" {
s32 playSceneIsFadeOutDone(void *scene);
s32 uiSpriteOperationIsComplete(void *field);
/* Report readiness only after scene fade-out and the field operation both finish. */
s32 battleUiIsFadeAndFieldReady(void) { BtlUi *ui=g_btlUi.ui; if (playSceneIsFadeOutDone(&ui->objA)!=0 && uiSpriteOperationIsComplete(&ui->objB)!=0) return 1; return 0; }
}
