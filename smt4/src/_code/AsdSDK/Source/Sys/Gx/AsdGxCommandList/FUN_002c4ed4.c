/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c4ed4` (_code @ 0x2c4ed4, 0xac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int DAT_00465060; /* 0x465060 */

/* Supplied declaration required: FUN_001260b0. */
/* Supplied declaration required: FUN_0013764c. */
/* Supplied declaration required: FUN_001376d8. */
/* Supplied declaration required: FUN_002bc7f4. */
/* Supplied declaration required: FUN_002bdb48. */
/* Supplied declaration required: FUN_002bef70. */
/* Supplied declaration required: FUN_002bf0dc. */


void FUN_002c4ed4(unsigned int *param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  FUN_002bc7f4(0x207,param_1 + 0xc2);
  if (DAT_00465060 != 0) {
    temp_v1 = *(int *)(DAT_00465060 * 4 + 0x4e399c);
    FUN_002bdb48();
    temp_v0 = temp_v1 + *(int *)(temp_v1 + 0x304) * 0x18;
    FUN_001376d8(temp_v0 + 4,temp_v0 + 8,temp_v0 + 0xc,temp_v0 + 0x10);
    *(unsigned int *)(temp_v1 + 0x30c) = 2;
    FUN_001260b0(temp_v1);
    *(int *)(temp_v1 + 0x304) = *(int *)(temp_v1 + 0x304) + 1;
  }
  param_1[0xc1] = 0;
  FUN_002bef70(*param_1);
  FUN_0013764c();
  param_1[0xc3] = 1;
  *(unsigned int **)(DAT_00465060 * 4 + 0x4e39a0) = param_1;
  DAT_00465060 = DAT_00465060 + 1;
  FUN_002bf0dc();
  return;
}
