/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00152914` (_code @ 0x152914, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00167cf8(unsigned int, unsigned int, unsigned int);

extern int DAT_0057f3b0; /* 0x57f3b0 */

extern int FUN_00163e40(unsigned int);
extern int FUN_00167888(unsigned int);
/* Supplied declaration required: FUN_00167cf8. */


unsigned int FUN_00152914(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0057f3b0;
  if (((DAT_0057f3b0 != 0) &&
      (temp_v1 = FUN_00163e40(*(unsigned int *)(DAT_0057f3b0 + 0x48)), temp_v1 != 0)) &&
     (temp_v1 = FUN_00167888(*(unsigned int *)(temp_v0 + 0x48)), temp_v1 == param_1)) {
    FUN_00167cf8(*(unsigned int *)(temp_v0 + 0x48),param_2,param_3);
    return 1;
  }
  return 0;
}

} /* extern "C" */
