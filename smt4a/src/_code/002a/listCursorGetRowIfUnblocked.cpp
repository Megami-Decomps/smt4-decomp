#include "common.h"
extern "C" {
struct Object { u8 unk00[0x62]; u8 blocked; };
s32 listSourceGetFirst(Object *object);
/* Applies the operation only while the object is not blocked. */
s32 listCursorGetRowIfUnblocked(Object *object) {
    if (object->blocked != 0) return 0;
    return listSourceGetFirst(object);
}
}
