/* armcc's own 8-byte copy helper: the compiler emits it (section i.__ARM_common_memcpy4_8) for the
 * copy of a 8-byte packed record and calls it instead of copying inline. This unit triggers it;
 * build.py keeps the helper's section under the unit's name. */
#include "common.h"

typedef __packed struct CopyRecord8 { u32 first; u32 second; } CopyRecord8;

extern "C" void arm_common_memcpy4_8_trigger(CopyRecord8 *dest, const CopyRecord8 *source)
{
    *dest = *source;
}
