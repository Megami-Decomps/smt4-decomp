#include "battle/BtlUiGlobal.h"
/* The battle owner's screen data (only the count). */
struct ScreenData {u8 unk000[300];s32 count;};
extern "C" {
int uiSceneAreFlagsClear(void *section);
s32 btlUiScreenDataGetCount(ScreenData *data);
/* Empty battle screens are ready; otherwise query the embedded menu section. */
int FUN_004aa878(){BtlUiA *ui=g_btlUi.ui;if(btlUiScreenDataGetCount(reinterpret_cast<ScreenData *>(ui->owner))<=0)return 1;return uiSceneAreFlagsClear(&ui->objC);}
}
