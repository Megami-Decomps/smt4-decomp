/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00153f74` (_code @ 0x153f74, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int DAT_005b3ff4; /* 0x5b3ff4 */

/* Supplied declaration required: FUN_00167568. */
/* Supplied declaration required: FUN_0017cdb4. */
/* Supplied declaration required: FUN_0017cff0. */
/* Supplied declaration required: FUN_0017d920. */
/* Supplied declaration required: FUN_0017dd84. */
/* Supplied declaration required: FUN_0017df1c. */
/* Supplied declaration required: FUN_0017dfa8. */


void FUN_00153f74(unsigned int *param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  FUN_0017d920(0x207,param_1 + 0xc2);
  if (DAT_005b3ff4 != 0) {
    temp_v1 = *(int *)(DAT_005b3ff4 * 4 + 0x63fd44);
    FUN_0017dd84();
    temp_v0 = temp_v1 + *(int *)(temp_v1 + 0x304) * 0x18;
    FUN_0017dfa8(temp_v0 + 4,temp_v0 + 8,temp_v0 + 0xc,temp_v0 + 0x10);
    *(unsigned int *)(temp_v1 + 0x30c) = 2;
    FUN_00167568(temp_v1);
    *(int *)(temp_v1 + 0x304) = *(int *)(temp_v1 + 0x304) + 1;
  }
  param_1[0xc1] = 0;
  FUN_0017cff0(*param_1);
  FUN_0017df1c();
  param_1[0xc3] = 1;
  *(unsigned int **)(DAT_005b3ff4 * 4 + 0x63fd48) = param_1;
  DAT_005b3ff4 = DAT_005b3ff4 + 1;
  FUN_0017cdb4();
  return;
}
