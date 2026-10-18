/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00206f30` (_code @ 0x206f30, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0028fde4(unsigned short);
/* Supplied declaration required: FUN_002b4854. */


int FUN_00206f30(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_0028fde4(*param_1);
  temp_v1 = FUN_0028fde4(*param_2);
  temp_v1 = temp_v1 - temp_v0;
  if (temp_v1 == 0) {
    temp_v2 = (unsigned int)*param_1;
    FUN_002b4854();
    temp_v3 = (unsigned int)*param_2;
    FUN_002b4854();
    temp_v1 = (unsigned int)*(unsigned char *)(temp_v2 + 0x6f) - (unsigned int)*(unsigned char *)(temp_v3 + 0x6f);
  }
  return temp_v1;
}
