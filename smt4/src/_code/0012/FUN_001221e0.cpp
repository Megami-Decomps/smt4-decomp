/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001221e0` (_code @ 0x1221e0, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int *DAT_004652a8; /* 0x4652a8 */

extern int FUN_00137214(void);


unsigned int FUN_001221e0(int *param_1)

{
  int *piVar1;
  int temp_v0;
  unsigned int temp_v1;
  
  DAT_004652a8 = param_1;
  temp_v0 = FUN_00137214();
  if (temp_v0 == 0) {
    temp_v1 = 0xffffffff;
  }
  else {
    *(unsigned int *)(temp_v0 + 0x20) = 0;
    *(unsigned int *)(temp_v0 + 0x24) = 0;
    piVar1 = DAT_004652a8;
    temp_v1 = 0;
    *DAT_004652a8 = temp_v0;
    piVar1[1] = 0;
    piVar1[2] = temp_v0;
    piVar1[3] = 0;
  }
  return temp_v1;
}

} /* extern "C" */
