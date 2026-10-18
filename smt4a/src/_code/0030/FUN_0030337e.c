/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030337e` (_code @ 0x30337e, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

/* Supplied declaration required: FUN_0030d01e. */


int FUN_0030337e(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v4 = *(int *)(param_1 + 4);
  temp_v2 = (*(int *)(param_1 + 8) - temp_v4) >> 3;
  while (temp_v3 = temp_v2, 0 < temp_v3) {
    temp_v2 = temp_v3 / 2;
    temp_v0 = temp_v2 * 8 + temp_v4;
    temp_v1 = FUN_0030d01e(temp_v0,param_2);
    if (temp_v1 != 0) {
      temp_v4 = temp_v0 + 8;
      temp_v2 = (temp_v3 - temp_v2) - 1;
    }
  }
  if ((*(int *)(param_1 + 8) != temp_v4) && (temp_v2 = FUN_0030d01e(param_2,temp_v4), temp_v2 != 0)) {
    temp_v4 = *(int *)(param_1 + 8);
  }
  return temp_v4;
}
