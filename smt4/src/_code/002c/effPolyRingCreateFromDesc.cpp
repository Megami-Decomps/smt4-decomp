#include "common.h"

struct Obj2c7ad0 {
    u8 unk00[0x38];
    u32 kind;
    u8 unk3c[4];
    void *params;
};

extern "C" void *effPolyRingCreate(u32 kind, void *params);

/* Creates a ring effect from the kind and parameter block held by the object. */
extern "C" void effPolyRingCreateFromDesc(Obj2c7ad0 *obj)
{
    effPolyRingCreate((u16)obj->kind, obj->params);
}
