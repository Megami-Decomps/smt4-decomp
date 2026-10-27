/* NON_MATCHING: rewritten from retail (tab touches, sort menu / status panel transitions); retail allocates the entries base to r4 and the screen to r5 (build swaps them). */
#include "common.h"
#include "shard/W6_W6Match4_RelativeDirectory.h"
#include "status/StatusCamera.h"

struct BibleBrowseEntry {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 devilId;
    /* 0x06 */ u8 unk06[0x1A];
};

/* The compendium list screen (observed fields; the object extends well past them). */
/* The screen's state block starting at 0x500. */
struct BibleBrowseBlock {
    /* 0x00 */ u8 unk00[0xA4];
    /* 0xA4 */ u8 tabsShown;
    /* 0xA5 */ u8 unkA5[3];
    /* 0xA8 */ s16 entryCount;
};

struct BibleBrowseView {
    /* 0x00000 */ u8 unk00000[0x14];
    /* 0x00014 */ s32 mode;
    /* 0x00018 */ s32 modeTimer;
    /* 0x0001C */ u8 unk0001C[4];
    /* 0x00020 */ u8 list[0xA8];
    /* 0x000C8 */ u8 layout[0x14];
    /* 0x000DC */ u8 animation[0x20];
    /* 0x000FC */ u8 unk000FC[0x460];
    /* 0x0055C */ u8 selection[0x34];
    /* 0x00590 */ u32 touchOwner;
    /* 0x00594 */ u8 unk00594[0x14];
    /* 0x005A8 */ BibleBrowseEntry entries[0x500];
    /* 0x0A5A8 */ u8 unkA5A8[0xC];
    /* 0x0A5B4 */ s32 targetId;
    /* 0x0A5B8 */ u8 unkA5B8[0x102];
    /* 0x0A6BA */ s16 tabCount;
    /* 0x0A6BC */ s16 tabCurrent;
    /* 0x0A6BE */ s8 hovered;

};
/* The part of the screen's state at 0xA500. */
struct BibleBrowseSlots {
    /* 0x00 */ u8 unk00[0xB2];
    /* 0xB2 */ s16 slotIndex;
    /* 0xB4 */ u8 unkB4[6];
    /* 0xBA */ s16 tabIds[0x80];
};
struct BibleBrowseTabs {
    /* 0x00 */ u8 unk00[0xBA];
    /* 0xBA */ s16 count;
    /* 0xBC */ s16 current;
    /* 0xBE */ s8 hovered;
};

static BibleBrowseSlots *slotsOf(BibleBrowseView *view)
{
    return reinterpret_cast<BibleBrowseSlots *>(reinterpret_cast<u8 *>(view) + 0xA500);
}

extern "C" {
u16 shopListItemGetId(const BibleBrowseEntry *entry);
s32 FUN_00232848(void);
s32 FUN_002328b4(void);
void FUN_00233240(void *animation, s32 slot);
s32 uiOwnerUpdateAnimationChannels(BibleBrowseView *view);
u32 flaggedValueHolderGetTotal(void *list);
void FUN_00233818(void *selection);
void ifTouchRegionClearAll(u32 owner);
s32 inputIsQuestCancelPressed(void);
s32 gameGetNavigationState(void);
s32 inputIsQuestMenuPressed(void);
void beginStatusPanelClose(void);
void FUN_0029da34(RelativeDirectory *directory, u32 entry, u16 devilId, u32 context);
s32 gameGetFlagByte12e8(void);
void useCounterStart(void);
void sortMenuCreate(s32 kind, s32 mode);
void FUN_0029ee6c(s32 text, u32 color);
void FUN_003a8aa0(BibleBrowseView *view);
struct LayoutSlot {
    u8 unk00[8];
    s16 x;
    s16 y;
    const s16 *size;
};
LayoutSlot *FUN_002bf4f0(u8 *layout, u32 id);
s32 FUN_003c2e1c(s32 x, s32 y, s32 w, s32 h);
s32 FUN_003c2e30(s32 x, s32 y, s32 w, s32 h);

/* Per-frame input of the compendium list: tab touches, tab switching, and the transitions to the sort menu and the status panel. */
void FUN_003a98b8(BibleBrowseView *view)
{
    BibleBrowseEntry *entries = view->entries;
    s16 previous = shopListItemGetId(&entries[flaggedValueHolderGetTotal(view->list)]);
    uiOwnerUpdateAnimationChannels(view);
    s16 current = shopListItemGetId(&entries[flaggedValueHolderGetTotal(view->list)]);
    if (current != previous)
        FUN_0029da34(NULL, 1, current, 0);
    s32 confirm = inputIsQuestMenuPressed();
    s32 cancel = 0;
    BibleBrowseBlock *block = reinterpret_cast<BibleBrowseBlock *>(reinterpret_cast<u8 *>(view) + 0x500);
    if (block->entryCount > 0)
        cancel = inputIsQuestCancelPressed();
    BibleBrowseTabs *tabs = reinterpret_cast<BibleBrowseTabs *>(reinterpret_cast<u8 *>(view) + 0xA600);
    if (tabs->count > 0 && block->tabsShown == 1) {
        s8 *hovered = &view->hovered;
        for (s32 tab = 0; tab < 2; tab++) {
            LayoutSlot *slot = FUN_002bf4f0(view->layout, tab + 0x1023);
            s32 x = slot->x;
            s32 y = slot->y;
            s32 w = slot->size[0];
            s32 h = slot->size[1];
            if (FUN_003c2e1c(x, y, w, h))
                *hovered = tab;
            if (FUN_003c2e30(x, y, w, h)) {
                *hovered = tab;
                if (tab != 0) {
                    tabs->current++;
                    if (tabs->count <= tabs->current)
                        tabs->current = 0;
                } else {
                    tabs->current--;
                    if (tabs->current < 0)
                        tabs->current = tabs->count - 1;
                }
                s32 target = slotsOf(view)->tabIds[tabs->current];
                if (view->targetId != target) {
                    view->targetId = target;
                    FUN_003a8aa0(view);
                }
                break;
            }
        }
    }
    if (gameGetNavigationState() != 0) {
        view->mode = 4;
        slotsOf(view)->slotIndex = gameGetFlagByte12e8() == 1 ? 1 : 5;
        view->modeTimer = 0;
        FUN_00233240(view->animation, slotsOf(view)->slotIndex);
        ifTouchRegionClearAll(view->touchOwner);
        FUN_00233818(view->selection);
        return;
    }
    if (confirm == 0) {
        if (cancel == 0)
            return;
        sortMenuCreate(0xC, 0);
        FUN_0029e328(1);
        FUN_0029e328(2);
        FUN_0029e328(4);
        FUN_0029e328(5);
        FUN_0029e328(3);
        useCounterStart();
        FUN_002a0cc8(1);
        view->mode = 3;
        view->modeTimer = 0;
        FUN_0029ee6c(0, 0x323232FF);
        FUN_002328b4();
        return;
    }
    beginStatusPanelClose();
    FUN_0029ee6c(0, 0x323232FF);
    FUN_00233240(view->animation, 1);
    FUN_002a0cc8(1);
    view->mode = 6;
    view->modeTimer = 0;
    FUN_00232848();
}

} /* extern "C" */
