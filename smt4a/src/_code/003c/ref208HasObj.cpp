#include "shard/Shard003C.h"

extern "C" {

extern Ref208B g_commonBg;

u8 ref208HasObj(void)
{
    return g_commonBg.obj != NULL;
}

} /* extern "C" */
