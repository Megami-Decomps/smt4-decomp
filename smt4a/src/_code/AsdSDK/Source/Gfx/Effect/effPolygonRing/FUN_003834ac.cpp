/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003834ac` (_code @ 0x3834ac, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char DAT_005c12a4; /* 0x5c12a4 */


void FUN_003834ac(int param_1,unsigned int *param_2)

{
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 0x3c);
  *(unsigned int *)(*(int *)(temp_v0 + 8) + 0x50) = *param_2;
  temp_v0 = *(int *)(temp_v0 + 4);
  (**(romwright_code **)(&DAT_005c12a4 + *(int *)(temp_v0 + 0x38) * 0x18))(temp_v0);
  *(unsigned int *)(temp_v0 + 0x34) = 0;
  return;
}

} /* extern "C" */
