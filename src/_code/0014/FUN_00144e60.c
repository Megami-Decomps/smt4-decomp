/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00144e60` (_code @ 0x144e60, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_004729b8; /* 0x4729b8 */
extern signed char DAT_004729b9; /* 0x4729b9 */
extern int DAT_004729bc; /* 0x4729bc */


void FUN_00144e60(unsigned char param_1)

{
  char temp_v0;
  int temp_v1;
  short *psVar3;
  
  temp_v1 = DAT_004729bc;
  temp_v0 = '\0';
  if (DAT_004729b8 != '\0') {
    temp_v0 = DAT_004729b9;
  }
  if (DAT_004729b8 != '\0' && temp_v0 != '\0') {
    psVar3 = (short *)(DAT_004729bc + 0x4e00);
    *(unsigned char *)(DAT_004729bc + *psVar3 * 0x138) = param_1;
    *(short *)(temp_v1 + 0x4e04) = *psVar3;
  }
  return;
}
