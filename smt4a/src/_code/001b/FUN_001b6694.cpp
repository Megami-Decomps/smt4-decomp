/* NON_MATCHING: the third argument is copied (mov r2, r1) before the adds in retail; here it is computed directly. */
#include "common.h"

extern "C" {

extern void nw_ut_internal_LinkListImpl_insert(void *list, void *position, void *node);

/* Forwards to the function that follows it in the binary. */
void FUN_001b6694(void *manager, void *node)
{
    u8 *list = (u8 *)manager + 476;

    nw_ut_internal_LinkListImpl_insert(list, list + 4, (u8 *)node + 4);
}

} /* extern "C" */
