/* NON_MATCHING: the copies and the clamp match; retail tests count > 0 before entering the scan loop and walks it from a saved base (r5 = sp), where this build branches to the loop test. */
#include "shard/W9_W9Match7_ModifierLists.h"
#include <string.h>

/* Sums matching modifier kinds from the selected signed list, up to nine entries. */
extern "C" s32 FUN_0034a304(const AttributeModifierLists *record, s32 count, s32 kind)
{
    if (!record) {
        return 0;
    }
    AttributeModifier modifiers[10];
    s32 total = 0;
    s32 sign = 1;
    if (count >= 0) {
        memcpy(modifiers, record->positive, sizeof(record->positive));
    } else {
        memcpy(modifiers, record->negative, sizeof(record->negative));
        count = -count;
        sign = -1;
    }
    count = count > 9 ? 9 : count;
    for (s32 index = 0; index < count && modifiers[index].kind; ++index) {
        if (modifiers[index].kind == kind) {
            total += modifiers[index].value;
        }
    }
    return total * sign;
}
