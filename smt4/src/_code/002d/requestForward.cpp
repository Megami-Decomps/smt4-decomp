#include "common.h"

extern "C" {

extern void FUN_002ae9ec(s32 a, s32 b, s32 kind, u32 arg1, u32 arg2, u32 arg3);

/* Maps a request id (1..10) to its code and forwards it; id 0 does nothing. */
void requestForward(s32 id, u32 arg1, u32 arg2, u32 arg3)
{
    s32 kind;

    if (id == 0) {
        return;
    }
    kind = 0;
    switch (id) {
    case 1:
        kind = 0xF;
        break;
    case 4:
        kind = 0x12;
        break;
    case 5:
        kind = 0xC;
        break;
    case 6:
        kind = 0xB;
        break;
    case 7:
        kind = 0xA;
        break;
    case 8:
        kind = 0xD;
        break;
    case 9:
        kind = 0xE;
        break;
    case 10:
        kind = 0x14;
        break;
    case 2:
        kind = 0x10;
        break;
    case 3:
        kind = 0x23;
        break;
    }
    FUN_002ae9ec(2, 0x13, kind, arg1, arg2, arg3);
}

} /* extern "C" */
