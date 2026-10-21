/* NON_MATCHING: compiler changes the register allocation and store/frame scheduling shown by retail. */
#include "common.h"
extern "C" {
struct Object { u8 unk00[0x10]; u64 time; s64 offset; };
void onlineTimeGetNow(u64 *time);
void FUN_002eb338(u64 *, const u64 *, s32);
/* Updates the timestamp and its signed offset. */
void FUN_002ef6e2(Object *object, s32 offset) {
    u64 now, result;
    onlineTimeGetNow(&now);
    FUN_002eb338(&result, &now, offset);
    object->time = result;
    object->offset = offset;
}
}
