/* NON_MATCHING: compiler predicates fallback tests instead of retail branches. */
#include "common.h"
struct FloatValue { u8 unk00[8]; f32 value; };
struct FloatSlot { FloatValue *value; u8 unk04[0x2C]; };
struct FloatTable { u8 unk00[0x1C]; u32 index; u8 unk20[0x10]; FloatSlot slots[4]; };
/* Resolves the selected value, falling back to slots two and three. */
extern "C" f32 FUN_004ff8dc(FloatTable *table) {
    FloatValue *value = table->slots[table->index].value;
    if (value == NULL) value = table->slots[2].value;
    if (value != NULL) return value->value;
    value = table->slots[3].value;
    return value != NULL ? value->value : 0.0f;
}
