#include "common.h"
#include "classes/Obj4223f8.h"

struct Object003a9424 {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 enabled;
    /* 0x11 */ u8 unk11[3];
    /* 0x14 */ u32 kind;
    /* 0x18 */ u32 value;
};

/* Enables the object with kind eight and clears the value. */
void Obj4223f8::enableKindEight()
{
    Object003a9424 *object = reinterpret_cast<Object003a9424 *>(this);
    object->enabled = 1;
    object->kind = 8;
    object->value = 0;
}
