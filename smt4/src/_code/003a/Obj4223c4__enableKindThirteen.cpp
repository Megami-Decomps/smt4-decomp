#include "common.h"
#include "classes/Obj4223c4.h"

struct Obj3a7eac {
    u8 unk00[0x10];
    u8 enabled;
    u8 unk11[3];
    s32 kind;
    s32 value;
};

/* Initialises the object: enabled, kind 13, value 0. */
void Obj4223c4::enableKindThirteen()
{
    Obj3a7eac *obj = reinterpret_cast<Obj3a7eac *>(this);
    obj->enabled = 1;
    obj->kind = 13;
    obj->value = 0;
}
