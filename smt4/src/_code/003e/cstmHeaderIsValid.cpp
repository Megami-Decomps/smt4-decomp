#include "common.h"

extern "C" {

/* Checks the "CSTM" magic and a size/version range. */
u32 cstmHeaderIsValid(u32 unused, int *header)
{
    u32 valid;

    if (*header != 0x4d545343) {
        valid = 0;
    } else {
        valid = 0;
        if (header[2] + 0xfe000000U < 0x10001) {
            valid = 1;
        }
    }
    return valid;
}

} /* extern "C" */
