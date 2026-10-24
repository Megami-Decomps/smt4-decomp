#include "common.h"

extern "C" {

struct Obj;
struct Owner {
    /* 0x0 */ u8 unk00[4];
    /* 0x4 */ Obj *obj;
};

u32 criticalSectionReadValue38(Obj *obj, u32 *out);

/* Reads the owner's object value (thunk into criticalSectionReadValue38). */
u32 criticalSectionReadValue38Thunk(Owner *owner, u32 *out)
{
    return criticalSectionReadValue38(owner->obj, out);
}

} /* extern "C" */
