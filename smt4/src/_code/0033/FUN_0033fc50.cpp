#include "shard/W7_W7Match2_PartyDamage.h"

struct PartyUnit;
extern "C" {
PartyDamageSlotsIV *gameGetSlotTable(void);
PartyUnit *gameGetUnitRecord(s32 slot);
s32 FUN_003bc9b8(const PartyUnit *unit);
bool slotUnitIsInActiveParty(PartyUnit *unit);
u8 flagWordTestBit(PartyUnit *unit, u32 bit);
void __aeabi_memset4(void *destination, u32 size, s32 value);

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
    s8 slots[24];
    s32 i;
    /* The run-time's word-aligned fill, as retail calls it for the stack list. */
    __aeabi_memset4(slots, sizeof(slots), -1);
    for (i = 0; i < stock->capacity; i++) {
        if (stock->slots.stock[i] >= 0) {
            slots[count++] = stock->slots.stock[i];
        }
    }
    for (i = 0; i < count; i++) {
        PartyUnit *unit = gameGetUnitRecord(slots[i]);
        if (unit != NULL && FUN_003bc9b8(unit) != 0 && !slotUnitIsInActiveParty(unit) &&
            flagWordTestBit(unit, 1) == 0 && flagWordTestBit(unit, 10) == 0 &&
            flagWordTestBit(unit, 2) == 0) {
            return 1;
        }
    }
    return 0;
}
}
