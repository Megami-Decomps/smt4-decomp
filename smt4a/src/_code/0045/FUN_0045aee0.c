/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045aee0` (_code @ 0x45aee0, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0045aee0(int *param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_r12 */
  int temp_v0;
  int temp_v1;
  unsigned short in_r12;
  
  if (param_3 != 0) {
    in_r12 = 0xffff;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  if (param_3 != 0) {
    temp_v1 = 0;
    do {
      param_3 = param_3 - 1;
      temp_v0 = temp_v1 * 2;
      temp_v1 = temp_v1 + 1;
      *(unsigned short *)(*param_1 + temp_v0) = in_r12;
    } while (param_3 != 0);
  }
  return;
}
