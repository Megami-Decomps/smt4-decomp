#include <stddef.h>
#include "classes/Obj55c920.h"
#include "shard/VObject.h"

extern "C" {
extern u32 _ZTV9Obj55c920[];
Obj55ca08 *_ZN9Obj55ca08D1Ev(Obj55ca08 *self);
void asdOperatorDelete(void *block);
}

// Destroy the embedded selection interface before freeing the view.
extern "C" void _ZN9Obj55c920D0Ev(Obj55c920 *self)
{
    ((VObject *)self)->vtbl = _ZTV9Obj55c920 + 2;
    Obj55ca08 *selection = _ZN9Obj55ca08D1Ev(&self->touchSelection);
    asdOperatorDelete((u8 *)selection - offsetof(Obj55c920, touchSelection));
}
