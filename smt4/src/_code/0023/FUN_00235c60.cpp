#include "common.h"

extern "C" {

extern u8 DAT_00421d18;

/* Installs the vtable at DAT_00421d18. */
void FUN_00235c60(const void **obj)
{
    *obj = &DAT_00421d18;
}

} /* extern "C" */
