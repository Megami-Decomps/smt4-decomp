/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015d0b4` (_code @ 0x15d0b4, 0x94 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004ead10; /* 0x4ead10 */

/* Supplied declaration required: FUN_0015d568. */
/* Supplied declaration required: FUN_0015d5b4. */
/* Supplied declaration required: FUN_0015e1a4. */
/* Supplied declaration required: FUN_002a2d50. */
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */


unsigned int FUN_0015d0b4(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  
  FUN_002c3aa8(param_1 + 0x44);
  temp_v0 = param_1 + param_2 * 8;
  if (*(int *)(temp_v0 + 0x34) != 0) {
    FUN_0015d568();
  }
  if (*(int *)(temp_v0 + 0x38) != 0) {
    FUN_0015d5b4();
  }
  *(unsigned int *)(temp_v0 + 0x34) = 0;
  *(unsigned int *)(temp_v0 + 0x38) = 0;
  FUN_002a2d50(&DAT_004ead10,param_2,0);
  FUN_002c3a24(param_1 + 0x44);
  FUN_002c3aa8(param_1 + 0x44);
  *(unsigned int *)(temp_v0 + 0x38) = param_3;
  FUN_0015e1a4(param_3);
  FUN_002a2d50(&DAT_004ead10,param_2,1);
  FUN_002c3a24(param_1 + 0x44);
  return 1;
}
