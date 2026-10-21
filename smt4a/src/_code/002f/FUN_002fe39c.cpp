/* NON_MATCHING: compiler uses different stack-frame allocation and instruction scheduling. */
#include "common.h"
extern "C" {
struct Object { u8 unk00[0x70]; u64 time; };
void onlineTimeGetNow(u64 *time);
void FUN_002eb338(u64 *output, const u64 *time, const void *context);
/* Updates the object's timestamp from the current time and context. */
void FUN_002fe39c(Object *object, const void *context) {
    u64 time;
    onlineTimeGetNow(&time);
    u64 result;
    FUN_002eb338(&result, &time, context);
    object->time = result;
}
}
