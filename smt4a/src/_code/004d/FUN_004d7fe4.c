/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d7fe4` (_code @ 0x4d7fe4, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00573808; /* 0x573808 */


void FUN_004d7fe4(unsigned int *param_1)

{
  *param_1 = 9;
  *(unsigned char *)(param_1 + 0xb) = 0;
  *(unsigned int *)(DAT_00573808 + 0x3050) = 0;
  return;
}
