/* NON_MATCHING: compiler uses a larger address-taken-argument frame than retail. */
#include "common.h"
extern "C" {
struct Object { u8 unk00[0x10]; const u32 *value; };
void FUN_00307d38(u32 *output, Object *object, const u32 *value);
/* Converts the referenced scalar using the current object. */
void FUN_002fd73c(Object *object, u32 unusedA, u32 unusedB, u32 output) {
    u32 value = *object->value;
    FUN_00307d38(&output, object, &value);
}
}
