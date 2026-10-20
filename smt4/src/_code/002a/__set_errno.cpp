/* Matches with --cpu=5TE: the runtime library was built for an older core than the game. */
#include "common.h"

extern "C" {

/* __aeabi_errno_addr: the address of errno. */
extern s32 *__aeabi_errno_addr(void);

/* Stores `error` into errno. */
void __set_errno(s32 error)
{
    *__aeabi_errno_addr() = error;
}

} /* extern "C" */
