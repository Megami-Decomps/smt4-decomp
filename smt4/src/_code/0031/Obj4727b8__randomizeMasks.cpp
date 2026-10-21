#include "classes/Obj4727b8.h"

extern "C" s32 randomAdvanceShiftRegister(s32 range);

/* Gives every entry a random mask: the complement of a value in 0..3. */
void Obj4727b8::randomizeMasks()
{
    Obj4727b8Entry *entry = ref.table->entries;
    u32 count = ref.counter->count;
    u32 i;

    for (i = 0; i < count; i++) {
        entry->mask = ~(randomAdvanceShiftRegister(0) % 4);
        entry++;
    }
}
