#include "common.h"

extern "C" {

extern u8 DAT_00559b3c; /* vtable */
extern u8 DAT_00594b24; /* registry the object announces itself to */

extern void onlineObjectListRemove(u8 *registry, void *object);
extern void FUN_0012a224(void *object);

/* Constructor: sets the vtable, registers the object and runs the base constructor. */
void *FUN_0012a290(u32 *object)
{
    *object = (u32)&DAT_00559b3c;
    onlineObjectListRemove(&DAT_00594b24, object);
    FUN_0012a224(object);
    return object;
}

} /* extern "C" */
