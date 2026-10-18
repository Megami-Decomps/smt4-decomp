/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00521898` (_code @ 0x521898, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

/* Supplied declaration required: FUN_002e5f10. */
/* Supplied declaration required: FUN_00521898. */


void FUN_00521898(int param_1,int param_2,int param_3,int param_4,int param_5)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  if (param_4 != 0) {
    temp_v0 = *(unsigned int *)(param_1 + 8);
    if (((unsigned int)(param_2 + param_4) <= temp_v0) && ((unsigned int)(param_3 + param_4) <= temp_v0)) {
      FUN_002e5f10(*(int *)(param_1 + 4) + param_2,*(int *)(param_1 + 4) + param_3,param_4,param_4);
      return;
    }
    temp_v1 = param_2;
    if ((unsigned int)(param_2 + param_4) <= temp_v0) {
      temp_v1 = param_3;
    }
    temp_v1 = temp_v0 - temp_v1;
    temp_v2 = param_2 + temp_v1;
    temp_v3 = param_3 + temp_v1;
    if (temp_v0 <= temp_v2) {
      temp_v2 = temp_v2 - temp_v0;
    }
    if (temp_v0 <= temp_v3) {
      temp_v3 = temp_v3 - temp_v0;
    }
    if (param_5 == 0) {
      FUN_00521898(param_1,temp_v2,temp_v3,param_4 - temp_v1,0);
      FUN_00521898(param_1,param_2,param_3,temp_v1,0);
      return;
    }
    FUN_00521898(param_1,param_2,param_3,temp_v1,1);
    FUN_00521898(param_1,temp_v2,temp_v3,param_4 - temp_v1,1);
  }
  return;
}
