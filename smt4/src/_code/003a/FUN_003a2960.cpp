/* NON_MATCHING: same shape as FUN_003a1d04: retail keeps the scene in r6 and the overlay flag in r5 (build swaps them) and takes the held entry address before the cursor call. */
#include "shard/S2Scene3a.h"
#include "shard/W6_W6Match4_FlaggedValueHolder.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

class PanelWidget {
public:
    virtual void vfn00() = 0;
    virtual void vfn04() = 0;
    virtual void vfn08() = 0;
    virtual void vfn0C() = 0;
    virtual void refresh(u32 value) = 0;    /* 0x10 */
};

extern "C" {
u16 *gameGetPlayerData(void);
s32 FUN_0029e924(const FlaggedValueHolder *holder);
s32 flaggedEntryGetValueByState(const FlaggedValueHolder *holder);
void uiRectDrawAtBottomRight(const AsdTextureRegion *, u32 image, s32 x, s32 y, u32 color);
void FUN_00231bcc(const AsdTextureRegion *, u32 image, s32 x, s32 y, u32 color, u32 flags);
void FUN_003a07a0(Scene3a *scene, s32 category);
void FUN_0022ea70(Scene3a *scene, s32 row, s32 selected, const Scene3aEntry *entry);
void FUN_002332e8(void *object, s32 first, s32 second);
s32 flaggedValueHolderGetTotal(const FlaggedValueHolder *holder);
s32 rangeLimitMin(const FlaggedValueHolder *holder);

/* Redraw the tabbed list panel: its frame, the tab's header value and every row of the current page. */
void FUN_003a2960(Scene3a *scene, u32 image)
{
    // The canonical scene has an over-wide callback-table prefix and only two recovered lists.
    struct DrawingView {
        u8 prefix[0x37C];
        u32 color;
        AsdTextureRegion region;
        u8 padding3A0[0x4BC];
        PanelWidget *scrollbar;
        s32 category;
        u8 padding864[0x1C];
        FlaggedValueHolder controls[9];
        Scene3aList lists[9];
    };
    typedef char DrawingOffsets[sizeof(FlaggedValueHolder) == 0x74 &&
        offsetof(DrawingView, controls) == 0x880 && offsetof(DrawingView, lists) == 0xC94 ? 1 : -1];
    DrawingView *view = reinterpret_cast<DrawingView *>(scene);
    u32 frameColor = view->color;
    switch (view->category) {
    case 0: image = 0; break;
    case 1: case 2: image = 1; break;
    case 3: case 4: case 5: image = 2; break;
    case 6: image = 11; break;
    case 7: image = 3; break;
    case 8: image = 4; break;
    }
    uiRectDrawAtBottomRight(&view->region, image, 0, 0, frameColor);
    u32 color = view->color;
    FUN_00231bcc(&view->region, view->category + 90, 0, 0, color, 1);
    FUN_003a07a0(scene, view->category);
    Scene3aEntry header;
    header.id = 0;
    u32 bits = header.unk02;
    bits >>= 10;
    bits <<= 10;
    header.unk02 = bits;
    u16 value = 0;
    switch (view->category) {
    case 0: value = gameGetPlayerData()[0]; break;
    case 1: value = gameGetPlayerData()[1]; break;
    case 2: value = gameGetPlayerData()[2]; break;
    case 3: value = gameGetPlayerData()[3]; break;
    case 4: value = gameGetPlayerData()[4]; break;
    case 5: value = gameGetPlayerData()[5]; break;
    case 6: value = gameGetPlayerData()[6]; break;
    }
    header.id = value;
    FUN_0022ea70(scene, 0, 0, &header);
    s32 phase = scene->phase;
    bool selectedOverlay = phase == 5 || phase == 9 || phase == 6 || phase == 10 ||
        phase == 7 || phase == 11 || phase == 15 || phase == 16;
    FlaggedValueHolder *holder = &view->controls[view->category];
    Scene3aEntry *entries = view->lists[view->category].entries;
    s32 offset = FUN_0029e924(holder);
    s32 visible = rangeLimitMin(holder);
    for (s32 row = 0; row < visible; ++row) {
        if (!selectedOverlay || flaggedEntryGetValueByState(holder) != row)
            FUN_0022ea70(scene, row + 2, 0, &entries[offset + row]);
    }
    struct CountsView { u32 prefix[2]; s32 count; };
    if (selectedOverlay && reinterpret_cast<const CountsView *>(holder)->count > 0) {
        FUN_0022ea70(scene, flaggedEntryGetValueByState(holder) + 2, 1, &entries[flaggedValueHolderGetTotal(holder)]);
    }
    s32 selected = flaggedEntryGetValueByState(holder);
    s32 first = FUN_0029e924(holder);
    FUN_002332e8(view->scrollbar, first, selected);
    view->scrollbar->refresh(color);
}
}
