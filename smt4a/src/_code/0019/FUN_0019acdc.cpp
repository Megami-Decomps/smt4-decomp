#include "common.h"

extern "C" {

/* Maps an id to its category number; id 0xba picks between two by the flag. */
s32 FUN_0019acdc(s32 id, s32 flag)
{
    s32 category = 0;

    switch (id) {
    case 5:
        category = 7;
        break;
    case 0xae:
        category = 1;
        break;
    case 0xaf:
        category = 2;
        break;
    case 0xb0:
        category = 3;
        break;
    case 0xb1:
        category = 5;
        break;
    case 0xb2:
        category = 4;
        break;
    case 0xb3:
        category = 6;
        break;
    case 0xb9:
        category = 4;
        break;
    case 0xba:
        if (flag != 0) {
            category = 8;
        } else {
            category = 6;
        }
        break;
    case 0xbf:
    case 0xc0:
        category = 5;
        break;
    }
    return category;
}

} /* extern "C" */
