/* NON_MATCHING: retail forms the entry offset as (index << 2) + 4 in registers (mov r0, #4; add r1, r0, r1, lsl #2) instead of folding the 4 into the load offsets. */
#include "common.h"

struct Obj50d3e0Table {
    u32 unk00;
    u32 entries[1];
};

struct Obj50d3e0 {
    u8 unk00[0x20c];
    Obj50d3e0Table *table;
};

/* Stores `value` in entry `index` of the object's table and returns the previous entry (0 with no table). */
extern "C" u32 FUN_0050d3e0(Obj50d3e0 *obj, s32 index, u32 value)
{
    Obj50d3e0Table *table = obj->table;
    if (table == NULL) {
        return 0;
    }
    u32 old = table->entries[index];
    table->entries[index] = value;
    return old;
}
