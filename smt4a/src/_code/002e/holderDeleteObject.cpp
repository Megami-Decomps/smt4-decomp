#include "common.h"

extern "C" {

void FUN_002e3f68(void);
void deletingDtor_002e56ec(u32 object, void (*callback)(void));

/* Runs the deleting destructor on the object this holder points at, passing FUN_002e3f68 as the callback. */
u32 *holderDeleteObject(u32 *holder)
{
    deletingDtor_002e56ec(*holder, FUN_002e3f68);
    return holder;
}

} /* extern "C" */
