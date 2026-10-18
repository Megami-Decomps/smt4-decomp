/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045c0ac` (_code @ 0x45c0ac, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055bda8; /* 0x55bda8 */
extern unsigned char DAT_0055bdc8; /* 0x55bdc8 */
extern unsigned char DAT_00646e74; /* 0x646e74 */


void FUN_0045c0ac(unsigned int *param_1)

{
  *param_1 = (unsigned int)&DAT_0055bda8;
  param_1[1] = (unsigned int)&DAT_0055bdc8;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = (unsigned int)(param_1 + 4);
  param_1[5] = (unsigned int)(param_1 + 4);
  param_1[6] = (unsigned int)&DAT_00646e74;
  param_1[7] = 0x20;
  param_1[8] = 0x3f666666;
  param_1[9] = 0;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(unsigned char *)(param_1 + 0xe) = 0;
  return;
}
