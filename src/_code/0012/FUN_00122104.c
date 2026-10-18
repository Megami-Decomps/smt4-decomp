/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00122104` (_code @ 0x122104, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int *DAT_004652a8; /* 0x4652a8 */

extern int FUN_00137138(void);


unsigned int FUN_00122104(int *param_1)

{
  int *piVar1;
  int temp_v0;
  unsigned int temp_v1;
  
  DAT_004652a8 = param_1;
  temp_v0 = FUN_00137138();
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
