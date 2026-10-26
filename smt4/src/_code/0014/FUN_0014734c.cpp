/* NON_MATCHING: mid-flow mov r0, r0 (nop) in a leaf with no lr save; not a removed call, cause unknown. */
#include "classes/Obj68Flags.h"

static void setBlockMode(Obj68Block *block, u16 mode)
{
    block->modes = ((mode << 2) & 0xC) | (block->modes & 0xFFF3);
}

extern "C" {
void FUN_0014734c(Obj68 *object, u16 mode)
{
    setBlockMode(object->block, mode);
}
}
