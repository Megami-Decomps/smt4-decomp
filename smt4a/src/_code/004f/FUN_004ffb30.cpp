#include "common.h"
struct OptionalValue {u32 unused;f32 value;u32 unused2;u32 present;};
struct FloatSlot {u8 unk00[36];u32 unused;f32 value;u32 unused2;};
struct FloatTable {u8 unk00[28];u32 index;u8 unk20[4];};
/* Reads the selected slot's optional scalar. */
extern "C" f32 FUN_004ffb30(FloatTable *table){
    FloatSlot *slot=(FloatSlot *)table + table->index;
    OptionalValue *value=(OptionalValue *)&slot->unused;
    return value->present==0 ? 0.0f : value->value;
}
