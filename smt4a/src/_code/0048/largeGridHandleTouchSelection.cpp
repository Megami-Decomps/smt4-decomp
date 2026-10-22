/* NON_MATCHING: event notification returns directly rather than branching through the shared exit; -O2 candidate. */
#include "shard/Shard0031.h"

struct LargeTouchGrid {
    u8 unk000[0x10];
    s32 column, row;
    u8 unk018[0x11];
    u8 locked;
    u8 unk02a[0x16e];
    FlaggedEntry grid; // 0x198
    FlaggedEntry buttons; // 0x1fc
    u8 buttonMode; // 0x260
    u8 unk261[0x1d7];
    s16 touches[145]; // 0x438
};
extern "C" {
s32 ifTouchGetSelectionMode();
s32 ifTouchGetSelectedRegion();
s32 ifTouchIsInitialSelection(s32);
s32 flaggedEntryGetValueB(FlaggedEntry *);
s32 flaggedEntryGetValueA(FlaggedEntry *);
void flaggedEntrySetValueB(FlaggedEntry *, s32);
void flaggedEntrySetValueA(FlaggedEntry *, s32);
void eventQueueAddUniqueIfValid(u32);

s32 largeGridHandleTouchSelection(LargeTouchGrid *work)
{
    bool handled = false;
    s32 type = ifTouchGetSelectionMode();
    if (type != 1 && type != 2 && type != 6)
        return 0;
    s32 touch = ifTouchGetSelectedRegion();
    for (s32 i = 3; i < 138; ++i) {
        if (work->touches[i] == touch && touch > 0) {
            s32 cell = i - 3;
            work->buttonMode = 0;
            s32 previousRow = work->row;
            s32 previousColumn = work->column;
            flaggedEntrySetValueB(&work->grid, cell % 15);
            flaggedEntrySetValueA(&work->grid, cell / 15);
            work->column = flaggedEntryGetValueB(&work->grid);
            work->row = flaggedEntryGetValueA(&work->grid);
            handled = true;
            if (work->column != previousColumn || work->row != previousRow)
                eventQueueAddUniqueIfValid(0x100020d);
            break;
        }
    }
    for (s32 i = 139; i < 145; ++i) {
        if (work->touches[i] == touch) {
            s32 button = i - 139;
            s32 previousButton = flaggedEntryGetValueB(&work->buttons);
            flaggedEntryGetValueA(&work->buttons);
            s16 previousRow = flaggedEntryGetValueA(&work->grid);
            if (!work->locked) {
                work->buttonMode = 1;
                flaggedEntrySetValueA(&work->grid, 6);
                flaggedEntrySetValueB(&work->buttons, button);
                work->column = flaggedEntryGetValueB(&work->grid);
                work->row = flaggedEntryGetValueA(&work->grid);
            }
            if (type == 2) {
                if (flaggedEntryGetValueB(&work->buttons) == previousButton &&
                    flaggedEntryGetValueA(&work->grid) == previousRow)
                    return type;
            } else if (type == 6) {
                return type;
            } else if (!ifTouchIsInitialSelection(touch)) {
                return type;
            }
            eventQueueAddUniqueIfValid(0x100020d);
            return type;
        }
    }
    return handled ? type : 0;
}
}
