#include "common.h"

extern "C" {

int rt_vec_delete(void);
int asdOperatorDelete(void);

void __aeabi_vec_delete(void)
{
    rt_vec_delete();
    asdOperatorDelete();
}

} /* extern "C" */
