#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"

struct BtlCombatantValueRingView {
    u8 unk000[0x394];
    u32 values[6]; // 0x394
    s32 next;      // 0x3ac
};

extern "C" {
u32 scrGetArg(u32 index);
BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *state, u32 id);

// Append a script value to the selected combatant's six-entry cyclic buffer.
u32 FUN_003bcad0(void)
{
    u32 id = scrGetArg(0);
    u32 value = scrGetArg(1);
    BtlCombatantEntryA *entry = FUN_003f0e20(btlGetMainState(), id);
    if (entry != NULL) {
        BtlCombatantValueRingView *ring = reinterpret_cast<BtlCombatantValueRingView *>(entry);
        s32 &next = ring->next;
        ring->values[next] = value;
        if (++next > 5)
            next = 0;
    }
    return 1;
}
}
