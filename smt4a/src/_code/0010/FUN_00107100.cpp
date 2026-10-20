#include "common.h"

extern "C" {

void onlineIpv4AddrFormat(void *object, u32 field, u32 a, u32 b);

/* Calls onlineIpv4AddrFormat with the object's first word. */
void FUN_00107100(u32 *object, u32 a, u32 b)
{
    onlineIpv4AddrFormat(object, object[0], a, b);
}

} /* extern "C" */
