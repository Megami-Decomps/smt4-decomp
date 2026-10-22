#include "battle/btlUI.h"

extern "C" {
extern BtlUiGlobalsA g_btlUi;
void menu32EnterState27(void *section);
/* Sets the battle menu argument and enters state 27. */
void FUN_004ac044() {
    g_btlUi.ui->state = 20;
    menu32EnterState27(&g_btlUi.ui->objC);
}
}
