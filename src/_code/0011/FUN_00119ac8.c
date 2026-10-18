/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00119ac8` (_code @ 0x119ac8, 0x7c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043ded0; /* 0x43ded0 */

extern int FUN_00126220(unsigned int);
/* Supplied declaration required: FUN_00126230. */
/* Supplied declaration required: FUN_00126330. */
extern int FUN_002b755c(unsigned int);
extern int FUN_002bf41c(unsigned int);


unsigned int FUN_00119ac8(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0043ded0;
  if ((((DAT_0043ded0 != 0) &&
       (temp_v1 = FUN_002bf41c(*(unsigned int *)(DAT_0043ded0 + 0x30)), temp_v1 != 0)) &&
      (temp_v1 = FUN_002b755c(*(unsigned int *)(temp_v0 + 0x30)), temp_v1 == param_1)) &&
     (temp_v1 = FUN_00126220(*(unsigned int *)(temp_v0 + 0x30)), temp_v1 == 0)) {
    FUN_00126330(*(unsigned int *)(temp_v0 + 0x30),1);
    FUN_00126230(*(unsigned int *)(temp_v0 + 0x30),param_2,param_3);
    return 1;
  }
  return 0;
}
