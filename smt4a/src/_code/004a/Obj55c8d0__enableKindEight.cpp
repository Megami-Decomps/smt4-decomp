#include "common.h"
#include "classes/Obj55c8d0.h"

struct Object004a5328 {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 enabled;
    /* 0x11 */ u8 unk11[3];
    /* 0x14 */ u32 kind;
    /* 0x18 */ u32 value;
};

extern "C" {

/* Enables the object with kind eight and clears the value. */
}

void Obj55c8d0::enableKindEight()
{
    Object004a5328 * object = reinterpret_cast<Object004a5328 *>(this);
    object->enabled = 1;
    object->kind = 8;
    object->value = 0;
}
