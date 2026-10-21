/* NON_MATCHING: retail emits 'push {r2, r3, r4, r5, r6, lr}'; compiler emits 'push {r4, r5, lr}' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Pair { u32 first, second; };
struct Object { u8 unk00[0xC4]; u8 child; };
void FUN_002efcf2(Pair *output, const Pair *source);
void FUN_0012092a(void *object, u32 difference);
u32 FUN_001242e2(void *object);
void FUN_00107608(Object *object, u32 result);
void FUN_002efcc4(Object *object, const u32 *value, const Pair *source) {
    Pair copy;
    FUN_002efcf2(&copy, source);
    FUN_0012092a(&object->child, *value - copy.first);
    FUN_00107608(object, FUN_001242e2(&object->child));
}
}
