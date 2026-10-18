/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e6f4c` (_code @ 0x3e6f4c, 0x6c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0014d04c. */
/* Supplied declaration required: FUN_002a7fc4. */
extern unsigned int FUN_003e6374(void);
/* Supplied declaration required: FUN_003e6380. */
/* Supplied declaration required: FUN_003e646c. */
/* Supplied declaration required: FUN_003e64a4. */
/* Supplied declaration required: FUN_003e64cc. */
/* Supplied declaration required: FUN_003e64f0. */


unsigned int FUN_003e6f4c(int param_1,unsigned int *param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_s0; 7 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int in_s0;
  
  FUN_0014d04c(*(unsigned int *)(param_1 + 4),param_3);
  temp_v0 = FUN_003e6374();
  FUN_003e64f0();
  *param_2 = in_s0;
  temp_v1 = temp_v0;
  FUN_003e64cc();
  *(char *)((int)param_2 + 9) = (char)temp_v1;
  temp_v1 = temp_v0;
  FUN_003e64a4();
  *(char *)((int)param_2 + 10) = (char)temp_v1;
  FUN_003e6380(temp_v0,(int)param_2 + 0xb,param_2 + 3,2);
  FUN_003e646c(temp_v0);
  FUN_002a7fc4(param_2 + 1,temp_v0);
  return 1;
}
