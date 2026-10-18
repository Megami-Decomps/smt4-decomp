/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f9ed4` (_code @ 0x2f9ed4, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_00472718; /* 0x472718 */


void FUN_002f9ed4(int param_1,unsigned int *param_2)

{
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 0x3c);
  *(unsigned int *)(*(int *)(temp_v0 + 8) + 0x50) = *param_2;
  temp_v0 = *(int *)(temp_v0 + 4);
  (**(romwright_code **)(&DAT_00472718 + *(int *)(temp_v0 + 0x38) * 0x18))(temp_v0);
  *(unsigned int *)(temp_v0 + 0x34) = 0;
  return;
}
