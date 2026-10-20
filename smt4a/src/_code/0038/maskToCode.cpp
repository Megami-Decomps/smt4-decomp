#include "shard/Shard0038.h"

extern "C" {

/* Maps a direction mask to its code (8: 2, 1: 3, 4: 4, 2: 5, 0x10: 6, else 9). */
u32 maskToCode(u32 mask)
{
    u32 code = 9;

    if ((mask & 8) != 0) {
        code = 2;
    } else if ((mask & 1) != 0) {
        code = 3;
    } else if ((mask & 4) != 0) {
        code = 4;
    } else if ((mask & 2) != 0) {
        code = 5;
    } else if ((mask & 0x10) != 0) {
        code = 6;
    }
    return code;
}

} /* extern "C" */
