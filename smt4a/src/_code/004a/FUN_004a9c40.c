/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a9c40` (_code @ 0x4a9c40, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057a9c8; /* 0x57a9c8 */

extern int FUN_002cccf8(int);


void FUN_004a9c40(unsigned int param_1,unsigned short *param_2,unsigned short *param_3)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0057a9c8;
  temp_v1 = FUN_002cccf8(DAT_0057a9c8 + 0x28c4);
  if (temp_v1 != 0) {
    *param_2 = *(unsigned short *)(temp_v0 + 0x74b6);
    *param_3 = *(unsigned short *)(temp_v0 + 0x74b8);
  }
  return;
}
