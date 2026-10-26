/* NON_MATCHING: compare operand order and the conditional store differ (retail: cmp r1, r2; movgt; str). */
#include "common.h"

struct ObjFUN_00466458 {
    u8 unk00[0x16C];
    s32 current;
    s32 limit;
};

extern "C" {
void FUN_00466458(ObjFUN_00466458 *object, s32 amount)
{
    amount = amount + object->current;
    object->current = amount;
    object->current = amount;
    if (object->limit < amount) {
        amount = object->limit;
        object->current = amount;
    }
}
}
