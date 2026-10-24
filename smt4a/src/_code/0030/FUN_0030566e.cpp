/* NON_MATCHING: compiler uses different stack-frame allocation and instruction scheduling. */
#include "common.h"
extern "C" {
struct Object { u8 unk00[0x50]; u64 value; u64 sourceValue; };
u64 FUN_002ecfe4(void *source);
void _ZN15OnlineTimestampC1Ev(u64 *result);
/* Reads the source value and stores the converted scalar. */
void FUN_0030566e(Object *object, void *source) {
    object->sourceValue = FUN_002ecfe4(source);
    u64 result;
    _ZN15OnlineTimestampC1Ev(&result);
    object->value = result;
}
}
