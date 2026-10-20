/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003acc80` (_code @ 0x3acc80, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b9024(void);

/* Supplied declaration required: FUN_002b9024. */


int FUN_003acc80(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = (unsigned int)*param_1;
  FUN_002b9024();
  temp_v1 = (unsigned int)*param_2;
  FUN_002b9024();
  temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + 0x14) - (unsigned int)*(unsigned short *)(temp_v0 + 0x14);
  if (temp_v2 == 0) {
    temp_v0 = (unsigned int)*param_1;
    FUN_002b9024();
    temp_v1 = (unsigned int)*param_2;
    FUN_002b9024();
    temp_v2 = (unsigned int)*(unsigned char *)(temp_v0 + 3) - (unsigned int)*(unsigned char *)(temp_v1 + 3);
    if (temp_v2 == 0) {
      temp_v2 = (unsigned int)*param_2 - (unsigned int)*param_1;
    }
  }
  return temp_v2;
}

} /* extern "C" */
