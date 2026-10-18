/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f9450` (_code @ 0x4f9450, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_002e4c2c(int);
/* Supplied declaration required: FUN_003478dc. */


void FUN_004f9450(int param_1)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  char *pcVar5;
  unsigned char temp_v4;
  unsigned char temp_v5;
  
  temp_v3 = 0;
  do {
    temp_v1 = param_1 + temp_v3 * 0x8c;
    pcVar5 = *(char **)(temp_v1 + 0x2820);
    temp_v0 = *pcVar5;
    temp_v4 = temp_v0 == 'V';
    if (temp_v4) {
      temp_v0 = pcVar5[1];
    }
    temp_v5 = temp_v4 && temp_v0 == 'E';
    if (temp_v4 && temp_v0 == 'E') {
      temp_v5 = pcVar5[2] == 'R';
    }
    if (temp_v5) {
      temp_v2 = FUN_002e4c2c(temp_v1 + 0x2824);
      *(char *)(temp_v1 + 0x281c) = (char)temp_v2;
      FUN_003478dc(temp_v2,pcVar5);
      *(char *)(temp_v1 + 0x281c) = (char)temp_v2;
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0xb);
  return;
}
