/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035d510` (_code @ 0x35d510, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

/* Supplied declaration required: FUN_00237a94. */
/* Supplied declaration required: FUN_00237cfc. */
/* Supplied declaration required: FUN_003f72d0. */


unsigned int FUN_0035d510(int *param_1,int *param_2,int *param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2 [2];
  
  FUN_00237cfc(&temp_v1,param_1);
  if (temp_v1 != 0) {
    FUN_00237a94(temp_v2,*param_3 + 8);
    if (temp_v2[0] != 0) {
      temp_v0 = temp_v1;
      FUN_003f72d0(temp_v2[0] + 8,&temp_v0,*(unsigned char *)(*param_1 + 10));
      *param_2 = temp_v1;
      *param_1 = *(int *)(*param_1 + 4);
      return 0;
    }
  }
  return 2;
}
