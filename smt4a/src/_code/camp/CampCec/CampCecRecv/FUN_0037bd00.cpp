/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037bd00` (_code @ 0x37bd00, 0xf8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_0019a5a0(...);
int FUN_0019c364(void);
int FUN_001add24(int);
int FUN_00321744(void);
int FUN_00333274(void);
int FUN_0036c8e8(unsigned int);

extern unsigned int *DAT_0057f128; /* 0x57f128 */

/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019c364. */
/* Supplied declaration required: FUN_001add24. */
/* Supplied declaration required: FUN_00321744. */
/* Supplied declaration required: FUN_00333274. */
/* Supplied declaration required: FUN_0036c8e8. */


void FUN_0037bd00(void)

{
/* irregular: 7 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0057f128;
  if (DAT_0057f128[0xf8] != 0) {
    if (DAT_0057f128[0xd4] != 0) {
      FUN_0019a5a0();
    }
    if (puVar1[0xd5] != 0) {
      FUN_0019a5a0();
    }
    if (puVar1[0xd8] != 0) {
      FUN_0019c364();
    }
  }
  else {
    FUN_001add24(0x25);
    FUN_00321744();
    if (puVar1[0xd2] != 0) {
      FUN_0019a5a0();
    }
    if (puVar1[0xd3] != 0) {
      FUN_0019a5a0();
    }
    if (puVar1[0xd4] != 0) {
      FUN_0019a5a0();
    }
    if (puVar1[0xd5] != 0) {
      FUN_0019a5a0();
    }
    if (puVar1[0xd6] != 0) {
      FUN_0019a5a0();
    }
    if (puVar1[0xd7] != 0) {
      FUN_0019a5a0();
    }
    if (puVar1[0xd8] != 0) {
      FUN_0019c364();
    }
    if (puVar1[0xd9] != 0) {
      FUN_0019c364();
    }
    FUN_0036c8e8(puVar1[0x1f6]);
    FUN_00333274();
  }
  FUN_001631d0(*puVar1,0);
  FUN_0019a5a0(puVar1);
  DAT_0057f128 = (unsigned int *)0x0;
  return;
}

} /* extern "C" */
