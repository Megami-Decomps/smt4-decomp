#include "common.h"

extern "C" {

extern void nw_ut_internal_LinkListImpl_erase_2B743C(void *list, void *node);

/* Forwards to the function that follows it in the binary. */
void linkListEraseManagerNode(void *manager, void *node)
{
    u8 *list = (u8 *)manager + 476;

    nw_ut_internal_LinkListImpl_erase_2B743C(list, (u8 *)node + 4);
}

} /* extern "C" */
