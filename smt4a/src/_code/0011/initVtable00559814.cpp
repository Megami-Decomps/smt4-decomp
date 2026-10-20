#include "common.h"

extern "C" {

extern const u8 DAT_00559814[];  /* vtable */
const void **sharedRefInit(void);

/* Stores the vtable at 0x00559814 into the object returned by sharedRefInit. */
void initVtable00559814(void)
{
    const void **object = sharedRefInit();
    *object = DAT_00559814;
}

} /* extern "C" */
