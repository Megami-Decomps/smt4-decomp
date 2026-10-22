/* NON_MATCHING: snapshot copies use scalar rather than retail VFP transfers and loop addressing differs. */
#include "shard/W9_W9Match7_ModifierLists.h"
#include <string.h>

/* Sum matching modifier kinds from the selected signed list, up to nine entries. */
extern "C" s32 FUN_0034a304(const AttributeModifierLists *record, s32 count, s32 kind)
{
    if (!record) {
        return 0;
    }
    AttributeModifier modifiers[10];
    s32 sign = 1;
    if (count >= 0) {
        memcpy(modifiers, record->positive, sizeof(record->positive));
    } else {
        memcpy(modifiers, record->negative, sizeof(record->negative));
        count = -count;
        sign = -1;
    }
    if (count > 9) {
        count = 9;
    }
    s32 total = 0;
    for (s32 index = 0; index < count && modifiers[index].kind; ++index) {
        if (modifiers[index].kind == kind) {
            total += modifiers[index].value;
        }
    }
    return total * sign;
}
