/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00323660` (_code @ 0x323660, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004100e4; /* 0x4100e4 */

/* Supplied declaration required: FUN_002be7fc. */


unsigned int FUN_00323660(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = *(int *)(param_1 + 0x30);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v2 = *(int *)(*(int *)(param_1 + 0x48) + 4);
    if (temp_v2 != 0) {
      FUN_002be7fc(param_2,"%s%s",temp_v2,temp_v0 + 0xc);
    }
    else {
      FUN_002be7fc(param_2,&DAT_004100e4,temp_v0 + 0xc);
    }
    temp_v1 = **(unsigned int **)(param_1 + 0x30);
  }
  return temp_v1;
}
