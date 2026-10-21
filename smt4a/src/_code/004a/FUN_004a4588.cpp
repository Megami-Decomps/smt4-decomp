/* NON_MATCHING: constructor preserves mode and result in reversed registers. */
#include "common.h"
struct MenuState { const void *vtable; u8 unk004[2140]; u8 mode; };
extern "C" {
extern u8 DAT_0055c8a4[];
MenuState *FUN_004a82cc(MenuState *menu);
void FUN_004a133c(MenuState *menu);
/* Initializes the menu's mode after constructing its base. */
MenuState *FUN_004a4588(MenuState *menu,u32 mode) { menu=FUN_004a82cc(menu);menu->vtable=DAT_0055c8a4;menu->mode=mode;FUN_004a133c(menu);return menu; }
}
