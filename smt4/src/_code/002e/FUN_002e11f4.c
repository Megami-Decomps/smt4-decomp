/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e11f4` (_code @ 0x2e11f4, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int nw_anim_PlayPolicy_Loop(); /* 0x151500 */
extern unsigned char LAB_00155650; /* 0x155650 */


void FUN_002e11f4(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  romwright_code *pcVar2;
  
  if ((0 < *(int *)(param_1 + 0x58)) && (temp_v0 = *(int *)(param_1 + 0x60), temp_v0 != 0)) {
    if (param_2 == 0) {
      pcVar2 = (romwright_code *)&LAB_00155650;
    }
    else {
      pcVar2 = nw_anim_PlayPolicy_Loop;
    }
    *(unsigned char *)(temp_v0 + 0x58) = 1;
    *(romwright_code **)(temp_v0 + 0x4c) = pcVar2;
  }
  return;
}
