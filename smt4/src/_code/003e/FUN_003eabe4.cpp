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
extern "C" u32 FUN_003eabe4(Obj50d3e0 *obj, s32 index, u32 value)
{
    Obj50d3e0Table *table = obj->table;
    if (table == NULL) {
        return 0;
    }
    u32 offset = 4 + index * 4;
    u32 old = *(u32 *)((u8 *)table + offset);
    *(u32 *)((u8 *)table + offset) = value;
    return old;
}
