/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eab08` (_code @ 0x2eab08, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00594b30; /* 0x594b30 */
extern unsigned int DAT_00594b34; /* 0x594b34 */


void FUN_002eab08(unsigned int *param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = DAT_00594b30;
  param_1[1] = DAT_00594b34;
  *param_1 = temp_v0;
  return;
}
