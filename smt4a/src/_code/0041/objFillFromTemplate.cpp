#include "common.h"

extern "C" {

int rt_vec_dtor(void *dest, u8 *source, int size, int flags);

/* Fills the object block at +4 from the 0x548 bytes at 0x3f2c00; returns the object. */
void *objFillFromTemplate(u8 *object)
{
    rt_vec_dtor(object + 4, (u8 *)0x3f2c00, 0x548, 2);
    return object;
}

} /* extern "C" */
