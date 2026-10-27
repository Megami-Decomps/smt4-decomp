/* NON_MATCHING: only the owner-offset literal load is scheduled before the selection store (retail reloads it after). */
#include "ui/ItemListSelection.h"
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
struct ItemVariantStateView {
    u8 unk00[0xf];
    u8 variant;
};
typedef char ItemListFlowOffsetsCheck[offsetof(ItemListFlowView, state) == 0x14 &&
    offsetof(ItemListFlowView, step) == 0x18 &&
    offsetof(AnimatedPageSelectionView, selection) == 4 &&
    offsetof(ItemVariantStateView, variant) == 0xf ? 1 : -1];

extern "C" {
extern AnimatedPageSelectionView g_animatedPageSelection;
bool useCounterIsFinished();
void useCounterRelease();
void sysPlaySe(u32 sound);
s32 useCounterGetCurrentValue();
void FUN_004a84e8(ItemListSelectionEntry *selection, s32 mode);
void FUN_004a3e04(ItemListSelectionOwner *owner);

}

void Obj55c89c::FUN_004a40f4()
{
    ItemListSelectionOwner * owner = reinterpret_cast<ItemListSelectionOwner *>(this);
    if (useCounterIsFinished()) {
        useCounterRelease();
        sysPlaySe(0x2f);
        FUN_003343f0(0);
        ItemListFlowView *flow = (ItemListFlowView *)owner;
        flow->state = 2;
        flow->step = 0;
    } else if (useCounterGetCurrentValue() != 0x69) {
        g_animatedPageSelection.selection = -1;
        if ((s16)owner->selection.value != 0) {
            u8 *variant = &reinterpret_cast<ItemVariantStateView *>(FUN_0026140c())->variant;
            s8 animation;
            switch (*variant & 0x7f) {
            case 1: animation = 6; break;
            case 2: animation = 4; break;
            case 3: animation = 0x16; break;
            case 7: animation = 0x18; break;
            default:
                animation = 6;
                *variant = (*variant & ~0x7f) | 1;
                break;
            }
            if (*variant & 0x80) {
                ++animation;
            }
            FUN_004a84e8(&owner->selection, animation);
        }
        FUN_004a3e04(owner);
    }
}
