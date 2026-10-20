/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035ab90` (_code @ 0x35ab90, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_001695a0(void);
int FUN_0019a5a0(void);
int FUN_0019c364(void);
int FUN_001add24(int);
int FUN_002e3328(void);
int FUN_00321744(void);

extern unsigned int *DAT_0057f134; /* 0x57f134 */

/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_001695a0. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019c364. */
/* Supplied declaration required: FUN_001add24. */
/* Supplied declaration required: FUN_002e3328. */
/* Supplied declaration required: FUN_00321744. */


void FUN_0035ab90(void)

{
/* irregular: 7 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0057f134;
  if (DAT_0057f134[8] != 0) {
    FUN_0019c364();
    puVar1[8] = 0;
  }
  if (puVar1[9] != 0) {
    FUN_0019a5a0();
    puVar1[9] = 0;
  }
  FUN_00321744();
  if (puVar1[5] != 0) {
    FUN_0019c364();
  }
  if (puVar1[4] != 0) {
    FUN_0019a5a0();
  }
  if (puVar1[6] != 0) {
    FUN_0019a5a0();
  }
  if (puVar1[7] != 0) {
    FUN_0019a5a0();
  }
  FUN_001695a0();
  FUN_001add24(0x3e);
  FUN_001add24(0x25);
  FUN_001add24(0x14);
  FUN_001631d0(*puVar1,0);
  if (DAT_0057f134 != (unsigned int *)0x0) {
    FUN_002e3328();
    DAT_0057f134 = (unsigned int *)0x0;
  }
  return;
}

} /* extern "C" */
