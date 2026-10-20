#include "common.h"

extern "C" {

int FUN_0017ffa8(s32 arg0, s32 arg1, u32 id, u32 a, u32 b, u32 c);

/* Maps the kind (1..13) to its id and forwards it with the extra arguments; kind 0 does nothing. */
void FUN_003481c4(s32 kind, u32 a, u32 b, u32 c)
{
    u32 id;

    if (kind == 0) {
        return;
    }
    id = 0;
    switch (kind) {
    case 1:
        id = 15;
        break;
    case 4:
        id = 18;
        break;
    case 5:
        id = 12;
        break;
    case 6:
        id = 11;
        break;
    case 7:
        id = 10;
        break;
    case 8:
        id = 13;
        break;
    case 9:
        id = 14;
        break;
    case 10:
        id = 20;
        break;
    case 2:
        id = 16;
        break;
    case 3:
        id = 35;
        break;
    case 11:
        id = 44;
        break;
    case 12:
        id = 42;
        break;
    case 13:
        id = 40;
        break;
    }
    FUN_0017ffa8(2, 11, id, a, b, c);
}

} /* extern "C" */
