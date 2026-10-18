/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b2b34` (_code @ 0x2b2b34, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001ad9b4. */
extern int FUN_002f744c(unsigned char);


void FUN_002b2b34(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = (unsigned int)*param_1;
  FUN_001ad9b4();
  temp_v1 = (unsigned int)*param_2;
  FUN_001ad9b4();
  if (temp_v0 != 0 && temp_v1 != 0) {
    temp_v2 = FUN_002f744c(*(unsigned char *)(temp_v0 + 6));
    temp_v3 = FUN_002f744c(*(unsigned char *)(temp_v1 + 6));
    if (temp_v2 == temp_v3) {
      FUN_001ad9b4();
      FUN_001ad9b4();
    }
  }
  return;
}
