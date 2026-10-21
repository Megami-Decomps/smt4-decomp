/* NON_MATCHING: retail emits 'mov r4, r0'; compiler emits 'and r4, r0, #255' at the first differing instruction. */
#include "common.h"
extern "C" {
void FUN_00231464();
extern struct {
    u8 pad[8];
    u8 kind;
    u8 gap[3];
    u32 mode,count;
    u8 gap2[0x11];
    u8 pending;
} *DAT_0057f678;
void FUN_0031cea0(u32 input) {
    u8 kind=(u8)input;
    FUN_00231464();
    DAT_0057f678->kind=kind;
    DAT_0057f678->mode=kind==2?2:1;
    DAT_0057f678->pending=0;
    DAT_0057f678->count=0;
}
}
