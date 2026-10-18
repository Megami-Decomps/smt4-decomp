/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00200c80` (_code @ 0x200c80, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern char s_normal_00433a70[7]; /* 0x433a70 */


char * FUN_00200c80(int param_1)

{
  if (param_1 >= 0xe) {
    param_1 = 0;
  }
  return s_normal_00433a70 + param_1 * 0x30;
}
