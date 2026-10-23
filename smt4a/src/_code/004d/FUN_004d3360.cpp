/* NON_MATCHING: 64-bit option-mask load/store scheduling and switch tail merging differ; bust close uses the retail messageMainApplyClose tail call. */
#include "battle/btlMain.h"

namespace {
struct BattleMarkerMenu {
    u8 unk00[0x10];
    u32 listBox;
};
struct BattleMarkerOptionMasks {
    u8 unk00[0x98];
    u64 first;
    u64 bust;
    u8 unkA8[0x20];
    u64 third;
    u64 fourth;
    u64 fifth;
};
typedef char BattleMarkerOptionMasksLayoutCheck[offsetof(BattleMarkerOptionMasks, first) == 0x98 &&
    offsetof(BattleMarkerOptionMasks, third) == 0xC8 &&
    offsetof(BattleMarkerOptionMasks, fifth) == 0xD8 ? 1 : -1];
}

extern "C" {
extern const BattleMarkerOptionMasks DAT_005715f8;
u32 asdListBoxGetSelectedItemId(u32 listBox);
s32 listBoxItemHasOwner(u32 listBox, u32 item);
s32 *asdListBoxGetIntValuePtr(u32 listBox);
s32 battleTalkGetBustState(void);
void btlTalkBustUpReleaseAllSlots(void);
void messageMainApplyClose(void);

void FUN_004d3360(BattleMarkerMenu *menu, BtlMainStateA *state)
{
    const u32 item = asdListBoxGetSelectedItemId(menu->listBox);
    u64 &flags = state->markerMasks.bits;
    switch (item) {
    case 0:
        if (listBoxItemHasOwner(menu->listBox, item) != 0) {
            flags |= DAT_005715f8.first;
        } else {
            flags &= ~DAT_005715f8.first;
        }
        break;
    case 1: {
        u64 updatedFlags;
        if (listBoxItemHasOwner(menu->listBox, item) != 0) {
            updatedFlags = flags | DAT_005715f8.bust;
        } else {
            updatedFlags = flags & ~DAT_005715f8.bust;
        }
        flags = updatedFlags;
        if ((updatedFlags & DAT_005715f8.bust) == 0 && battleTalkGetBustState() != 0) {
            btlTalkBustUpReleaseAllSlots();
            messageMainApplyClose();
        }
        break;
    }
    case 2:
        state->negotiation.bustupIndex = *asdListBoxGetIntValuePtr(menu->listBox);
        break;
    case 3:
        if (listBoxItemHasOwner(menu->listBox, item) != 0) {
            flags |= DAT_005715f8.third;
        } else {
            flags &= ~DAT_005715f8.third;
        }
        break;
    case 4:
        if (listBoxItemHasOwner(menu->listBox, item) != 0) {
            flags |= DAT_005715f8.fifth;
        } else {
            flags &= ~DAT_005715f8.fifth;
        }
        break;
    }
}
}
