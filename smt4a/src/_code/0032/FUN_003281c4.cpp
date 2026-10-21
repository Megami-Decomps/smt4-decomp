/* NON_MATCHING: retail emits 'ldr ip, [pc, #48]'; compiler emits 'push {r4, lr}' at the first differing instruction. */
#include "common.h"
extern "C" {
extern struct {
    u8 pad[0x68];
    u8 widget;
} *g_naviMain;
void FUN_00486328(void *,u32,u32,u32,u32,u32);
void FUN_003281c4(u32 first,u32 second,u32 third,u32 fourth) {
    if(g_naviMain) FUN_00486328(&g_naviMain->widget,first,1,second,third,fourth);
}
}
