#include "common.h"

extern "C" {

void FUN_002e3f68(void);
void __aeabi_vec_delete(u32 object, void (*callback)(void));

/* Runs the deleting destructor on the object this holder points at, passing FUN_002e3f68 as the callback. */
u32 *holderDeleteObject(u32 *holder)
{
    __aeabi_vec_delete(*holder, FUN_002e3f68);
    return holder;
}

} /* extern "C" */
