/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003df6a4` (_code @ 0x3df6a4, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001801a4(void);
/* Supplied declaration required: FUN_00192608. */


void FUN_003df6a4(unsigned int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_001801a4();
  *param_1 = *(unsigned int *)(temp_v0 + 0x34);
  param_1[1] = *(unsigned int *)(temp_v0 + 0x38);
  param_1[2] = *(unsigned int *)(temp_v0 + 0x3c);
  param_1[3] = *(unsigned int *)(temp_v0 + 0x40);
  if (param_2 != 0) {
    temp_v1 = (unsigned int)*(unsigned short *)(temp_v0 + 0xc);
    FUN_00192608();
    if (temp_v1 != 0) {
      *(unsigned short *)(param_1 + 4) = *(unsigned short *)(temp_v1 + 0x3a);
    }
  }
  return;
}
