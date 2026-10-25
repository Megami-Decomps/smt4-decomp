/* NON_MATCHING: compiler peels the stock-copy loop and calls unaligned memset; retail uses a single copy loop and memset4. */
#include "shard/W7_W7Match2_PartyDamage.h"
#include <string.h>

struct PartyUnit;
extern "C" {
PartyDamageSlotsIV *gameGetSlotTable(void);
PartyUnit *gameGetUnitRecord(s32 slot);
s32 FUN_003bc9b8(const PartyUnit *unit);
bool FUN_00295d7c(PartyUnit *unit);
u8 flagWordTestBit(PartyUnit *unit, u32 bit);

// Find an available reserve unit which is not active or excluded by its status flags.
u32 FUN_0033fc50(void)
{
    // The stock-capacity byte follows the established party-slot view.
    struct StockCapacityView {
        PartyDamageSlotsIV slots;
        u8 capacity;
    };
    typedef char CapacityOffsetCheck[offsetof(StockCapacityView, capacity) == 0x910B ? 1 : -1];
    StockCapacityView *stock = (StockCapacityView *)gameGetSlotTable();
    u8 count = 0;
    u8 slots[24];
    memset(slots, -1, sizeof(slots));
    s32 remaining = stock->capacity;
    if (remaining != 0) {
        s8 *slot = stock->slots.stock;
        do {
            if (*slot >= 0) {
                slots[count++] = *slot;
            }
            --remaining;
            ++slot;
        } while (remaining != 0);
        for (s32 index = 0; index < count; ++index) {
            PartyUnit *unit = gameGetUnitRecord(slots[index]);
            if (unit != NULL && FUN_003bc9b8(unit) != 0 && !FUN_00295d7c(unit) &&
                flagWordTestBit(unit, 1) == 0 && flagWordTestBit(unit, 10) == 0 &&
                flagWordTestBit(unit, 2) == 0) {
                return 1;
            }
        }
    }
    return 0;
}
}
