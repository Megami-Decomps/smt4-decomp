/* NON_MATCHING: compiler changes frame allocation and base-pointer scheduling around the two constructors. */
#include "common.h"
extern "C" {
extern const u8 DAT_00558ac4, DAT_0055927c;
struct TimedBase { const void *vtable; u8 unk04[0x18]; u32 value; u64 time; };
void onlineTimeGetNow(u64 *time);
TimedBase *FUN_002f84f0(void *object);
/* Initializes both base subobjects, including the first one's timestamp. */
void *FUN_002f2fe8(void *object, u32 value) {
    u64 now;
    onlineTimeGetNow(&now);
    TimedBase *first = FUN_002f84f0((u8 *)object + 8);
    first->value = value;
    first->vtable = &DAT_00558ac4;
    first->time = now;
    TimedBase *second = FUN_002f84f0(first + 1);
    second->value = value;
    second->vtable = &DAT_0055927c;
    return (u8 *)second - 48;
}
}
