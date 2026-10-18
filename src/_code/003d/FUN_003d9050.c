/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d9050` (_code @ 0x3d9050, 0x11c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0044ea00; /* 0x44ea00 */

extern int FUN_002bffbc(unsigned int);
/* Supplied declaration required: FUN_002c0b1c. */
/* Supplied declaration required: FUN_002c1d3c. */


unsigned int FUN_003d9050(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002bffbc(9);
  if ((temp_v0 != 0) && (temp_v1 = *(int *)(param_1 + 8) + 1, *(unsigned int *)(param_1 + 8) = temp_v1, temp_v1 >= 3)
     ) {
    *(unsigned int *)(param_1 + 8) = 0;
  }
  FUN_002c1d3c(DAT_0044ea00,0);
  if (*(int *)(param_1 + 8) != 1) {
    if (*(int *)(param_1 + 8) != 2) {
      return 0;
    }
    FUN_002c0b1c(0xff7f);
    FUN_002c0b1c(0xff7f);
  }
  FUN_002c0b1c(0xff7f,0xff7f);
  return 0;
}
