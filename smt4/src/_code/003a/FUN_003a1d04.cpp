/* NON_MATCHING: initial color-load scheduling, saved registers and held-row address scheduling differ. */
#include "shard/S2Scene3a.h"
#include "shard/W6_W6Match4_FlaggedValueHolder.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

extern "C" {
void FUN_00230cc0(const AsdTextureRegion *, u32 image, s32 x, s32 y, u32 color);
void FUN_00231bcc(const AsdTextureRegion *, u32 image, s32 x, s32 y, u32 color, u32 flags);
void FUN_003a07a0(Scene3a *scene, s32 category);
s32 FUN_0029e924(const FlaggedValueHolder *holder);
s32 rangeLimitMin(const FlaggedValueHolder *holder);
s32 FUN_00240d5c(const FlaggedValueHolder *holder);
u32 flaggedValueHolderGetTotal(const FlaggedValueHolder *holder);
void FUN_0022f1d0(Scene3a *scene, s32 row, s32 selected, const Scene3aEntry *entry);
void FUN_002332e8(void *scrollbar, u32 offset, u32 selected);

void FUN_003a1d04(Scene3a *scene, u32 image)
{
    struct Scrollbar;
    struct ScrollbarVtable { u32 reserved[4]; void (*draw)(Scrollbar *, u32 color); };
    struct Scrollbar { const ScrollbarVtable *vtable; };
    // The canonical scene has an over-wide callback-table prefix and only two recovered lists.
    struct DrawingView {
        u8 prefix[0x37C];
        u32 color;
        AsdTextureRegion region;
        u8 padding3A0[0x4BC];
        Scrollbar *scrollbar;
        s32 category;
        u8 padding864[0x1C];
        FlaggedValueHolder controls[9];
        Scene3aList lists[9];
    };
    typedef char DrawingOffsets[sizeof(FlaggedValueHolder) == 0x74 &&
        offsetof(DrawingView, controls) == 0x880 && offsetof(DrawingView, lists) == 0xC94 ? 1 : -1];
    DrawingView *view = reinterpret_cast<DrawingView *>(scene);
    switch (view->category) {
    case 0: image = 0; break;
    case 1: case 2: image = 1; break;
    case 3: case 4: case 5: image = 2; break;
    case 6: image = 11; break;
    case 7: image = 3; break;
    case 8: image = 4; break;
    }
    FUN_00230cc0(&view->region, image, 0, 0, view->color);
    u32 color = view->color;
    FUN_00231bcc(&view->region, 100, 0, 0, color, 1);
    FUN_003a07a0(scene, view->category);
    s32 phase = scene->phase;
    bool selectedOverlay = phase == 5 || phase == 9 || phase == 6 || phase == 10 ||
        phase == 7 || phase == 11 || phase == 15 || phase == 16;
    FlaggedValueHolder *holder = &view->controls[view->category];
    Scene3aEntry *entries = view->lists[view->category].entries;
    s32 offset = FUN_0029e924(holder);
    s32 visible = rangeLimitMin(holder);
    for (s32 row = 0; row < visible; ++row) {
        if (!selectedOverlay || FUN_00240d5c(holder) != row)
            FUN_0022f1d0(scene, row + 1, 0, &entries[offset + row]);
    }
    struct CountsView { u32 prefix[2]; s32 count; };
    if (selectedOverlay && reinterpret_cast<const CountsView *>(holder)->count > 0) {
        u32 held = flaggedValueHolderGetTotal(holder);
        s32 row = FUN_00240d5c(holder);
        FUN_0022f1d0(scene, row + 1, 1, &entries[held]);
    }
    s32 selected = FUN_00240d5c(holder);
    s32 first = FUN_0029e924(holder);
    FUN_002332e8(view->scrollbar, first, selected);
    view->scrollbar->vtable->draw(view->scrollbar, color);
}
}
