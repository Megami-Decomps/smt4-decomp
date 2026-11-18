#include "ui/ItemListSelection.h"
#include "gamedata/SelectionValueRecord.h"
#include "classes/Obj55c89c.h"
#include "event/2dEvent/2dEventTex.h"
#include "code/Code0033.h"

// Adding word fields would raise the alignment and size of the shared halfword-ended owner.
struct ItemListFlowView {
    u8 unk00[0x14];
    u32 state;
    u32 step;
};
struct AnimatedPageSelectionView {
    u32 unk00;
    s32 selection;
};
typedef char ItemListFlowOffsetsCheck[offsetof(ItemListFlowView, state) == 0x14 &&
    offsetof(ItemListFlowView, step) == 0x18 &&
    offsetof(AnimatedPageSelectionView, selection) == 4 ? 1 : -1];

extern "C" {
extern AnimatedPageSelectionView g_animatedPageSelection;
bool useCounterIsFinished();
void useCounterRelease();
void sysPlaySe(u32 sound);
s32 useCounterGetCurrentValue();
void FUN_004a84e8(ItemListSelectionEntry *selection, s32 mode);
void FUN_004a3e04(ItemListSelectionOwner *owner);

}

// Apply the saved devil-icon variant to the selected icon; reset unknown kinds to 1. The same
// operation as itemListSelectVariant on the settings byte at 0x0F (inlined here).
static __inline void refreshSelectedIcon(ItemListSelectionOwner *owner)
{
    if (owner->selection.value == 0) {
        return;
    }
    u8 &variant = reinterpret_cast<SaveUserSelectionRecord *>(saveGetUserSettingsBlock())->variant.devilIconFlags;
    s8 animation;
    switch (variant & 0x7f) {
    case 1: animation = 6; break;
    case 2: animation = 4; break;
    case 3: animation = 0x16; break;
    case 7: animation = 0x18; break;
    default:
        animation = 6;
        variant = (variant & ~0x7f) | 1;
        break;
    }
    if (variant & 0x80) {
        ++animation;
    }
    FUN_004a84e8(&owner->selection, animation);
}

// Refresh the selected icon until the use counter finishes, then return to state 2.
void Obj55c89c::FUN_004a40f4()
{
    ItemListSelectionOwner *owner = reinterpret_cast<ItemListSelectionOwner *>(this);
    if (useCounterIsFinished()) {
        useCounterRelease();
        sysPlaySe(0x2f);
        gameGlobalsSetMenuOpenFlag(0);
        ItemListFlowView *flow = (ItemListFlowView *)owner;
        flow->state = 2;
        flow->step = 0;
    } else if (useCounterGetCurrentValue() != 0x69) {
        g_animatedPageSelection.selection = -1;
        refreshSelectedIcon(owner);
        FUN_004a3e04(owner);
    }
}
