/* NON_MATCHING: retail emits 'push {r0, r1, r2, r3, r4, r5, r6, lr}'; compiler emits 'push {r4, r5, r6, lr}' at the first differing instruction. */
#include "common.h"
extern "C" {
s32 FUN_004413e4(s32 *,u32,u32,u32,u32,u32,u32);
s32 FUN_0043e808(s32 *,u32,u32,u32,u32,u32,u32);
s32 FUN_00300c20();
s32 FUN_00300d58(u32 first,u32 second,u32 size,u32 fourth,u32 fifth) {
    s32 result;
    s32 status=size<8193?FUN_0043e808(&result,first,second,size,fourth,fifth,8):FUN_004413e4(&result,first,second,size,fourth,fifth,8);
    return status<0?FUN_00300c20():result;
}
}
