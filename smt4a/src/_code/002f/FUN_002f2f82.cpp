/* NON_MATCHING: compiler uses different address construction, argument registers or stack-frame scheduling than retail. */
#include "common.h"
extern "C" {
struct Time { u64 value; };
struct TimeAdapter { u8 storage[40]; };
struct Object { u8 unk00[0x30]; u32 first; u32 second; };
void onlineTimeGetNow(Time *time);
void _ZN9Obj55927c7vfunc10EP12Obj55927cArg(TimeAdapter *, void *, Time *);
void FUN_002f8264(TimeAdapter *);
void FUN_002f84b0(void *);
/* Converts the current time and updates the object's time member. */
void FUN_002f2f82(Object *object) {
    Time now;
    TimeAdapter adapter;
    onlineTimeGetNow(&now);
    _ZN9Obj55927c7vfunc10EP12Obj55927cArg(&adapter, &object->first, &now);
    FUN_002f84b0(&object->second);
    FUN_002f8264(&adapter);
}
}
