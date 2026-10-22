/* NON_MATCHING: availability-loop addressing and floating-point accumulator scheduling differ. */
#include "common.h"

struct CompendiumUnit {
    u8 prefix[0x46];
    u16 id;
};
struct CompendiumPriceRecord {
    u8 prefix[0x70];
    u32 price;
};
struct CompendiumAvailabilityRecord {
    u8 prefix[6];
    u16 flags;
    u8 suffix[0x8C];
};
extern "C" {
CompendiumPriceRecord *dataTable00FindById(u32);
CompendiumAvailabilityRecord *devilGetRecord(u32);
s32 bitsetTestBit(const CompendiumUnit *, s32);
s32 flagBitIsSet(u32);
}

extern "C" u32 FUN_0029c0c0(u32, const CompendiumUnit *unit)
{
    const CompendiumPriceRecord *price = dataTable00FindById(unit->id);
    f32 available = 0.0f;
    f32 registered = 0.0f;
    const CompendiumAvailabilityRecord *records = devilGetRecord(0);
    for (s32 i = 0; i < 0x500; ++i) {
        if (records[i].flags & 1) {
            available += 1.0f;
        }
    }
    for (s32 i = 0; i < 0x200; ++i) {
        if (bitsetTestBit(unit, i)) {
            registered += 1.0f;
        }
    }
    f32 completion = registered / available + 1.0f;
    f32 multiplier = 1.0f;
    if (flagBitIsSet(0x21)) multiplier = 1.2f;
    if (flagBitIsSet(0x22)) multiplier = 1.5f;
    if (flagBitIsSet(0x23)) multiplier = 2.0f;
    if (flagBitIsSet(0x24)) multiplier = 3.0f;
    return u32(f32(price->price) * completion * multiplier + 0.9f);
}
