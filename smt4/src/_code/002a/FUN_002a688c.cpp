/* NON_MATCHING: register allocation only: retail keeps the source pointer in r1 and the value/multiplier in r0 (multiplying count*multiplier as r1*r0); built uses r0/r1 the other way round */
#include "common.h"

extern "C" {

typedef struct Source {
    /* 0x00 */ u32 value;
    /* 0x04 */ u32 count;
    /* 0x08 */ s32 kind;
    /* 0x0C */ u32 total;      /* 0 = count * the kind's multiplier */
    /* 0x10 */ u8 unk10[8];
} Source; /* 0x18 */

typedef struct Table {
    /* 0x00 */ u32 header;
    /* 0x04 */ u32 values[18];
    /* 0x4C */ u32 copies[16];
    /* 0x8C */ u32 totals[16];
} Table;

typedef struct Globals {
    /* 0x000 */ u8 unk000[0x458];
    /* 0x458 */ Source sources[16];
    /* 0x5D8 */ u8 unk5D8[0xC8];
    /* 0x6A0 */ Table table;
} Globals;

extern Globals *g_textureBindingState;

/* Copies source `index` into the table (its value twice, and its total or count times the kind's
 * multiplier); index 16 clears the table's header and last value. */
void FUN_002a688c(s32 index)
{
    Globals *globals = g_textureBindingState;
    Table *table = &globals->table;
    Source *sources = globals->sources;
    Source *source;
    s32 multiplier;
    u32 value;
    u32 total;

    if (index == 16) {
        table->header = 0;
        table->values[17] = 0;
        return;
    }
    source = &sources[index];
    value = source->value;
    table->values[index] = value;
    table->copies[index] = value;
    switch (source->kind) {
    case 0x1400:
    case 0x1401:
        multiplier = 1;
        break;
    case 0x1402:
        multiplier = 2;
        break;
    case 0x1406:
        multiplier = 4;
        break;
    default:
        multiplier = 0;
        break;
    }
    total = source->total;
    if (total == 0) {
        total = source->count * multiplier;
    }
    table->totals[index] = total;
}

} /* extern "C" */
