/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001988bc` (_code @ 0x1988bc, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001a83bc. */


int FUN_001988bc(int param_1,int param_2)

{
/* irregular: irregular input(s): in_s0; 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int in_s0;
  unsigned int temp_v2;
  unsigned long long temp_v3;
  
  temp_v1 = 0;
  temp_v3 = (unsigned long long)in_s0;
  do {
    if ((*(unsigned int *)(param_1 + 8) & (0x100 << (temp_v1 & 0xff))) == 0) {
      temp_v0 = param_1 + temp_v1 * 4;
      if ((*(unsigned int *)(param_1 + 8) & (1 << (temp_v1 & 0xff))) != 0) {
        temp_v2 = *(unsigned int *)(temp_v0 + 0xc);
      }
      else {
        temp_v2 = (unsigned int)temp_v3;
        FUN_001a83bc(*(unsigned int *)(temp_v0 + 0xc));
      }
      *(unsigned int *)(param_2 + temp_v1 * 4) = temp_v2;
    }
    temp_v1 = temp_v1 + 1;
  } while ((int)temp_v1 < 4);
  return ~(*(unsigned int *)(param_1 + 8) & 0xf00) << 8;
}
