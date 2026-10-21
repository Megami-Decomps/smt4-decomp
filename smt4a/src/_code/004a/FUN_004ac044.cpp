#include "common.h"
struct BattleUiScreen {
    u8 unk0000[0x28C4]; u8 section;
    u8 unk28C5[0x4BDB]; u32 menuArgument;
};
struct BattleUiOwner { u8 unk00[0x10]; BattleUiScreen *screen; };
extern "C" {
extern BattleUiOwner g_btlUi;
void menu32EnterState27(void *section);
/* Sets the battle menu argument and enters state 27. */
void FUN_004ac044() {
    g_btlUi.screen->menuArgument = 20;
    menu32EnterState27(&g_btlUi.screen->section);
}
}
