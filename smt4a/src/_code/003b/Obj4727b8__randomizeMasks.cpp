#include "classes/Obj4727b8.h"

extern "C" s32 randomAdvanceShiftRegister(s32 range);

/* Give each entry the complement of a random value in 0..3. */
void Obj4727b8::randomizeMasks()
{
    Obj4727b8Entry *entry = ref.table->entries;
    u32 count = ref.counter->count;
    for (u32 index = 0; index < count; ++index) {
        entry->mask = ~(randomAdvanceShiftRegister(0) % 4);
        ++entry;
    }
}
