/* NON_MATCHING: register allocation only: retail keeps the source pointer in r1 and the value/multiplier in r0 (multiplying count*multiplier as r1*r0); built uses r0/r1 the other way round */
#include "common.h"
#include "gamedata/SourceTableGlobals.h"

extern "C" {

extern SourceTableGlobals *g_textureBindingState;

/* Copies source `index` into the table (its value twice, and its total or count times the kind's
 * multiplier); index 16 clears the table's header and last value. */
void FUN_002a688c(s32 index)
{
    SourceTableGlobals *globals = g_textureBindingState;
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
