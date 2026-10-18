/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00359510` (_code @ 0x359510, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char LAB_001b9f9c; /* 0x1b9f9c */
extern int nw_anim_PlayPolicy_Loop(); /* 0x1c37f8 */


void FUN_00359510(unsigned int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  romwright_code *pcVar2;
  
  if ((*param_1 & 1) != 0) {
    temp_v0 = param_1[0x14];
  }
  else {
    temp_v0 = param_1[0x13];
  }
  if (temp_v0 != 0) {
    if (param_2 == 0) {
      pcVar2 = (romwright_code *)&LAB_001b9f9c;
    }
    else {
      pcVar2 = nw_anim_PlayPolicy_Loop;
    }
    *(unsigned char *)(temp_v0 + 0x58) = 1;
    *(romwright_code **)(temp_v0 + 0x4c) = pcVar2;
  }
  return;
}
