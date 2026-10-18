/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003aa934` (_code @ 0x3aa934, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002498ec. */
extern int FUN_0024c52c(unsigned short);
/* Supplied declaration required: FUN_002ae164. */


int FUN_003aa934(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v1 = (unsigned int)*param_1;
  FUN_002498ec();
  temp_v2 = (unsigned int)*param_2;
  FUN_002498ec();
  temp_v3 = FUN_0024c52c(*(unsigned short *)(temp_v1 + 0x26));
  temp_v4 = FUN_0024c52c(*(unsigned short *)(temp_v2 + 0x26));
  temp_v3 = temp_v3 - temp_v4;
  if (temp_v3 == 0) {
    temp_v1 = (unsigned int)*(unsigned short *)(temp_v1 + 0x26);
    FUN_002ae164();
    temp_v0 = *(unsigned short *)(temp_v1 + 0x2c);
    temp_v1 = (unsigned int)*(unsigned short *)(temp_v2 + 0x26);
    FUN_002ae164();
    temp_v3 = (unsigned int)*(unsigned short *)(temp_v1 + 0x2c) - (unsigned int)temp_v0;
    if (temp_v3 == 0) {
      temp_v3 = (unsigned int)*param_1 - (unsigned int)*param_2;
    }
  }
  return temp_v3;
}
