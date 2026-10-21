#include "common.h"

// Selects a four-entry range beginning at 0, 55, 59, or 63.
extern "C" void FUN_002499fc(s32 kind, u32* first, u32* count)
{
    switch (kind) {
    case 1:
        *first = 0;
        *count = 4;
        break;
    case 2:
        *first = 55;
        *count = 4;
        break;
    case 3:
        *first = 59;
        *count = 4;
        break;
    case 4:
        *first = 63;
        *count = 4;
        break;
    default:
        *first = 0;
        *count = 4;
        break;
    }
}
