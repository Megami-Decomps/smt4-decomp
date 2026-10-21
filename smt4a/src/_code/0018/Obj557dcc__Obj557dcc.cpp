/* NON_MATCHING: retail stores incoming r1 at byte 4 despite the configured no-argument constructor symbol; original constructor signature needs correction. */
#include "shard/W5_W5Match5_ResourceOwner.h"

extern "C" void FUN_0019f888(Obj557dcc *object, u32 value);

Obj557dcc::Obj557dcc()
    : begin(NULL), end(NULL), capacityEnd(NULL)
{
    FUN_0019f888(this, 0);
}
