#include "common.h"

extern "C" {

int nw_ut_internal_LinkListImpl_erase_2B743C(u32 list, int node);

void linkListEraseObject(u32 list, int object)
{
    nw_ut_internal_LinkListImpl_erase_2B743C(list, object + 4);
}

} /* extern "C" */
