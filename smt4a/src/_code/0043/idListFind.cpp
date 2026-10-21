#include "shard/W6_W6Match3_IdList.h"

extern "C" {
extern IdList DAT_005c1fdc[0x576];

IdList* idListFind(u32 id)
{
    s32 low = 0;
    s32 high = 0x575;
    s32 middle;
    for (;;) {
        middle = low + (high - low) / 2;
        u32 key = DAT_005c1fdc[middle].id;
        if (key > id) {
            high = middle - 1;
        }
        if (key < id) {
            low = middle + 1;
        }
        if (key == id) {
            break;
        }
        if (high < low) {
            return NULL;
        }
    }
    return &DAT_005c1fdc[middle];
}

} /* extern "C" */
