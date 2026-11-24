#include "shard/W6_W6Match5_RecordCallParameters.h"
#include "common.h"

extern "C" {


/* Forwards its four arguments to texTableRecordCallWithParams after (2, 0xB). */
void FUN_00167860(u32 c, u32 d, u32 e, u32 f)
{
    texTableRecordCallWithParams(2, 0xB, c, d, e, f);
}

} /* extern "C" */
