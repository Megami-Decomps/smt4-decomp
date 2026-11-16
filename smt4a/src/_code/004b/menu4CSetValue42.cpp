#include "shard/Shard004B.h"

extern "C" {

extern void __ARM_common_memcpy4_6(u8 *dest, const void *src);

void menu4CSetValue42(Menu4C *obj, const void *src)
{
    __ARM_common_memcpy4_6(obj->value42, src);
    obj->flags = obj->flags | 0x10;
}

} /* extern "C" */
