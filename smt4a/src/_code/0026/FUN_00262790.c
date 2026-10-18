/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00262790` (_code @ 0x262790, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int *DAT_00588124; /* 0x588124 */

/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: FUN_0019c364. */
/* Supplied declaration required: FUN_001add24. */
/* Supplied declaration required: FUN_0021c354. */
/* Supplied declaration required: FUN_0035b304. */
/* Supplied declaration required: FUN_0037b450. */
/* Supplied declaration required: FUN_003c3e14. */
/* Supplied declaration required: FUN_003d2d6c. */


void FUN_00262790(void)

{
/* irregular: 10 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_00588124;
  if (DAT_00588124 != (unsigned int *)0x0) {
    FUN_003c3e14();
    if (*(short *)(puVar1 + 0x40) == 0x22) {
      FUN_003d2d6c(0xf);
      FUN_0021c354(0x3c);
    }
    FUN_0019a7f4(0,*(unsigned short *)((int)puVar1 + 0x102));
    temp_v0 = 0;
    do {
      if (puVar1[temp_v0 + 10] != 0) {
        FUN_001631d0(puVar1[temp_v0 + 1],0);
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 8);
    FUN_0019c364(puVar1[0x14]);
    FUN_0019c364(puVar1[0x15]);
    FUN_0019a5a0(puVar1[0x13]);
    FUN_0019a5a0(puVar1[0x12]);
    FUN_001631d0(*puVar1,0);
    FUN_0019a5a0(puVar1);
    DAT_00588124 = (unsigned int *)0x0;
    FUN_001add24(0x1a);
    FUN_0037b450();
    FUN_0035b304();
    return;
  }
  return;
}
