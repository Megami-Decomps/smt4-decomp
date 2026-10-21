/* NON_MATCHING: retail emits 'movs r5, r0'; compiler emits 'mov r5, r0' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Context {
    u8 pad[0x101];
    u8 mode;
    u8 gap;
    s8 callbackOffset;
};
Context **FUN_002e2a98();
s16 FUN_002e3cb8(u16 *output,const u16 *input,u32 value) {
    Context *context=*FUN_002e2a98();
    if(context->mode==1) return (*(s16 (**)(u16 *,const u16 *,u32))((u8 *)context+context->callbackOffset+0x103))(output,input,value);
    if(input && *input) {
        *output=*input;
        return 1;
    }
    return -1;
}
}
