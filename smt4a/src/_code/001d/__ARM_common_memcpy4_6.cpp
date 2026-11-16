/* armcc's own 6-byte copy helper: the compiler emits it (section i.__ARM_common_memcpy4_6) for the
 * copy of a 6-byte packed record and calls it instead of copying inline. This unit triggers it;
 * build.py keeps the helper's section under the unit's name. */
#include "common.h"

typedef __packed struct CopyRecord6 { u32 word; u16 half; } CopyRecord6;

extern "C" void arm_common_memcpy4_6_trigger(CopyRecord6 *dest, const CopyRecord6 *source)
{
    *dest = *source;
}
