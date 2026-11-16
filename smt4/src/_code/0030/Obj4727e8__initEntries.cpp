#include "classes/Obj4727e8.h"

extern "C" {
f32 shiftRandomNextFraction(s32 range);
s32 randomAdvanceShiftRegister(s32 range);
}

/* Picks a random start value and a per-step increment toward a random end value, and gives every
 * entry a random mask. */
void Obj4727e8::initEntries()
{
    Obj4727e8Ref *r = &ref;
    Obj4727e8Table *table = r->table;
    Obj4727e8Counter *counter = r->counter;
    Obj4727e8Entry *entry = table->entries;
    s32 span = counter->span;
    f32 start = ((1.0f - counter->baseBlend) + shiftRandomNextFraction(0) * counter->baseBlend) * counter->baseScale;
    u32 count;
    u32 i;

    if (span > 0) {
        f32 end = ((1.0f - counter->endBlend) + shiftRandomNextFraction(0) * counter->endBlend) * counter->endScale;

        table->base = start;
        table->step = (end - start) / (f32)span;
    } else {
        table->base = start;
        table->step = 0.0f;
    }
    count = counter->count;
    for (i = 0; i < count; i++) {
        entry->mask = ~(randomAdvanceShiftRegister(0) % 8);
        entry++;
    }
}
