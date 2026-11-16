#include "shard/W6_W6Match2_OffsetPosition2D.h"
#include "code/Code0029.h"

struct ComparisonMenuPoint {
    f32 x, y;
};
struct ComparisonMenuAnchor {
    OffsetPosition2D position;
    u32 spriteGroup;
};
struct ComparisonMenuSelection {
    u8 unk00[8];
    s32 count;
    u8 unk0c[0x9c];
};
struct ComparisonMenuEntry {
    u32 unk00;
    s16 value;
    u8 unk06[0x1a];
};
struct ComparisonMenuScene {
    u8 unk000[0x14];
    s32 mode;
    u8 unk018[8];
    ComparisonMenuSelection selection;
    ComparisonMenuAnchor anchor;
    u8 unk0dc[0x4b8];
    u32 layer;
    u8 unk598[0x10];
    ComparisonMenuEntry entries[1]; // Trailing row storage, indexed by the selection state.
};

extern "C" {
void pairCopy(const ComparisonMenuAnchor *, ComparisonMenuPoint *);
void uiMenuAnchorGetOffset(const ComparisonMenuAnchor *, ComparisonMenuPoint *);
void uiRectDrawAtBottomRight(const ComparisonMenuAnchor *, u32, s32, s32, u32);
void FUN_00231bcc(const ComparisonMenuAnchor *, u32, s32, s32, u32, u32);
s32 rangeLimitMin(ComparisonMenuSelection *);
s32 flaggedValueHolderGetTotal(ComparisonMenuSelection *);
u32 flaggedEntryGetValueByState(ComparisonMenuSelection *);
void FUN_003a9df4(ComparisonMenuScene *, s32, u32, s32);
void FUN_0022d7b0(ComparisonMenuScene *, u32);

/* Whether the menu's anchor (position plus offset) has an x coordinate on screen, tested on the float's bits. */
static bool comparisonMenuOnScreen(const ComparisonMenuScene *scene)
{
    ComparisonMenuPoint offset, position;
    pairCopy(&scene->anchor, &position);
    uiMenuAnchorGetOffset(&scene->anchor, &offset);
    f32 x = position.x + offset.x;
    return reinterpret_cast<const s32 &>(x) < 0x43a00000 && reinterpret_cast<const u32 &>(x) < 0xc3a00000;
}

/* Draws the menu frame, then its visible rows (the selected one highlighted in mode 2). */
void scrollMenuDrawVisibleEntries(ComparisonMenuScene *scene)
{
    if (!comparisonMenuOnScreen(scene))
        return;

    u32 layer = scene->layer;
    uiRectDrawAtBottomRight(&scene->anchor, 1, 0, 0, layer);
    FUN_00231bcc(&scene->anchor, 0x47c, 0, 0, layer, 1);
    FUN_00231bcc(&scene->anchor, 0x47d, 0, 0, layer, 1);
    FUN_00231bcc(&scene->anchor, 0x47e, 0, 0, layer, 1);
    FUN_00231bcc(&scene->anchor, 0x47f, 0, 0, layer, 1);
    FUN_00231bcc(&scene->anchor, 0x480, 0, 0, layer, 1);
    FUN_00231bcc(&scene->anchor, 0x481, 0, 0, layer, 1);
    if (scene->selection.count == 0)
        return;

    s32 first = FUN_0029e924(&scene->selection);
    s32 visible = rangeLimitMin(&scene->selection);
    ComparisonMenuEntry *entries = scene->entries;
    s32 row;
    for (row = 0; row < visible; ++row) {
        if (scene->mode != 2 || flaggedEntryGetValueByState(&scene->selection) != row)
            FUN_003a9df4(scene, row, 0, entries[first + row].value);
    }
    if (scene->selection.count > 0 && scene->mode == 2) {
        s32 selected = flaggedValueHolderGetTotal(&scene->selection);
        s16 value = entries[selected].value;
        s32 selectedRow = flaggedEntryGetValueByState(&scene->selection);
        FUN_003a9df4(scene, selectedRow, 1, value);
    }
    FUN_0022d7b0(scene, layer);
}
}
