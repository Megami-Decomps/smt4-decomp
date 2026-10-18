/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028a494` (_code @ 0x28a494, 0xe8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0043dcf0; /* 0x43dcf0 */

/* Supplied declaration required: FUN_00292eb0. */
extern int FUN_002a0fac(void);
/* Supplied declaration required: FUN_002a755c. */
/* Supplied declaration required: FUN_002b2520. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */
/* Supplied declaration required: FUN_003ca154. */


void FUN_0028a494(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_0043dcf0;
  temp_v0 = FUN_002a0fac();
  *(unsigned char *)(temp_v0 + 0x40) = *(unsigned char *)((int)puVar1 + 0x42);
  if (puVar1[5] != 0) {
    FUN_002a755c();
  }
  if (puVar1[4] != 0) {
    FUN_002c4360();
  }
  if (puVar1[3] != 0) {
    FUN_002c4360();
  }
  temp_v0 = 0;
  do {
    if (puVar1[temp_v0 + 0x1b2] != 0) {
      FUN_002b2520(puVar1[temp_v0 + 0x1b2]);
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 4);
  temp_v0 = 0;
  do {
    if (puVar1[temp_v0 + 0x1b6] != 0) {
      FUN_002b2520(puVar1[temp_v0 + 0x1b6]);
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x18);
  if (puVar1[0x457] != 0) {
    FUN_003ca154();
    FUN_002b2520();
  }
  puVar1[0x457] = 0;
  FUN_00292eb0();
  FUN_002c45b8(*puVar1,0);
  FUN_002c4360(puVar1);
  DAT_0043dcf0 = (unsigned int *)0x0;
  return;
}
