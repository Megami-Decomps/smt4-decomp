/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001dbdb0` (_code @ 0x1dbdb0, 0x7c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001ffadc(void);
extern int FUN_00210f94(void);
/* Supplied declaration required: FUN_0026bc28. */
/* Supplied declaration required: FUN_0028a5d0. */
/* Supplied declaration required: FUN_0028ab8c. */
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002d678c. */
/* Supplied declaration required: FUN_002f5b58. */


unsigned int FUN_001dbdb0(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  temp_v0 = FUN_001ffadc();
  if (temp_v0 != 0) {
    temp_v0 = FUN_00210f94();
    if (temp_v0 != 0) {
      FUN_002f5b58();
      FUN_002b8b78(3);
      *(unsigned int *)(param_1 + 0xd2c) = 6;
      *(unsigned int *)(param_1 + 0xd34) = 0;
      FUN_0026bc28();
      FUN_0028ab8c(1,0,0xffffffff);
      FUN_0028a5d0(1);
      temp_v1 = 2;
    }
  }
  else {
    FUN_002d678c(0);
  }
  return temp_v1;
}
