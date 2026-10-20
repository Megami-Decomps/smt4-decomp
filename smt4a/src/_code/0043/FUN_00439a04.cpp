#include "common.h"

extern "C" {

extern u32 wstrlen(const u16 *str);
extern u32 FUN_00439a28(const u16 *str, u32 size);

/* Sends a wide string (with its terminator) to the service; a NULL string sends size 0. */
u32 FUN_00439a04(const u16 *str)
{
    return FUN_00439a28(str, str != NULL ? wstrlen(str) + 1 : 0);
}

} /* extern "C" */
