#include "common.h"
struct MenuRequest {
    u8 unk00000[0x20634]; u8 active;
    u8 unk20635[0x13]; u32 first; u32 second;
};
/* Activates a menu request with two argument words. */
extern "C" void menuRequestActivate(MenuRequest *menu, u32 unused, u32 first, u32 second) {
    menu->active = 1;
    menu->first = first;
    menu->second = second;
}
