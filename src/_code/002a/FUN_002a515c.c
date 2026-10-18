/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a515c` (_code @ 0x2a515c, 0x78 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dfc0; /* 0x43dfc0 */

/* Supplied declaration required: FUN_002ae074. */
extern int FUN_002ae16c(void);


unsigned int FUN_002a515c(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = DAT_0043dfc0;
  if (DAT_0043dfc0 == 0) {
    temp_v1 = 0;
  }
  else {
    if ((*(int *)(DAT_0043dfc0 + 0x5e4) == 0) || (temp_v2 = FUN_002ae16c(), temp_v2 == 0)) {
      return 1;
    }
    temp_v1 = *(unsigned int *)(*(int *)(temp_v0 + 0x5e4) + 8);
    FUN_002ae074(temp_v1,*(unsigned int *)(param_2 * 4 + 0x43e048),param_1);
    if (param_2 == 0) {
      *(float *)(param_1 + 8) = *(float *)(param_1 + 8) + *(float *)(temp_v0 + 0x640);
    }
  }
  return temp_v1;
}
