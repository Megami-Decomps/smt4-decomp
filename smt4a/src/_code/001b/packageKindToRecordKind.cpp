#include "common.h"
#include "addon/aocMain.h"

extern "C" {

// Map a kind id to its counterpart id, -1 when it has none.
s32 packageKindToRecordKind(s32 kind)
{
    switch (kind) {
    case 0:
        return 9;
    case 1:
        return 14;
    case 2:
        return 13;
    case 6:
        return 17;
    case 15:
        return 22;
    case 16:
        return 20;
    case 22:
        return 10;
    case 23:
        return 15;
    case 25:
        return 58;
    case 52:
        return 53;
    default:
        return -1;
    }
}

} /* extern "C" */
