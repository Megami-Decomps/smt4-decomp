#include "common.h"

extern "C" {

/* Maps a kind id to its stored value (the valid ids map to themselves; unknown ids are ignored). */
void kindIdStore(u32 kind, u32 *out)
{
    switch (kind) {
    case 0:
        *out = 0;
        return;
    case 1:
        *out = 1;
        return;
    case 2:
        *out = 2;
        return;
    case 3:
        *out = 3;
        return;
    case 4:
        *out = 4;
        return;
    case 5:
        *out = 5;
        return;
    case 6:
        *out = 6;
        return;
    case 7:
        *out = 7;
        return;
    case 11:
        *out = 11;
        return;
    case 12:
        *out = 12;
        return;
    case 13:
        *out = 13;
        return;
    case 14:
        *out = 14;
        return;
    case 15:
        *out = 15;
        return;
    case 16:
        *out = 16;
        return;
    case 9:
        *out = 9;
        return;
    case 17:
        *out = 17;
        return;
    case 18:
        *out = 18;
        return;
    case 19:
        *out = 19;
        return;
    case 20:
        *out = 20;
        return;
    default:
        return;
    }
}

} /* extern "C" */
