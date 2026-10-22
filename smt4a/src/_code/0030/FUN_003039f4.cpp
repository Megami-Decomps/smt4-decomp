/* NON_MATCHING: retail emits 'push {r3, r4, r5, r6, r7, lr}'; compiler emits 'push {r3, r4, r5, lr}' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Object { u8 unk00[0x10]; u32 value, end; };
void _ZN9Obj55b1045resetEv(Object *object);
s32 wordRefCompare(const u32 *first, const u32 *second);
void FUN_002f4cd6(Object *object, u32 value, s32 order);
Object *FUN_003039f4(Object *object, Object *source) {
    if (object != source) {
        _ZN9Obj55b1045resetEv(object);
        u32 value = source->value;
        s32 order = wordRefCompare(&source->end, &value);
        FUN_002f4cd6(object, source->value, order);
    }
    return object;
}
}
