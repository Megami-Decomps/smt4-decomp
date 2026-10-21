/* NON_MATCHING: compiler folds screen offsets and omits retail preserved register. */
#include "common.h"
struct ValuePair {u32 first,second;};
struct BattleScreen {
    /* 0x0 */ u8 unk0[29840];
    /* 0x7490 */ ValuePair first;
    /* 0x7498 */ ValuePair second;
    /* 0x74A0 */ u8 unk74A0[17];
    /* 0x74B1 */ u8 active;
};
struct BattleUi {u8 unk00[16];BattleScreen *screen;};
extern "C" {extern BattleUi g_btlUi;
/* Copies the battle section flag and both value pairs. */
void FUN_004ab80c(u32 unused,u8 *active,ValuePair *first,ValuePair *second){BattleScreen *screen=g_btlUi.screen;*active=screen->active;*first=screen->first;*second=screen->second;}}
