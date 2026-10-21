#include "common.h"

struct BattleUiOwner {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ void *screen;
};

struct BattleUiScreen {
    /* 0x000 */ u8 unk000[0x28C4];
    /* 0x28C4 */ u8 section;
};

extern "C" {
extern BattleUiOwner g_btlUi;
void uiSceneMarkSelection(void *section);

/* Opens the battle UI's section. */
void FUN_004ac02c()
{
    uiSceneMarkSelection(&((BattleUiScreen *)g_btlUi.screen)->section);
}
}
