#include "common.h"

extern "C" {

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct Owner {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 handle;
} Owner;

typedef struct Object {
    /* 0x00 */ u32 vtable;
    /* 0x04 */ Owner *owner;
    /* 0x08 */ u8 unk08[0x88];
    /* 0x90 */ u8 first[0xC];
    /* 0x9C */ Vec3 vector;
    /* 0xA8 */ u8 second[0xC];
} Object;

void asdOperatorDelete(Object *object);
void FUN_003fd76c(u32 handle, u8 *data);
void FUN_003fdb18(u32 handle, Vec3 vector);
void FUN_003fe9b4(u32 handle, u8 *data);

/* Deleting destructor: sets the vtable, hands the object's data to its owner's handle, then frees it. */
void FUN_0041be60(Object *object, u32 vtable)
{
    u32 handle;

    object->vtable = vtable;
    handle = object->owner->handle;
    FUN_003fd76c(handle, object->first);
    FUN_003fdb18(handle, object->vector);
    FUN_003fe9b4(handle, object->second);
    asdOperatorDelete(object);
}

} /* extern "C" */
