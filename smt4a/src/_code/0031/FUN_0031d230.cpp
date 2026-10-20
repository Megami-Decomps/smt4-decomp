/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031d230` (_code @ 0x31d230, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f698; /* 0x57f698 */

extern int FUN_0018719c(unsigned int);


unsigned int FUN_0031d230(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if ((*(int *)((*(int *)((unsigned char *)&DAT_0057f698 + 0x4)) + 0x21e14) != 0) ||
     (temp_v0 = FUN_0018719c(0x528), temp_v1 = 0, temp_v0 != 0)) {
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
