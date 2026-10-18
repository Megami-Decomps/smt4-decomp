/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e1180` (_code @ 0x2e1180, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int FUN_00151404(); /* 0x151404 */
extern unsigned char LAB_0015555c; /* 0x15555c */


void FUN_002e1180(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  romwright_code *pcVar2;
  
  if ((0 < *(int *)(param_1 + 0x58)) && (temp_v0 = *(int *)(param_1 + 0x60), temp_v0 != 0)) {
    if (param_2 == 0) {
      pcVar2 = (romwright_code *)&LAB_0015555c;
    }
    else {
      pcVar2 = FUN_00151404;
    }
    *(unsigned char *)(temp_v0 + 0x58) = 1;
    *(romwright_code **)(temp_v0 + 0x4c) = pcVar2;
  }
  return;
}
