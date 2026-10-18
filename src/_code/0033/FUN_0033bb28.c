/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033bb28` (_code @ 0x33bb28, 0x6c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002931cc(unsigned int);
/* Supplied declaration required: FUN_002b9364. */
extern int FUN_002c0bcc(unsigned int);
/* Supplied declaration required: FUN_0033b97c. */


unsigned short FUN_0033bb28(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = (unsigned int)*(unsigned short *)(param_1 + 0x46);
  FUN_002b9364();
  temp_v0 = (*(unsigned int *)(temp_v0 + 0x2c) & 0x1fffff) >> 0xe;
  FUN_0033b97c();
  temp_v1 = FUN_002c0bcc(0xb);
  temp_v2 = FUN_002c0bcc(0xd);
  temp_v3 = FUN_002931cc(6);
  if (temp_v3 != 0) {
    if (temp_v2 >= 2) {
      return *(unsigned short *)(temp_v0 + temp_v1 * 2 + 2);
    }
  }
  else if (0 < temp_v2) {
    return *(unsigned short *)(temp_v0 + temp_v1 * 2 + 2);
  }
  temp_v1 = temp_v1 + 0xc;
  return *(unsigned short *)(temp_v0 + temp_v1 * 2 + 2);
}
