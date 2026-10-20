#include "common.h"

extern "C" {

/* Maps a request kind (0..15) to its id (0 for unknown kinds). */
u32 requestKindToId(u32 kind)
{
    u32 value = 0;

    switch (kind) {
    case 0:
        value = 1000;
        break;
    case 1:
        value = 1001;
        break;
    case 2:
        value = 1002;
        break;
    case 3:
        value = 1003;
        break;
    case 4:
        value = 1004;
        break;
    case 5:
        value = 1005;
        break;
    case 6:
        value = 1006;
        break;
    case 7:
        value = 1007;
        break;
    case 8:
        value = 1008;
        break;
    case 9:
        value = 1009;
        break;
    case 10:
        value = 1010;
        break;
    case 11:
        value = 1011;
        break;
    case 12:
        value = 1012;
        break;
    case 13:
        value = 1014;
        break;
    case 14:
        value = 1040;
        break;
    case 15:
        value = 1027;
        break;
    }
    return value;
}

} /* extern "C" */
