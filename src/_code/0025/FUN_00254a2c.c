/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00254a2c` (_code @ 0x254a2c, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int FUN_00151500(); /* 0x151500 */
extern unsigned char LAB_00155650; /* 0x155650 */


void FUN_00254a2c(unsigned int *param_1,int param_2)

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
      pcVar2 = (romwright_code *)&LAB_00155650;
    }
    else {
      pcVar2 = FUN_00151500;
    }
    *(unsigned char *)(temp_v0 + 0x58) = 1;
    *(romwright_code **)(temp_v0 + 0x4c) = pcVar2;
  }
  return;
}
