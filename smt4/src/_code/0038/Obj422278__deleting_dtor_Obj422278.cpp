#include <stddef.h>
#include "classes/WindowStatus.h"
#include "shard/VObject.h"

extern "C" {
extern u32 _ZTV9Obj422278[];
void *handleOwnerClose(void *owner);
void asdMemFreeNonNull(void *block);
}

// Close the embedded handle owner before freeing the status object.
extern "C" void _ZN9Obj422278D0Ev(Obj422278 *self)
{
    ((VObject *)self)->vtbl = _ZTV9Obj422278 + 2;
    void *owner = handleOwnerClose(&self->value);
    asdMemFreeNonNull((u8 *)owner - offsetof(Obj422278, value));
}
