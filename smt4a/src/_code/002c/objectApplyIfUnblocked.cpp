#include "common.h"
extern "C" {
struct Object { u8 unk00[0x62]; u8 blocked; };
s32 FUN_00340f80(Object *object);
/* Applies the operation when the object is not blocked. */
s32 objectApplyIfUnblocked(Object *object) {
    if (object->blocked != 0) return 0;
    return FUN_00340f80(object);
}
}
