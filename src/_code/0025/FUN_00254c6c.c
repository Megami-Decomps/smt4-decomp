/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00254c6c` (_code @ 0x254c6c, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int FUN_00151404(); /* 0x151404 */
extern unsigned char LAB_0015555c; /* 0x15555c */


void FUN_00254c6c(unsigned int *param_1,int param_2)

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
