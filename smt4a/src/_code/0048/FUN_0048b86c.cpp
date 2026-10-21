/* NON_MATCHING: compiler uses literal offsets rather than retail split pointer additions. */
#include "common.h"
struct MenuState {u8 unk0000[16];u32 flags;u8 unk0014[31612];u8 first;u8 second;};
extern "C" {
void FUN_0048c09c(MenuState *menu);
/* Resets the menu and activates both terminal flags. */
void FUN_0048b86c(MenuState *menu){FUN_0048c09c(menu);menu->flags&=~16u;menu->first=1;menu->second=1;}
}
