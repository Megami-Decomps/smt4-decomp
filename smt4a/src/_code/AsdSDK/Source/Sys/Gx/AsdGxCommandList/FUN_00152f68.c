/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00152f68` (_code @ 0x152f68, 0x110 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern int DAT_005b3ff4; /* 0x5b3ff4 */

/* Supplied declaration required: FUN_0016117c. */
/* Supplied declaration required: FUN_00167568. */
/* Supplied declaration required: FUN_0017cdb4. */
/* Supplied declaration required: FUN_0017cff0. */
/* Supplied declaration required: FUN_0017d920. */
/* Supplied declaration required: FUN_0017db14. */
/* Supplied declaration required: FUN_0017dd84. */
/* Supplied declaration required: FUN_0017df1c. */
/* Supplied declaration required: FUN_0017dfa8. */


void FUN_00152f68(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = param_4;
  FUN_0017dd84();
  temp_v0 = param_1 + *(int *)(param_1 + 0x304) * 0x18;
  FUN_0017dfa8(temp_v0 + 4,temp_v0 + 8,temp_v0 + 0xc,temp_v0 + 0x10);
  *(unsigned int *)(param_1 + 0x30c) = 2;
  FUN_00167568(param_1);
  temp_v0 = *(int *)(param_1 + 0x304) + 1;
  *(int *)(param_1 + 0x304) = temp_v0;
  DAT_005b3ff4 = DAT_005b3ff4 - 1;
  if (DAT_005b3ff4 != 0) {
    temp_v1 = *(int *)(DAT_005b3ff4 * 4 + 0x63fd44);
    *(unsigned int *)(param_1 + *(int *)(temp_v1 + 0x304) * 0x18 + 4) =
         *(unsigned int *)(param_1 + temp_v0 * 0x18 + 4);
    *(unsigned int *)(param_1 + *(int *)(temp_v1 + 0x304) * 0x18 + 8) =
         *(unsigned int *)(param_1 + *(int *)(param_1 + 0x304) * 0x18 + 8);
    FUN_0017df1c();
    *(unsigned int *)(temp_v1 + 0x30c) = 1;
  }
  else {
    FUN_0016117c();
    FUN_0017cff0(*(unsigned int *)(param_1 + 0x308));
    if ((param_2 != 0) && (*(int *)(param_1 + 0x14) != 0)) {
      FUN_0017d920(0x207,&temp_v2);
      FUN_0017db14(temp_v2,*(unsigned int *)(param_1 + 0x14),*(unsigned int *)(param_1 + 0x18));
      FUN_0017cdb4();
      return;
    }
  }
  return;
}
