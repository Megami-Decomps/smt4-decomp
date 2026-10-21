/* NON_MATCHING: retail emits 'movs r4, r1'; compiler emits 'cmp r1, #0' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Value { u8 unk00[0x38]; void *reference; };
struct Object { u8 unk00[0x4C]; void *target; };
void sharedRefRelease(void *reference);
void FUN_001156bc(void **target, Value *value);
void FUN_002f30e0(Object *object, Value *value) {
    if (value) {
        if (value->reference) sharedRefRelease(value->reference);
        FUN_001156bc(&object->target, value);
    }
}
}
