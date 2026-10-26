#include "common.h"
#include "code/Code002a_Smt4a.h"
extern "C" {
struct Object { u8 unk00[0x28]; u8 child; u8 unk29[0x39]; u8 blocked; };
s32 FUN_00340f88(void *object);
/* Applies the operation to the embedded object when not blocked. */
s32 resourceRunEmbeddedOperationIfUnblocked(Object *object) {
    if (object->blocked != 0) return 0;
    return FUN_00340f88(&object->child);
}
}
