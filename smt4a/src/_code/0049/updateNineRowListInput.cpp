/* NON_MATCHING: compiler rotates the repeated-input loop and removes four branch/NOP rows; -O2 candidate. */
#include "shard/Shard0031.h"

struct NineRowListInput {
    u8 unk000[0x124];
    FlaggedEntry grid;
    s32 top;
};
extern "C" {
s32 FUN_002a4860(FlaggedEntry *);
s32 FUN_002a4894(FlaggedEntry *);
s32 objectApplyIfUnblocked(FlaggedEntry *);
u32 FUN_00228b04(FlaggedEntry *, u32);
u32 FUN_001517b4(u32, u32);
u32 flaggedEntryGetValueA(FlaggedEntry *);
void FUN_002a48e0(FlaggedEntry *, s32);
void eventQueueAddUniqueIfValid(u32);

void updateNineRowListInput(NineRowListInput *list)
{
    s32 previousTop = FUN_002a4860(&list->grid);
    if (FUN_00228b04(&list->grid, 0)) {
        if (objectApplyIfUnblocked(&list->grid) > 9) {
            FUN_002a4860(&list->grid);
            while (FUN_002a4860(&list->grid) == previousTop &&
                   (FUN_002a4860(&list->grid) != 0 || FUN_002a4894(&list->grid) != 0)) {
                s32 top = FUN_002a4860(&list->grid);
                s32 count = objectApplyIfUnblocked(&list->grid);
                if (top == count - 9 && FUN_002a4894(&list->grid) == 8)
                    break;
                FUN_00228b04(&list->grid, 0);
            }
        }
        list->top = FUN_002a4860(&list->grid);
    }
    if (list->top != previousTop)
        eventQueueAddUniqueIfValid(0x100020d);
    if (FUN_001517b4(9, 0)) {
        if (FUN_002a4860(&list->grid) == 0)
            return;
        eventQueueAddUniqueIfValid(0x100020d);
        FUN_002a48e0(&list->grid, --list->top);
    }
    if (FUN_001517b4(10, 0) && objectApplyIfUnblocked(&list->grid) >= 9) {
        s32 top = FUN_002a4860(&list->grid);
        s32 count = objectApplyIfUnblocked(&list->grid);
        if (top != count - 9 &&
            (flaggedEntryGetValueA(&list->grid) != 0 || objectApplyIfUnblocked(&list->grid) >= 9)) {
            eventQueueAddUniqueIfValid(0x100020d);
            FUN_002a48e0(&list->grid, ++list->top);
        }
    }
}
}
