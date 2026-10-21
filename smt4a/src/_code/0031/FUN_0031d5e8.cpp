/* NON_MATCHING: retail emits 'mov r1, r0'; compiler emits 'mov r1, r0' at the first differing instruction. */
#include "common.h"
extern "C" {
extern struct {
    u32 reserved;
    void *work;
}
g_messageMain;
u32 FUN_002ba85c();
void FUN_00203da4(void *,u32,u32,u32,u32,u32,u32);
void FUN_0031d5e8(u32 value) {
    u32 current=FUN_002ba85c();
    FUN_00203da4(g_messageMain.work,current,value,6,0x1A,1,0);
}
}
