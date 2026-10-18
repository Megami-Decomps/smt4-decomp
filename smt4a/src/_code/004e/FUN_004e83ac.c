/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e83ac` (_code @ 0x4e83ac, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00571148; /* 0x571148 */
extern unsigned int DAT_0057114c; /* 0x57114c */
extern unsigned int DAT_005711b0; /* 0x5711b0 */
extern unsigned int DAT_005711b4; /* 0x5711b4 */

/* Supplied declaration required: FUN_003f0e20. */


unsigned int FUN_004e83ac(int *param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  
  temp_v0 = *param_1;
  FUN_003f0e20(temp_v0,param_3);
  if (temp_v0 != 0) {
    param_3 = (int)*(short *)(temp_v0 + 0x6e);
  }
  if (*(int *)(param_2 + param_3 * 0x10 + 0x9e4) == 0) {
    puVar3 = (unsigned int *)(*(int *)(*param_1 + 0x1ffc) + param_3 * 0x408);
    temp_v1 = *puVar3;
    temp_v2 = puVar3[1];
    if ((((DAT_0057114c & temp_v2) != 0 || (DAT_00571148 & temp_v1) != 0) &&
        ((temp_v1 & DAT_005711b0) == 0 && (temp_v2 & DAT_005711b4) == 0)) &&
       (*(int *)(*(int *)(*param_1 + 0x1ffc) + param_3 * 0x408 + 0x158) < 1)) {
      return 1;
    }
  }
  return 0;
}
