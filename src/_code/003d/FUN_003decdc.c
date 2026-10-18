/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003decdc` (_code @ 0x3decdc, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */


int FUN_003decdc(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  
  temp_v3 = *(int *)(param_1 + 0x10) == 0;
  temp_v0 = 0;
  temp_v1 = 0;
  if (!temp_v3) {
    temp_v1 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x10) + 0xe);
    temp_v0 = temp_v1 - param_2;
  }
  temp_v2 = !temp_v3 && SBORROW4(temp_v1,param_2);
  if ((temp_v3 || temp_v1 == param_2) || temp_v0 < 0 != temp_v2) {
    param_1 = 0;
  }
  if ((!temp_v3 && temp_v1 != param_2) && temp_v0 < 0 == temp_v2) {
    param_1 = *(int *)(*(int *)(param_1 + 0x20) +
                      (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x24) + param_2 * 4) * 0x18);
  }
  return param_1;
}
