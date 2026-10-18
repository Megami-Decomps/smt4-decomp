/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00312028` (_code @ 0x312028, 0x11c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0043427c; /* 0x43427c */

extern int FUN_0027eb98(unsigned int);
/* Supplied declaration required: FUN_0028df54. */
extern unsigned int FUN_00296f60(unsigned int);
/* Supplied declaration required: FUN_002ae3f0. */
/* Supplied declaration required: FUN_002b9364. */


unsigned int FUN_00312028(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_0027eb98(DAT_0043427c);
  temp_v1 = *(int *)(temp_v1 + 0x20);
  if (*(int *)(temp_v1 + 0x278) != 0) {
    temp_v5 = 0;
    do {
      temp_v2 = (unsigned int)*(unsigned short *)(*(int *)(temp_v1 + 0x278) + temp_v5 * 2 + 0x34);
      FUN_002ae3f0();
      if ((temp_v2 != 0) && (temp_v0 == (*(unsigned int *)(temp_v2 + 0x28) & 0x1ffff) >> 0xc)) {
        temp_v4 = 1;
        FUN_0028df54(temp_v4);
        return 1;
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 8);
  }
  if (*(int *)(temp_v1 + 0x27c) != 0) {
    temp_v5 = 0;
    do {
      temp_v2 = (unsigned int)*(unsigned short *)(*(int *)(temp_v1 + 0x27c) + temp_v5 * 2 + 0x34);
      FUN_002ae3f0();
      if ((temp_v2 != 0) && (temp_v0 == (*(unsigned int *)(temp_v2 + 0x28) & 0x1ffff) >> 0xc)) {
        temp_v4 = 1;
        FUN_0028df54(temp_v4);
        return 1;
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 8);
  }
  if (*(int *)(temp_v1 + 0x284) != 0) {
    temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + 0xce);
    FUN_002b9364();
    temp_v1 = 0;
    do {
      temp_v3 = (unsigned int)*(unsigned short *)(temp_v2 + temp_v1 * 2 + 0x3c);
      FUN_002ae3f0();
      if ((temp_v3 != 0) && (temp_v0 == (*(unsigned int *)(temp_v3 + 0x28) & 0x1ffff) >> 0xc)) {
        temp_v4 = 1;
        FUN_0028df54(temp_v4);
        return 1;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 8);
  }
  temp_v4 = 0;
  FUN_0028df54(temp_v4);
  return 1;
}
