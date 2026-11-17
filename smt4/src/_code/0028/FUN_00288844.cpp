#include "common.h"
#include "camp/Unite/UniteWork.h"

extern "C" {

int texTableRecordCallWithParams(int a, int b, int c, u32 d, u32 e, u32 f);

void FUN_00288844(u32 a, u32 b, u32 c)
{
    texTableRecordCallWithParams(2, 0x13, 9, a, b, c);
}

} /* extern "C" */
