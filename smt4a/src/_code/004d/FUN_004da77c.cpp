#include "common.h"

extern "C" {

/* Return 1 when `level` falls in level band `band`: 0 = any, 1 = below 10, 2-9 = each band of ten, 10 = 90 and up. */
s32 FUN_004da77c(u32 unused, s32 level, u32 band)
{
    switch (band) {
    case 0:
        return 1;
    case 1:
        if (level <= 9) {
            return 1;
        }
        break;
    case 2:
        if (level >= 10 && level <= 19) {
            return 1;
        }
        break;
    case 3:
        if (level >= 20 && level <= 29) {
            return 1;
        }
        break;
    case 4:
        if (level >= 30 && level <= 39) {
            return 1;
        }
        break;
    case 5:
        if (level >= 40 && level <= 49) {
            return 1;
        }
        break;
    case 6:
        if (level >= 50 && level <= 59) {
            return 1;
        }
        break;
    case 7:
        if (level >= 60 && level <= 69) {
            return 1;
        }
        break;
    case 8:
        if (level >= 70 && level <= 79) {
            return 1;
        }
        break;
    case 9:
        if (level >= 80 && level <= 89) {
            return 1;
        }
        break;
    case 10:
        if (level >= 90) {
            return 1;
        }
        break;
    }
    return 0;
}

} /* extern "C" */
