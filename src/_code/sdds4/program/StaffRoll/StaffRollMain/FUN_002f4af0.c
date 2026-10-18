/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f4af0` (_code @ 0x2f4af0, 0x84 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_00432cc8; /* 0x432cc8 */

/* Supplied declaration required: FUN_00287990. */
/* Supplied declaration required: FUN_0029c650. */
/* Supplied declaration required: FUN_002aea7c. */
/* Supplied declaration required: FUN_002aeb2c. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */


void FUN_002f4af0(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_00432cc8;
  *(unsigned char *)((int)DAT_00432cc8 + 5) = 1;
  if (*(char *)(puVar1 + 1) != '\0') {
    FUN_00287990(0);
    FUN_00287990(1);
  }
  temp_v0 = 0;
  do {
    FUN_002aeb2c(0x34,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0xc);
  FUN_002aea7c(0x34);
  FUN_0029c650(0xf);
  FUN_002c45b8(*puVar1,0);
  FUN_002c4360(puVar1);
  DAT_00432cc8 = (unsigned int *)0x0;
  return;
}
