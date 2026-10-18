/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004039b4` (_code @ 0x4039b4, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0039b984. */


int FUN_004039b4(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned short *puVar4;
  unsigned short *puVar5;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = (unsigned int)*param_1;
  FUN_0039b984();
  temp_v1 = (unsigned int)*param_2;
  FUN_0039b984();
  temp_v4 = 999;
  temp_v3 = temp_v4;
  if (temp_v0 != 0) {
    temp_v3 = (unsigned int)*(unsigned short *)(temp_v0 + 4);
  }
  temp_v0 = temp_v4;
  if (temp_v1 != 0) {
    temp_v0 = (unsigned int)*(unsigned short *)(temp_v1 + 4);
  }
  temp_v2 = temp_v3 - temp_v0;
  if (temp_v2 == 0) {
    puVar4 = (unsigned short *)(unsigned int)*param_1;
    FUN_0039b984();
    puVar5 = (unsigned short *)(unsigned int)*param_2;
    FUN_0039b984();
    temp_v3 = temp_v4;
    if (puVar4 != (unsigned short *)0x0) {
      temp_v3 = (unsigned int)*puVar4;
    }
    if (puVar5 != (unsigned short *)0x0) {
      temp_v4 = (unsigned int)*puVar5;
    }
    temp_v2 = temp_v3 - temp_v4;
  }
  return temp_v2;
}
