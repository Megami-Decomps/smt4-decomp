/* NON_MATCHING: depth-aware contents renderer restores native calls and row-table access; initial depth capture/copy still differs. */
#include "common.h"
#include "classes/Obj42247c.h"
#include <stddef.h>
#include "code/Code0029.h"

namespace {
struct SkillListRow {
    u32 unk00;
    s16 id;
    u8 unk06[0x1A];
};
struct SkillListRenderView {
    u8 unk00[0x14];
    s32 state;
    u8 unk18[8];
    struct {
        u8 unk00[8];
        s32 count;
        u8 unk0C[0x68];
    } cursor;
    u8 unk94[0x34];
    u8 render[0x4E0];
    SkillListRow rows[1];
};
typedef char SkillListRenderOffsets[offsetof(SkillListRenderView, cursor) == 0x20 &&
    offsetof(SkillListRenderView, render) == 0xC8 &&
    offsetof(SkillListRenderView, rows) == 0x5A8 && sizeof(SkillListRow) == 0x20 ? 1 : -1];
}
extern "C" {
void uiRectDrawAtBottomRight(void *render, s32 kind, s32 x, s32 y, s32 depth);
void FUN_00231bcc(void *render, s32 sprite, s32 x, s32 y, s32 depth, s32 flags);
s32 rangeLimitMin(void *cursor);
u32 flaggedEntryGetValueByState(void *cursor);
s32 flaggedValueHolderGetTotal(void *cursor);
void FUN_003abae8(SkillListRenderView *view, s32 row, s32 item, s32 selected, s32 depth);
void FUN_00288e68(s32 id);
void buttonHelpShowSkillDetails(void);
void FUN_0022d7b0(SkillListRenderView *view, s32 depth);

// Draw visible rows at the requested depth, lifting the selected row by one layer.
static void drawSkillListContents(SkillListRenderView *view, s32 depth)
{
    if (view->cursor.count == 0) {
        return;
    }
    s32 first = FUN_0029e924(&view->cursor);
    s32 count = rangeLimitMin(&view->cursor);
    for (s32 row = 0; row < count; ++row) {
        if (view->state != 3 || flaggedEntryGetValueByState(&view->cursor) != row)
            FUN_003abae8(view, row, first + row, 0, depth);
    }
    if (view->state == 3) {
        s32 item = flaggedValueHolderGetTotal(&view->cursor);
        s32 row = flaggedEntryGetValueByState(&view->cursor);
        FUN_003abae8(view, row, item, 1, depth + 1);
        SkillListRow *rows = view->rows;
        item = flaggedValueHolderGetTotal(&view->cursor);
        FUN_00288e68(rows[item].id);
        buttonHelpShowSkillDetails();
    }
    FUN_0022d7b0(view, depth);
}

}

void Obj42247c::FUN_003ab3dc()
{
    SkillListRenderView * view = reinterpret_cast<SkillListRenderView *>(this);
    s32 depth = 0x1F;
    uiRectDrawAtBottomRight(view->render, 3, 0, 0, depth);
    FUN_00231bcc(view->render, 0x4C7, 0, 0, depth, 1);
    FUN_00231bcc(view->render, 0x4C8, 0, 0, depth, 1);
    FUN_00231bcc(view->render, 0x4CA, 0, 0, depth, 1);
    drawSkillListContents(view, depth);
}
