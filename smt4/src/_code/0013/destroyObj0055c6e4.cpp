#include "common.h"

extern "C" {

int FUN_00141710(u32 *obj, int flag);
int asdMemFree(void *ptr);
int FUN_002c6a10(u32 handle);

extern u8 DAT_004221dc;

/* Destructor-style teardown: restores the vtable, then releases the owned resources. */
u32 *destroyObj0055c6e4(u32 *obj)
{
    *obj = (u32)&DAT_004221dc;
    FUN_00141710(obj, 1);
    if (obj[0x13] != 0) {
        FUN_002c6a10(obj[0x13]);
        obj[0x13] = 0;
    }
    if (obj[0x12] != 0) {
        asdMemFree((void *)obj[0x12]);
        obj[0x12] = 0;
    }
    if (obj[8] != 0) {
        asdMemFree((void *)obj[8]);
        obj[8] = 0;
    }
    return obj;
}

} /* extern "C" */
