#include "common.h"

extern "C" {

/* Maps id 3 and 5-10 to their result (9, 11-16); every other id gives 0. */
u32 FUN_002463e8(u32 id)
{
    u32 result = 0;

    switch (id) {
    case 5:
        result = 11;
        break;
    case 6:
        result = 12;
        break;
    case 7:
        result = 13;
        break;
    case 8:
        result = 14;
        break;
    case 9:
        result = 15;
        break;
    case 10:
        result = 16;
        break;
    case 3:
        result = 9;
        break;
    }
    return result;
}

}
