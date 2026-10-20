#include "common.h"

extern "C" {

/* Maps a request id (1..8) to its code; 0 and unknown ids map to 2. */
u32 requestIdToCode(u32 id)
{
    switch (id) {
    case 1:
        return 3;
    case 2:
        return 4;
    case 3:
        return 5;
    case 4:
        return 6;
    case 5:
        return 7;
    case 6:
        return 8;
    case 7:
        return 9;
    case 8:
        return 10;
    default:
        return 2;
    }
}

} /* extern "C" */
