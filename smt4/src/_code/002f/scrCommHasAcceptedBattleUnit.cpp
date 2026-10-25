#include "shard/W4_Match6_BtlEntry.h"

extern "C" {

int scrSetResult(int result);
extern int btlSlotsHaveReadyUnit(BtlEntry *unit);
extern BtlMainState *btlGetMainState(void);

/* Script command: result 1 when any of the 0x6D units is active (0x10), present (1), not hidden (0x40) and accepted by btlSlotsHaveReadyUnit. */
u32 scrCommHasAcceptedBattleUnit(void)
{
    int i = 0;
    BtlMainState *btl;
    BtlEntry *unit;
    u32 flags;

    while (1) {
        btl = btlGetMainState();
        unit = btl->entries + i;
        flags = unit->flags;
        if ((((flags & 0x10) != 0 && (flags & 1) != 0) && ((flags & 0x40) == 0)) &&
            (btlSlotsHaveReadyUnit(unit) != 0)) {
            break;
        }
        i = i + 1;
        if (i >= 0x6d) {
            scrSetResult(0);
            return 1;
        }
    }
    scrSetResult(1);
    return 1;
}

} /* extern "C" */
