/* NON_MATCHING: retail reloads the slot count on every iteration and loads the vtable before the prologue; armcc hoists the count and schedules the explicit vtable store later. */
#include "common.h"

struct ResetCallbackObject {
    void *vtable; // 0x00
    u8 unk04[0x2c];
    void *resource; // 0x30
    u8 unk34[0x10];
    u32 first[4]; // 0x44
    u32 second[4]; // 0x54
    struct Pair { u32 first, second; } pairs[4]; // 0x64
    u32 third[4]; // 0x84
    u8 unk94[0x79];
    u8 count; // 0x10d
    u8 active; // 0x10e
};
extern "C" u8 DAT_00421a80[];

// Reset active callback slots and release the object's resource reference.
extern "C" ResetCallbackObject *FUN_003793d8(ResetCallbackObject *object)
{
    object->vtable = DAT_00421a80;
    if (object->active) {
        object->active = 0;
        for (s32 i = 0; i < object->count; ++i) {
            object->first[i] = 0;
            object->second[i] = 0;
            object->pairs[i].first = 0;
            object->pairs[i].second = 0;
            object->third[i] = 0;
        }
    }
    if (object->resource)
        object->resource = NULL;
    return object;
}
