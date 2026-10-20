/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00323468` (_code @ 0x323468, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002be624(...);

extern unsigned char DAT_004102f0; /* 0x4102f0 */

/* Supplied declaration required: FUN_002be624. */


unsigned int FUN_00323468(int param_1,unsigned int param_2)

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
      FUN_002be624(param_2,"%s%s",temp_v2,temp_v0 + 0xc);
    }
    else {
      FUN_002be624(param_2,&DAT_004102f0,temp_v0 + 0xc);
    }
    temp_v1 = **(unsigned int **)(param_1 + 0x30);
  }
  return temp_v1;
}

} /* extern "C" */
