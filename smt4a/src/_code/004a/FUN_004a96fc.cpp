#include "common.h"
struct BattleScreen {u8 unk0000[10436];u8 section;};struct BattleUi {u8 unk00[16];BattleScreen *screen;};
extern "C" {extern BattleUi g_btlUi;void FUN_00336aec(void*,u32,u32,u32,u32,u32);
/* Forwards the request to the battle screen's menu section. */
void FUN_004a96fc(u32 unused,u32 first,u32 second,u32 third,u32 fourth){BattleScreen *screen=g_btlUi.screen;FUN_00336aec(&screen->section,second,first,third,fourth,0);}}
