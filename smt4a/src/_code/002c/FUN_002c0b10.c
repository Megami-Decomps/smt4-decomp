/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c0b10` (_code @ 0x2c0b10, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f390; /* 0x57f390 */

/* Supplied declaration required: FUN_004bb1bc. */
extern int FUN_004bb308(unsigned int);


unsigned int FUN_002c0b10(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = DAT_0057f390;
  temp_v2 = 0;
  if ((DAT_0057f390 != 0 && param_1 != 0) &&
     (temp_v1 = FUN_004bb308(*(unsigned int *)(DAT_0057f390 + 4)), temp_v1 != 0)) {
    FUN_004bb1bc(*(unsigned int *)(temp_v0 + 4),param_1);
    temp_v2 = 1;
  }
  return temp_v2;
}
