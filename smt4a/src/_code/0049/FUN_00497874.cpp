/* NON_MATCHING: selected-state predicate layout and list/indicator register allocation differ. */
#include "shard/Shard0049.h"
#include "util/FUN_002a482c.h"

namespace {
struct EquipmentListIndicator;
struct EquipmentListIndicatorTable {
    void (*unk00)();
    void (*unk04)();
    void (*unk08)();
    void (*unk0C)();
    void (*draw)(EquipmentListIndicator *, u32 color);
};
struct EquipmentListIndicator {
    const EquipmentListIndicatorTable *vtable;
};
}
extern "C" {
void FUN_0049339c(const AsdTextureRegion *region, u32 image, s32 x, s32 y, u32 color);
void FUN_0049368c(const AsdTextureRegion *region, u32 image, s32 x, s32 y, u32 color, u32 flags);
void FUN_00494574(EquipmentMenuState *work, s32 page);
s32 rangeGetMinimumLimit(EquipmentMenuCursor *cursor);
s32 FUN_0031d174(EquipmentMenuCursor *cursor);
s32 flaggedValueHolderGetTotal(FlaggedValueHolder *holder);
void FUN_00494d68(EquipmentMenuState *work, s32 row, s32 selected, const EquipmentMenuItem *item);
void size40Set(void *indicator, u32 offset, u32 selection);

void FUN_00497874(EquipmentMenuState *work, u32 background)
{
    u32 color = work->detail.color;
    switch (work->page) {
    case 0: background = 0; break;
    case 1: case 2: background = 1; break;
    case 3: case 4: case 5: background = 2; break;
    case 6: background = 11; break;
    case 7: background = 3; break;
    case 8: background = 4; break;
    }
    FUN_0049339c(&work->detail.region, background, 0, 0, color);
    FUN_0049368c(&work->detail.region, 100, 0, 0, color, 1);
    FUN_00494574(work, work->page);
    u32 state = work->transition.state;
    bool highlight = (state == 7 || state == 11) || (state == 8 || state == 12) ||
                     (state == 9 || state == 13) || (state == 17 || state == 18);
    EquipmentMenuCursor *cursor = &work->cursors[work->page];
    EquipmentMenuItem *items = work->pages[work->page].items;
    s32 top = FUN_002a482c(cursor);
    s32 visible = rangeGetMinimumLimit(cursor);
    for (s32 row = 0; row < visible; ++row) {
        if (!highlight || FUN_0031d174(cursor) != row)
            FUN_00494d68(work, row + 1, 0, &items[top + row]);
    }
    if (highlight && cursor->range.count > 0) {
        s32 selected = flaggedValueHolderGetTotal(&cursor->holder);
        const EquipmentMenuItem *item = &items[selected];
        s32 row = FUN_0031d174(cursor);
        FUN_00494d68(work, row + 1, 1, item);
    }
    u32 selected = FUN_0031d174(cursor);
    u32 offset = FUN_002a482c(cursor);
    size40Set(work->scroll.indicator, offset, selected);
    EquipmentListIndicator *indicator = static_cast<EquipmentListIndicator *>(work->scroll.indicator);
    indicator->vtable->draw(indicator, color);
}
}
