/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001142cc` (_code @ 0x1142cc, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

/* Supplied declaration required: FUN_00130980. */


int FUN_001142cc(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1 [7];
  int temp_v2 [3];
  
  temp_v0 = *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = temp_v0 + 1;
  if (temp_v0 + 1 == 0) {
    *(unsigned int *)(param_1 + 0x58) = 1;
  }
  temp_v1[1] = 0;
  temp_v1[0] = temp_v0;
  FUN_00130980(temp_v2,param_1 + 0x20,temp_v1);
  *(unsigned int *)(temp_v2[0] + 0x14) = param_2;
  return temp_v0;
}
