/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035b164` (_code @ 0x35b164, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f590; /* 0x57f590 */

extern int FUN_00480c28(void);


unsigned int FUN_0035b164(unsigned int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0057f590;
  if (param_2 != 0) {
    temp_v1 = FUN_00480c28();
    *(unsigned int *)(temp_v0 + 0x170) = param_1;
    *(unsigned char *)(temp_v0 + 0x17c) = 3;
    *(unsigned int *)(temp_v0 + 0x174) = param_1;
    *(int *)(temp_v0 + 0x188) = temp_v1 - *(int *)(temp_v0 + 0x178);
  }
  else {
    *(unsigned int *)(DAT_0057f590 + 0x170) = 0x14;
    *(unsigned char *)(temp_v0 + 0x17c) = 3;
    *(unsigned int *)(temp_v0 + 0x174) = 0x14;
    *(unsigned int *)(temp_v0 + 0x188) = param_1;
  }
  return 1;
}
