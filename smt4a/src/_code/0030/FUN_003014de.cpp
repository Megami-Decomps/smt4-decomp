#include "common.h"
extern "C" {
struct Object { u8 unk00[8]; void *buffer; };
const u8 *onlineBufferGetData(void *buffer);
/* Tests the online buffer's two-byte signature. */
s32 FUN_003014de(Object *object) {
    if (onlineBufferGetData(object->buffer)[0] == 0xF5 &&
        onlineBufferGetData(object->buffer)[1] == 0xD0) return 1;
    return 0;
}
}
