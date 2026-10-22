/* NON_MATCHING: navigation loop is rotated instead of duplicated and top-row update scheduling differs; -O2 candidate. */
#include "common.h"

struct ContentGrid { u8 data[0x64]; };
struct ContentNavigation {
    u8 unk00[0x28];
    ContentGrid grid; // 0x28
    s32 topRow; // 0x8c
};
extern "C" {
s32 resourceRunOperationIfUnblocked(ContentGrid *);
s32 FUN_002a4894(ContentGrid *);
s32 objectApplyIfUnblocked(ContentGrid *);
s32 FUN_00228b04(ContentGrid *, u32);
s32 FUN_001517b4(u32, u32);
s32 flaggedEntryGetValueA(ContentGrid *);
void eventQueueAddUniqueIfValid(u32);
void FUN_002a48e0(ContentGrid *);

void contentListUpdateNavigation(ContentNavigation *screen)
{
    s32 previousRow = resourceRunOperationIfUnblocked(&screen->grid);
    if (FUN_00228b04(&screen->grid, 0)) {
        if (objectApplyIfUnblocked(&screen->grid) > 8) {
            resourceRunOperationIfUnblocked(&screen->grid);
            if (FUN_002a4894(&screen->grid) != 7 && FUN_002a4894(&screen->grid) != 0)
                eventQueueAddUniqueIfValid(0x100020d);
            while (resourceRunOperationIfUnblocked(&screen->grid) == previousRow &&
                   (resourceRunOperationIfUnblocked(&screen->grid) != 0 || FUN_002a4894(&screen->grid) != 0)) {
                s32 row = resourceRunOperationIfUnblocked(&screen->grid);
                s32 count = objectApplyIfUnblocked(&screen->grid);
                if (row == count - 8 && FUN_002a4894(&screen->grid) == 7)
                    break;
                FUN_00228b04(&screen->grid, 0);
            }
        }
        screen->topRow = resourceRunOperationIfUnblocked(&screen->grid);
    }
    if (FUN_001517b4(9, 0)) {
        if (resourceRunOperationIfUnblocked(&screen->grid) == 0)
            return;
        eventQueueAddUniqueIfValid(0x100020d);
        --screen->topRow;
        FUN_002a48e0(&screen->grid);
    }
    if (FUN_001517b4(10, 0) && objectApplyIfUnblocked(&screen->grid) >= 8) {
        s32 row = resourceRunOperationIfUnblocked(&screen->grid);
        s32 count = objectApplyIfUnblocked(&screen->grid);
        if (row != count - 8 &&
            (flaggedEntryGetValueA(&screen->grid) || objectApplyIfUnblocked(&screen->grid) >= 8)) {
            eventQueueAddUniqueIfValid(0x100020d);
            ++screen->topRow;
            FUN_002a48e0(&screen->grid);
        }
    }
}
}
