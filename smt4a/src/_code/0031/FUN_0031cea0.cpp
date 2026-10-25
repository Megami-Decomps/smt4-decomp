/* NON_MATCHING: the kind byte is now converted after the call as in retail (mov r4, r0 first); armcc still orders the zero register, the mode select and the stores differently (retail writes the mode with a writeback str). */
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
    FUN_00231464();
    u8 kind = (u8)input;
    DAT_0057f678->kind = kind;
    DAT_0057f678->pending = 0;
    DAT_0057f678->mode = kind == 2 ? 2 : 1;
    DAT_0057f678->count = 0;
}
}
