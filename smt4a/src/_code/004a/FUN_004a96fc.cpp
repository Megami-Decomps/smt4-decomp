/* NON_MATCHING: stack argument copy uses strd rather than retail stm pair. */
#include "common.h"
struct BattleScreen {u8 unk0000[10436];u8 section;};struct BattleUi {u8 unk00[16];BattleScreen *screen;};
extern "C" {extern BattleUi g_btlUi;void FUN_00336aec(void*,u32,u32,u32,u32,u32);
/* Forwards the request to the battle screen's menu section. */
void FUN_004a96fc(u32 unused,u32 first,u32 second,u32 third,u32 fourth){FUN_00336aec(&g_btlUi.screen->section,second,first,third,fourth,0);}}
