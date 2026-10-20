/* NON_MATCHING: same arithmetic; armcc predicates the span <= 0 arm (vldrle/vstrle) where retail branches around it, and the two stores of the step differ in register. */
#include "classes/Obj4727e8.h"

extern "C" {
f32 FUN_0024b830(s32 range);
s32 FUN_0024b77c(s32 range);
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
    f32 start = ((1.0f - counter->baseBlend) + FUN_0024b830(0) * counter->baseBlend) * counter->baseScale;
    u32 count;
    u32 i;

    if (span <= 0) {
        table->base = start;
        table->step = 0.0f;
    } else {
        f32 end = ((1.0f - counter->endBlend) + FUN_0024b830(0) * counter->endBlend) * counter->endScale;

        table->base = start;
        table->step = (end - start) / (f32)span;
    }
    count = counter->count;
    for (i = 0; i < count; i++) {
        entry->mask = ~(FUN_0024b77c(0) % 8);
        entry++;
    }
}
