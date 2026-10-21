#include "common.h"
extern "C" {
struct Object { u8 unk00[0x28]; u8 child; u8 unk29[0x39]; u8 blocked; };
s32 FUN_0032c494(void *object);
/* Applies the operation to the embedded object when not blocked. */
s32 FUN_002a4878(Object *object) {
    if (object->blocked != 0) return 0;
    return FUN_0032c494(&object->child);
}
}
