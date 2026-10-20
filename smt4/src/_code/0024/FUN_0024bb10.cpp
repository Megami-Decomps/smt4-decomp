/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024bb10` (_code @ 0x24bb10, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_texTable; /* 0x44ea28 */


unsigned char FUN_0024bb10(int param_1)

{
  return *(int *)(g_texTable + param_1 * 0x18) != 0;
}

} /* extern "C" */
