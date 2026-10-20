#include "shard/Shard004B.h"

extern "C" {

extern void FUN_001d1438(u8 *dest, const void *src);

void menu4CSetValue42(Menu4C *obj, const void *src)
{
    FUN_001d1438(obj->value42, src);
    obj->flags = obj->flags | 0x10;
}

} /* extern "C" */
