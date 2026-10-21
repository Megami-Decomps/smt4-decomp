#include "common.h"

extern "C" {

extern u8 DAT_0044e098;

void sysSetStateByte(u8 value)
{
    DAT_0044e098 = value;
}

} /* extern "C" */
