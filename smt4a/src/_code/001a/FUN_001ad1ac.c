/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ad1ac` (_code @ 0x1ad1ac, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f4c4; /* 0x57f4c4 */

extern int FUN_001ab8c0(void);
/* Supplied declaration required: FUN_001ad7cc. */


unsigned int FUN_001ad1ac(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = DAT_0057f4c4;
  if (DAT_0057f4c4 == 0) {
    temp_v1 = 0;
  }
  else {
    if ((*(int *)(DAT_0057f4c4 + 0x5e8) == 0) || (temp_v2 = FUN_001ab8c0(), temp_v2 == 0)) {
      return 1;
    }
    temp_v1 = *(unsigned int *)(*(int *)(temp_v0 + 0x5e8) + 8);
    FUN_001ad7cc(temp_v1,*(unsigned int *)(param_2 * 4 + 0x57f538),param_1);
    if (param_2 == 0) {
      *(float *)(param_1 + 8) = *(float *)(param_1 + 8) + *(float *)(temp_v0 + 0x644);
    }
  }
  return temp_v1;
}
