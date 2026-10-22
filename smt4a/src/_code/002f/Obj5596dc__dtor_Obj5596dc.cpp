#include "classes/Obj5596dc.h"

extern "C" {

extern const u8 _ZTV9Obj5596dc[];
u8 *destroyObj0055ae64(u8 *member);


/* C ABI retained: retail recovers the owner from the embedded destructor's returned this. */
u8 *_ZN9Obj5596dcD1Ev(Obj5596dc *self)
{
    u8 *member;

    *(const void **)self = _ZTV9Obj5596dc + 8;
    member = destroyObj0055ae64(self->member08);
    return member - 8;
}

} /* extern "C" */
