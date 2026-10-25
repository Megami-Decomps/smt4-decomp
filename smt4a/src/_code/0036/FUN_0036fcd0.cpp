#include "common.h"
#include "shard/FUN_0036fcd0.h"

extern "C" {

/* Sound effect id for an object kind (1-8) and its variant. */
s32 FUN_0036fcd0(u32 kind, s32 variant)
{
    s32 id = 0;

    switch (kind) {
    case 1:
        id = 174;
        break;
    case 2:
        id = 175;
        break;
    case 3:
        id = 176;
        break;
    case 4:
        id = variant == 0 ? 178 : 185;
        break;
    case 5:
        if (variant == 0) {
            id = 177;
        } else {
            id = variant == 1 ? 191 : 192;
        }
        break;
    case 6:
    case 8:
        id = variant == 0 ? 179 : 186;
        break;
    case 7:
        id = 5;
        break;
    }
    return id;
}

} /* extern "C" */
