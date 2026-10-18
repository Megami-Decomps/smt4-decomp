/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003483bc` (_code @ 0x3483bc, 0x1a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f6dc; /* 0x57f6dc */

extern int FUN_00164af0(unsigned int);
extern int FUN_001656a0(unsigned int);
/* Supplied declaration required: FUN_0018719c. */
/* Supplied declaration required: FUN_003fd63c. */


unsigned int FUN_003483bc(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v0 = FUN_00164af0(3);
  if ((temp_v0 != 0) || (temp_v0 = FUN_00164af0(0xc), temp_v0 != 0)) {
    DAT_0057f6dc = DAT_0057f6dc + 1;
  }
  temp_v0 = FUN_00164af0(6);
  if ((temp_v0 != 0) || (temp_v0 = FUN_00164af0(0xf), temp_v0 != 0)) {
    DAT_0057f6dc = DAT_0057f6dc + 0x10;
  }
  temp_v0 = FUN_00164af0(4);
  if ((temp_v0 != 0) || (temp_v0 = FUN_00164af0(0xd), temp_v0 != 0)) {
    DAT_0057f6dc = DAT_0057f6dc - 1;
  }
  temp_v0 = FUN_00164af0(5);
  if ((temp_v0 != 0) || (temp_v0 = FUN_00164af0(0xe), temp_v0 != 0)) {
    DAT_0057f6dc = DAT_0057f6dc - 0x10;
  }
  temp_v0 = FUN_00164af0(8);
  if (temp_v0 != 0) {
    DAT_0057f6dc = DAT_0057f6dc - 0x100;
  }
  temp_v0 = FUN_00164af0(7);
  if (temp_v0 != 0) {
    DAT_0057f6dc = DAT_0057f6dc + 0x100;
  }
  if (DAT_0057f6dc >= 0x1500) {
    DAT_0057f6dc = DAT_0057f6dc - 0x1500;
  }
  if (DAT_0057f6dc < 0) {
    DAT_0057f6dc = DAT_0057f6dc + 0x1500;
  }
  temp_v0 = FUN_001656a0(0);
  if (temp_v0 != 0) {
    temp_v1 = FUN_0018719c(DAT_0057f6dc);
    FUN_003fd63c(DAT_0057f6dc,temp_v1 ^ 1,1);
  }
  temp_v0 = FUN_001656a0(1);
  if (temp_v0 != 0) {
    temp_v2 = 1;
  }
  else {
    temp_v4 = 0;
    temp_v0 = DAT_0057f6dc + ((unsigned int)(DAT_0057f6dc >> 0x1f) >> 0x18);
    do {
      temp_v3 = 0;
      do {
        FUN_0018719c(temp_v3 + temp_v4 * 0x10 + (temp_v0 >> 8) * 0x100);
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 0x10);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0x10);
    temp_v2 = 0;
  }
  return temp_v2;
}
