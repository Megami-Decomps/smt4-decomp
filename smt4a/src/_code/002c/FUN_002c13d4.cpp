#include "common.h"
extern "C" {
extern struct Work {
    u8 pad[20];
    u32 state;
    u16 selection;
    u8 gap[0x297];
    u8 pending;
    u8 gap2[14];
    u32 first,second;
} *g_menuState;
void FUN_002c13d4(u16 selection,u32 first,u32 second) {
    g_menuState->state=6;
    g_menuState->selection=selection;
    g_menuState->first=first;
    g_menuState->second=second;
    g_menuState->pending=0;
}
}
