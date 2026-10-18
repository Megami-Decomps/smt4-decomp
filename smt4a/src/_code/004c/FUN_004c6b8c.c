/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c6b8c` (_code @ 0x4c6b8c, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00571408; /* 0x571408 */
extern unsigned int DAT_0057140c; /* 0x57140c */

extern int FUN_004bd098(unsigned int);


unsigned int FUN_004c6b8c(unsigned int *param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if (((*param_1 & DAT_00571408) == 0 && (param_1[1] & DAT_0057140c) == 0) ||
     (temp_v0 = FUN_004bd098(param_1[0xff]), -1 < temp_v0)) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = 1;
  }
  return temp_v1;
}
