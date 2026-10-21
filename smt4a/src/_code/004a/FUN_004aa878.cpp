/* NON_MATCHING: compiler removes retail preserved screen pointer and stack frame. */
#include "common.h"
struct ScreenData {u8 unk000[300];s32 count;};
struct BattleScreen {ScreenData *data;u8 unk0004[10432];u8 section;};
struct BattleUi {u8 unk00[16];BattleScreen *screen;};
extern "C" {
extern BattleUi g_btlUi;int uiSceneAreFlagsClear(void *section);
/* Empty battle screens are ready; otherwise query the embedded menu section. */
int FUN_004aa878(){BattleScreen *screen=g_btlUi.screen;if(screen->data->count<=0)return 1;return uiSceneAreFlagsClear(&screen->section);}
}
