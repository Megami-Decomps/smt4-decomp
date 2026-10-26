/* NON_MATCHING: selection stores combine and the visible-row count is cached rather than reloaded. */
#include "saveLoadUI/SaveLoadControllerA.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
s32 FUN_003450d4(void *scroll, const TextureTableEntryIV *sprite, u32 *limits, s32 width,
                  s32 left, s32 top, u8 *flags, s32 first, s32 second);
s32 resourceRunOperationIfUnblocked(void *scroll);
s32 flaggedEntryGetValueA(void *scroll);
s32 recordGetModeForId(s32 id);

/* Update scroll selection, row sprites, and the selected slot's action flags. */
void FUN_0041e450(SaveLoadControllerA *controller)
{
    struct RowSprites {
        u32 first, second;
        u8 unk08[0x3c];
    };
    // The row sprites extend beyond the shared save-load controller prefix.
    struct ScrollView {
        u8 unk000[0x18];
        s32 count;
        u8 unk01c[0x2dc];
        s32 selected;
        s32 previous;
        s32 first;
        s32 scroll;
        s32 row;
        u8 unk30c[0xcc];
        u8 control[0x64];
        u32 limits;
        s16 left, top, width, slotId;
        u8 unk448[4];
        u8 flags[3];
        u8 unk44f[0x251];
        RowSprites rows[1];
    };
    typedef char ScrollViewLayout[offsetof(ScrollView, control) == 0x3d8 &&
        offsetof(ScrollView, rows) == 0x6a0 ? 1 : -1];
    ScrollView *view = reinterpret_cast<ScrollView *>(controller);
    TextureTableEntryIV *sprite = asdTMTexTableEntryAt(0x2b, 0xd);
    if (FUN_003450d4(view->control, sprite, &view->limits, view->width,
                      view->left, view->top, view->flags, 0, 1)) {
        view->scroll = resourceRunOperationIfUnblocked(view->control);
        view->row = flaggedEntryGetValueA(view->control);
        view->previous = view->selected;
        view->selected = view->row + view->scroll + view->first;
        for (s32 index = 0; index < view->count; ++index) {
            if (view->scroll + view->first + index >= 1) {
                view->rows[index].first = 0x86;
                view->rows[index].second = 0x98;
            } else {
                view->rows[index].first = 0x85;
                view->rows[index].second = 0x97;
            }
        }
    }
    s32 mode = recordGetModeForId(view->slotId);
    view->flags[2] = 0;
    view->flags[1] = 0;
    if (mode == 1 || mode == 2) {
        view->flags[2] = 1;
    } else if (mode == 6) {
        view->flags[2] = 1;
        view->flags[1] = 1;
    }
}
}
