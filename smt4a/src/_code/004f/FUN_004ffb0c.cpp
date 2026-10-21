/* NON_MATCHING: zero-value VFP load is scheduled before the record lookup. */
#include "common.h"
struct FloatValue { u8 unk00[8]; f32 value; };
struct FloatSlot { FloatValue *value; u8 unk04[0x2C]; };
struct FloatTable { u8 unk00[0x1C]; u32 index; u8 unk20[0x10]; FloatSlot slots[1]; };
/* Reads the selected record's value, or zero when absent. */
extern "C" f32 FUN_004ffb0c(FloatTable *table) {
    FloatValue *value = table->slots[table->index].value;
    f32 result = 0.0f;
    if (value != NULL) {
        result = value->value;
    }
    return result;
}
