/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f63d8` (_code @ 0x1f63d8, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_002931cc(int);
/* Supplied declaration required: FUN_002ae818. */


unsigned int FUN_001f63d8(int *param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  
  temp_v0 = FUN_002931cc(*param_1);
  temp_v1 = FUN_002931cc(*param_2);
  temp_v4 = (unsigned int)((temp_v0 & ~temp_v1) != 0);
  temp_v5 = (temp_v1 & ~temp_v0) != 0;
  if (temp_v5) {
    temp_v4 = 0xffffffff;
  }
  if (!temp_v5 && temp_v4 == 0) {
    temp_v2 = *param_1;
    FUN_002ae818();
    temp_v3 = *param_2;
    FUN_002ae818();
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + 0x24) - (unsigned int)*(unsigned short *)(temp_v2 + 0x24);
  }
  return temp_v4;
}
