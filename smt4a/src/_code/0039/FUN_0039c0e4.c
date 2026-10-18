/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039c0e4` (_code @ 0x39c0e4, 0x10c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0057f258; /* 0x57f258 */

/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_001641c4. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: FUN_0019c364. */
/* Supplied declaration required: FUN_00237210. */
/* Supplied declaration required: FUN_002e132c. */
/* Supplied declaration required: FUN_002e3328. */


void FUN_0039c0e4(void)

{
/* irregular: 8 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_0057f258;
  temp_v0 = 0;
  if (*(short *)(DAT_0057f258 + 0x52) != 0) {
    do {
      FUN_001641c4();
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < (int)(unsigned int)*(unsigned short *)(puVar1 + 0x52));
  }
  FUN_00237210(puVar1[0x176]);
  puVar1[0x176] = 0;
  temp_v0 = 0;
  do {
    FUN_0019a7f4(0x31,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 2);
  FUN_002e132c(0x31);
  if (puVar1[0xd] != 0) {
    FUN_0019c364();
    puVar1[0xd] = 0;
  }
  if (puVar1[0xb] != 0) {
    FUN_0019a5a0();
    puVar1[0xb] = 0;
  }
  if (puVar1[10] != 0) {
    FUN_0019a5a0();
    puVar1[10] = 0;
  }
  if (puVar1[0xc] != 0) {
    FUN_0019a5a0();
    puVar1[0xc] = 0;
    if (puVar1[10] != 0) {
      FUN_0019a5a0();
      puVar1[10] = 0;
    }
  }
  if (puVar1[4] != 0) {
    FUN_0019a5a0();
    puVar1[4] = 0;
  }
  FUN_001631d0(*puVar1,0);
  if (DAT_0057f258 != (unsigned int *)0x0) {
    FUN_002e3328();
    DAT_0057f258 = (unsigned int *)0x0;
  }
  return;
}
