/* NON_MATCHING: scene/selection registers and initial frame-color scheduling differ. */
#include "shard/S2Scene3a.h"
#include "shard/Shard004A.h"
#include "code/Code0029.h"

extern "C" {
void uiRectDrawAtBottomRight(const AsdTextureRegion *, u32 image, s32 x, s32 y, u32 color);
void FUN_00231bcc(const AsdTextureRegion *, u32 image, s32 x, s32 y, u32 color, u32 flags);
void FUN_003a07a0(Scene3a *scene, s32 category);
s32 rangeLimitMin(const FlaggedValueHolder *holder);
s32 flaggedEntryGetValueByState(const FlaggedValueHolder *holder);
void shopDrawListRow(Scene3a *scene, s32 row, s32 selected, const Scene3aEntry *entry);

// Draw the other shop page without the equipped-item row.
void FUN_003a1d04(Scene3a *scene)
{
    u32 frameColor = scene->listId;
    u32 image;
    switch (scene->slot) {
    case 0: image = 0; break;
    case 1: case 2: image = 1; break;
    case 3: case 4: case 5: image = 2; break;
    case 6: image = 11; break;
    case 7: image = 3; break;
    case 8: image = 4; break;
    }
    uiRectDrawAtBottomRight(&scene->region, image, 0, 0, frameColor);
    u32 color = scene->listId;
    FUN_00231bcc(&scene->region, 100, 0, 0, color, 1);
    FUN_003a07a0(scene, scene->slot);
    s32 phase = scene->phase;
    bool selectedOverlay = phase == 5 || phase == 9 || phase == 6 || phase == 10 ||
        phase == 7 || phase == 11 || phase == 15 || phase == 16;
    Scene3aSlotInfo *page = &scene->slotInfo[scene->slot];
    Scene3aEntry *entries = scene->lists[scene->slot].items;
    s32 offset = FUN_0029e924(&page->holder);
    s32 visible = rangeLimitMin(&page->holder);
    for (s32 row = 0; row < visible; ++row) {
        if (!selectedOverlay || flaggedEntryGetValueByState(&page->holder) != row)
            shopDrawListRow(scene, row + 1, 0, &entries[offset + row]);
    }
    if (selectedOverlay && page->range.count > 0) {
        const Scene3aEntry *held = &entries[flaggedValueHolderGetTotal(&page->holder)];
        shopDrawListRow(scene, flaggedEntryGetValueByState(&page->holder) + 1, 1, held);
    }
    s32 selected = flaggedEntryGetValueByState(&page->holder);
    shopPanelSetScrollPosition(scene->view, FUN_0029e924(&page->holder), selected);
    scene->view->refresh(color);
}
}
