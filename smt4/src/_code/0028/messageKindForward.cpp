#include "common.h"
#include "ui/UiControl.h"

extern "C" {

void FUN_002ae9ec(s32 a, s32 b, u32 kind, u32 arg1, u32 arg2, u32 arg3);

/* Maps `category` (1..10) to the kind FUN_002ae9ec expects and forwards it with the three extra arguments; category 0 does nothing. */
void messageKindForward(s32 category, u32 arg1, u32 arg2, u32 arg3)
{
    u32 kind;

    if (category == 0) {
        return;
    }
    kind = 0;
    switch (category) {
    case 1:
        kind = 5;
        break;
    case 4:
        kind = 8;
        break;
    case 5:
        kind = 2;
        break;
    case 6:
        kind = 1;
        break;
    case 8:
        kind = 3;
        break;
    case 9:
        kind = 4;
        break;
    case 10:
        kind = 0x13;
        break;
    case 2:
        kind = 6;
        break;
    case 3:
        kind = 0x22;
        break;
    }
    FUN_002ae9ec(2, 0x13, kind, arg1, arg2, arg3);
}

} /* extern "C" */
