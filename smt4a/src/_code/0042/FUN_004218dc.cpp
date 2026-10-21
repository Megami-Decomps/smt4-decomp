/* NON_MATCHING: constructor requires native C1/class and sized-vtable naming integration; unit renaming is outside this worker's permissions. */
#include "common.h"

struct PolymorphicDefaults {
    const void *vtable;
    u32 unk04;
    u32 unk08;
    u32 first[3]; // 0x0c
    u32 second[3]; // 0x18
    u32 third[3]; // 0x24
    f32 factor; // 0x30
    f32 components[3]; // 0x34
    u16 flags; // 0x40
};

extern "C" {
extern const u8 DAT_00557e74[];

void FUN_004218dc(PolymorphicDefaults *object)
{
    object->unk04 = 0;
    object->vtable = DAT_00557e74;
    object->unk08 = 0;
    object->third[0] = 0;
    object->third[1] = 0;
    object->third[2] = 0;
    object->factor = 1.0f;
    object->components[0] = 0.0f;
    object->components[1] = 0.0f;
    object->components[2] = 0.0f;
    object->flags = 7;
    object->first[0] = 0;
    object->second[0] = 0;
    object->first[1] = 0;
    object->second[1] = 0;
    object->first[2] = 0;
    object->second[2] = 0;
}
}
